#pragma once

#include "models/Customer.h"
#include <vector>

class CustomerDAO {
public:
    std::vector<Customer> getAllCustomers();
    void addCustomer(const Customer& customer);
    void deleteCustomer(int id);
};
