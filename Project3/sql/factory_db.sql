-- 1. إنشاء قاعدة البيانات
CREATE DATABASE IF NOT EXISTS factory_db;
USE factory_db;

-- 2. جدول المستخدمين (تم تعديل UNIQUE لليوزر والباسورد)
CREATE TABLE IF NOT EXISTS Users (
    id INT AUTO_INCREMENT PRIMARY KEY,
    username VARCHAR(50) NOT NULL UNIQUE,
    password VARCHAR(255) NOT NULL UNIQUE, -- تم زيادة الطول لدعم التشفير مستقبلاً
    role VARCHAR(20) NOT NULL

);

-- 3. جدول العملاء (إضافة UNIQUE للهاتف)
CREATE TABLE IF NOT EXISTS Customers (
    id INT AUTO_INCREMENT PRIMARY KEY,
    name VARCHAR(100) NOT NULL,
    phone VARCHAR(20) UNIQUE,
    address TEXT
);

-- 4. جدول الموردين (إضافة UNIQUE للهاتف)
CREATE TABLE IF NOT EXISTS Suppliers (
    id INT AUTO_INCREMENT PRIMARY KEY,
    name VARCHAR(100) NOT NULL,
    phone VARCHAR(20) UNIQUE,
    address TEXT
);

-- 5. جدول المنتجات (إضافة UNIQUE للباركود وتعديل نوع العملة)
CREATE TABLE IF NOT EXISTS Products (
    id INT AUTO_INCREMENT PRIMARY KEY,
    name VARCHAR(100) NOT NULL,
    price DECIMAL(10, 2) NOT NULL, -- أدق من DOUBLE
    cost DECIMAL(10, 2) NOT NULL,
     INT DEFAULT 0,
    d VARCHAR(100) UNIQUE, 
    image_path TEXT,
    expiry_date DATE
);

-- 6. جدول الإنتاج
CREATE TABLE IF NOT EXISTS Production (
    id INT AUTO_INCREMENT PRIMARY KEY,
    product_id INT,
    quantity INT NOT NULL,
    production_date DATE,
    FOREIGN KEY (product_id) REFERENCES Products(id) ON DELETE CASCADE
);

-- 7. جدول المبيعات
CREATE TABLE IF NOT EXISTS Sales (
    id INT AUTO_INCREMENT PRIMARY KEY,
    product_id INT,
    customer_id INT,
    quantity INT NOT NULL,
    price_per_unit DECIMAL(10, 2) NOT NULL,
    total_price DECIMAL(10, 2) NOT NULL,
    sale_date DATE,
    FOREIGN KEY (product_id) REFERENCES Products(id),
    FOREIGN KEY (customer_id) REFERENCES Customers(id)
);

-- 8. جدول المشتريات
CREATE TABLE IF NOT EXISTS Incoming_Purchases (
    purchase_id INT AUTO_INCREMENT PRIMARY KEY,
    product_id INT,
    supplier_id INT,
    quantity INT NOT NULL,
    original_price DECIMAL(10, 2),
    discount_percent DECIMAL(5, 2) DEFAULT 0.00,
    final_cost DECIMAL(10, 2),
    production_date DATE,
    expiry_date DATE,
    entry_date TIMESTAMP DEFAULT CURRENT_TIMESTAMP,
    FOREIGN KEY (product_id) REFERENCES Products(id),
    FOREIGN KEY (supplier_id) REFERENCES Suppliers(id)
);

-- 9. جدول المكونات (Sub Layers)
CREATE TABLE IF NOT EXISTS Sub_Layers (
    id INT AUTO_INCREMENT PRIMARY KEY,
    product_id INT,
    layer_name VARCHAR(100),
    quantity DOUBLE,
    unit VARCHAR(20),
    FOREIGN KEY (product_id) REFERENCES Products(id) ON DELETE CASCADE
);

-- 10. تتبع تصنيع الجبنة (Plate Cheese)
CREATE TABLE IF NOT EXISTS Plate_Cheese (
    id INT AUTO_INCREMENT PRIMARY KEY,
    product_id INT,
    batch_number VARCHAR(50) UNIQUE, -- الباتش لازم يكون فريد لسهولة التتبع
    milk_quantity DOUBLE,
    output_quantity DOUBLE,
    production_date DATE,
    notes TEXT,
    FOREIGN KEY (product_id) REFERENCES Products(id) ON DELETE CASCADE
);

-- إدخال بيانات تجريبية (بعد التحديثات)
INSERT IGNORE INTO Users (username, password, role) VALUES ('admin', 'admin_pass_123', 'admin');
INSERT IGNORE INTO Suppliers (name, phone, address) VALUES ('شركة النور للألبان', '01012345678', 'القاهرة');
INSERT IGNORE INTO Customers (name, phone, address) VALUES ('كارفور', '01222222222', 'الإسكندرية');
INSERT IGNORE INTO Products (name, price, cost, quantity, barcode, expiry_date) 
VALUES ('زبادي فراولة', 5.00, 3.00, 100, '987654321', '2026-04-01');