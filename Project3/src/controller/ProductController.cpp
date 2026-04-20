#include "controller/ProductController.h"
//#include "dao/ProductDAO.h"
//#include "service/ProductService.h"

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

std::vector<Product> ProductController::getAllProducts()
{
    return productService.getAllProducts();
}
bool ProductController::handleDeleteProduct(std::string barcode)
{
    return productService.deleteProduct(barcode);
}
std::vector<Product> ProductController::searchProducts(std::string keyword)
{
    ProductService service;
    return service.searchProducts(keyword);
}