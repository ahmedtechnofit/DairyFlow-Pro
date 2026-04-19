#pragma once
#ifndef PLATECHEESE_H
#define PLATECHEESE_H
#include <string>

class platecheese{
private:
    int id;
    std::string name;
    std::string barcode;
    std::string image_path;
    std::string expiry_date;
    double price;
    double cost;
    int quantity;

public:
    // Constructors
    Product();
    Product(int id, const std::string& name, const std::string& barcode,
        const std::string& image_path, const std::string& expiry_date,
        double price, double cost, int quantity);

    // Getters (لاحظ إرجاع القيم الرقمية مباشرة)
    int getId() const;
    const std::string& getName() const;
    const std::string& getBarcode() const;
    const std::string& getImagePath() const;
    const std::string& getExpiryDate() const;
    double getPrice() const;
    double getCost() const;
    int getQuantity() const;

    // Setters (لاحظ تغيير أنواع المعاملات للأرقام)
    void setId(int id);
    void setName(const std::string& name);
    void setBarcode(const std::string& barcode);
    void setImagePath(const std::string& image_path);
    void setExpiryDate(const std::string& expiry_date);
    void setPrice(double price);
    void setCost(double cost);
    void setQuantity(int quantity);
};

#endif