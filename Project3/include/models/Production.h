#pragma once
#ifndef production_H
#define production_H
using namespace std;


#include <string>

/* User Class: بيمثل المستخدم في النظام
   (Admin - Sales - Production ...)
*/
class production {
private:
    int id;
    int product_id;
    int quantity;

    string production_date;
   
public:
    // Constructor افتراضي
    production();

    // Constructor لإنشاء User كامل
    production(int id, int  product_id, int  quantity, string production_date);

    // Getters
    int getId() const;
    int getproduct_id() const;
    int  getquantity() const;
    string getproduction_date() const;

    // Setters
    void setId(int id);
    void setproduct_id(int product_id);
    void setquantity(int quantity);
    void setproduction_date(string production_date);
};

#endif