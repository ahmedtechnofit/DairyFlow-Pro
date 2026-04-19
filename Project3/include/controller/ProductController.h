#ifndef PRODUCTCONTROLLER_H
#define PRODUCTCONTROLLER_H

#include <vector>
#include "models/Product.h"
#include "service/ProductService.h" // عشان يشوف الـ Service

class ProductController {
private:
    // ده اللي بيحل خطأ identifier "productService" is undefined
    ProductService productService;

public:
    // لازم نعلن عن الدالة هنا
    bool handleCreateProduct(std::string name, double price, double cost, int qty, std::string barcode);
    std::vector<Product> getAllProducts();
    std::vector<Product> searchProduct(std::string keyword);
    bool handleDeleteProduct(std::string barcode);
};

#endif