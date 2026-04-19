// include/models/Product.h
#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>

class Product {
private:
    int id;
    std::string name;
    double price;
    double cost;
    int quantity;
    std::string barcode;

public:
    Product(); // Constructor

    // Getters & Setters (عناوين فقط)
    void setId(int i);
    int getId();

    void setName(std::string n);
    std::string getName();

    void setPrice(double p);
    double getPrice();

    void setCost(double c);
    double getCost();

    void setQuantity(int q);
    int getQuantity();

    void setBarcode(std::string b);
    std::string getBarcode();
};
#endif