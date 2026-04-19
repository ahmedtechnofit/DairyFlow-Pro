//#include "dao/CustomerDAO.h"
//#include "models/Customer.h"
//#include <vector>
//#include <dao/Database.h>
//std::vector<Customer> CustomerDAO::getAllCustomers() {
//
//    std::vector<Customer> customers;
//
//    std::string query = "SELECT * FROM Customers";
//
//    sql::ResultSet* result = Database::executeQuery(query);
//
//    while (result && result->next()) {
//        Customer c;
//
//        c.setId(result->getInt("id"));
//        c.setName(result->getString("name"));
//        c.setPhone(result->getString("phone"));
//        c.setAddress(result->getString("address"));
//
//        customers.push_back(c);
//    }
//
//    return customers;
//}
//
//void CustomerDAO::addCustomer(const Customer& customer) {
//
//    std::string query =
//        "INSERT INTO Customers (name, phone, address) VALUES ('"
//        + customer.getName() + "', '"
//        + customer.getPhone() + "', '"
//        + customer.getAddress() + "')";
//
//    Database::executeUpdate(query);
//}