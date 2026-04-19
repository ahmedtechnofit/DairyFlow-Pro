//#include "service/CustomerService.h"
//#include "models/Customer.h"
//#include <vector>
//void CustomerService::addCustomer(const std::string& name,
//    const std::string& phone,
//    const std::string& address) {
//
//    // Validation
//    if (name.empty() || phone.empty()) {
//        std::cout << "Name or Phone cannot be empty ❌\n";
//        return;
//    }
//
//    Customer customer;
//    customer.setName(name);
//    customer.setPhone(phone);
//    customer.setAddress(address);
//
//    customerDAO.addCustomer(customer);
//
//    std::cout << "Customer added successfully ✅\n";
//}
//
//std::vector<Customer> CustomerService::getAllCustomers() {
//    return customerDAO.getAllCustomers();
//}