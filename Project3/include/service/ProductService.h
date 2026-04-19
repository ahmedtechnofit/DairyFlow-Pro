#ifndef PRODUCTSERVICE_H
#define PRODUCTSERVICE_H

#include <vector>
#include "models/Product.h"
#include "dao/ProductDAO.h"// عشان يشوف الـ DAO

class ProductService {
private:
    // ده اللي بيحل خطأ identifier "productDAO" is undefined
    ProductDAO productDAO;

public:
    // لازم نعلن عن الدالة هنا عشان الـ CPP يشوفها
    bool saveProduct(Product product);
    std::vector<Product> getAllProducts();
    bool deleteProduct(std::string barcode);
};

#endif