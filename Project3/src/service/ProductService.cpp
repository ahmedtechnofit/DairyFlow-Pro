// src/service/ProductService.cpp
#include "service/ProductService.h"
#include "dao/ProductDAO.h"

bool ProductService::saveProduct(Product product) {
    // التأكد من أن البيانات منطقية
    if (product.getName().empty()) return false;
    if (product.getPrice() < 0) return false;
    if (product.getCost() < 0) return false;
    if (product.getQuantity() < 0) return false;




    return productDAO.addProduct(product);

}
std::vector<Product> ProductService::getAllProducts()
{
    return productDAO.getAll();
}
bool ProductService::deleteProduct(std::string barcode)
{
    if (barcode.empty())
        return false;

    return productDAO.deleteProduct(barcode);
}
std::vector<Product> ProductService::searchProducts(std::string keyword)
{
    return productDAO.searchProducts(keyword);
}