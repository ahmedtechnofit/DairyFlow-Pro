#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <string>

/*
    Customer Class:
    Represents a customer in the system
*/
class Customer {
private:
    int id;
    std::string name;
    std::string phone;
    std::string address;

public:
    // Constructors
    Customer();
    Customer(int id, const std::string& name, const std::string& phone, const std::string& address);

    // Getters
    int getId() const;
    const std::string& getName() const;
    const std::string& getPhone() const;
    const std::string& getAddress() const;

    // Setters
    void setId(int id);
    void setName(const std::string& name);
    void setPhone(const std::string& phone);
    void setAddress(const std::string& address);
};

#endif