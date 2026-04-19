// src/dao/ProductDAO.cpp
#include "dao/ProductDAO.h"
#include "dao/Database.h"

bool ProductDAO::addProduct(Product product) {
    // تأكد إن ترتيب العواميد (name, price, cost, quantity, barcode) هو نفس ترتيب الجدول في MySQL
    std::string query = "INSERT INTO Products (name, price, cost, quantity, barcode) VALUES ('"
        + product.getName() + "', "
        + std::to_string(product.getPrice()) + ", "
        + std::to_string(product.getCost()) + ", "
        + std::to_string(product.getQuantity()) + ", '"
        + product.getBarcode() + "')";

    return Database::executeUpdate(query);
}