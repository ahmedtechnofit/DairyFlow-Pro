#ifndef PRODUCTDAO_H
#define PRODUCTDAO_H

#include "models/Product.h"
#include <vector>

class ProductDAO {
public:
    // لازم نعلن عن الدالة هنا عشان الـ CPP يشوفها
    bool addProduct(Product product);
    std::vector<Product> getAllProducts();

    std::vector<Product> getAll();
};

#endif