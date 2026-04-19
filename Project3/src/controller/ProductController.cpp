#include "controller/ProductController.h"

// لازم السطر ده يطابق الهيدر: (name, price, cost, qty, barcode)
bool ProductController::handleCreateProduct(std::string name, double price, double cost, int qty, std::string barcode) {
    Product p;

    p.setName(name);
    p.setPrice(price);
    p.setCost(cost);        // تأكد إن دي موجودة في الموديل
    p.setQuantity(qty);
    p.setBarcode(barcode);  // تأكد إن دي موجودة في الموديل

    return productService.saveProduct(p);
}