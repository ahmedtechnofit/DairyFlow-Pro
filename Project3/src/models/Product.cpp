// src/models/Product.cpp
#include "models/Product.h"

// 1. الـ Constructor: بيدي قيم ابتدائية عشان الميموري تكون نضيفة
Product::Product() {
    id = 0;
    name = "";
    price = 0.0;
    cost = 0.0;
    quantity = 0;
    barcode = "";
}

// 2. الـ Setters: بتاخد القيمة من الـ UI وتخزنها في المتغيرات Private
void Product::setId(int i) { id = i; }
void Product::setName(std::string n) { name = n; }
void Product::setPrice(double p) { price = p; }
void Product::setCost(double c) { cost = c; }
void Product::setQuantity(int q) { quantity = q; }
void Product::setBarcode(std::string b) { barcode = b; }

// 3. الـ Getters: بتاخد القيمة من المتغير عشان نبعتها للداتابيز أو نعرضها
int Product::getId() { return id; }
std::string Product::getName() { return name; }
double Product::getPrice() { return price; }
double Product::getCost() { return cost; }
int Product::getQuantity() { return quantity; }
std::string Product::getBarcode() { return barcode; }