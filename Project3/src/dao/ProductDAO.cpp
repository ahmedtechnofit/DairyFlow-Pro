// src/dao/ProductDAO.cpp
#include "dao/ProductDAO.h"
#include "dao/Database.h"
#include <string>

bool ProductDAO::addProduct(Product product) {
    // تأكد إن ترتيب العواميد (name, price, cost, quantity, barcode) هو نفس ترتيب الجدول في MySQL
    std::string query = "INSERT INTO Products (name, price, cost, quantity, barcode) VALUES ('"
        + product.getName() + "', "
        + std::to_string(product.getPrice()) + ", "
        + std::to_string(product.getCost()) + ", "
        + std::to_string(product.getQuantity()) + ", '"
        + product.getBarcode() + "')";

    return Database::executeUpdate(query);
}

std::vector<Product> ProductDAO::getAll()
{
    std::vector<Product> list;

    sql::Statement* stmt = nullptr;
    sql::ResultSet* result = nullptr;

    try
    {
        std::string query = "SELECT name, price, cost, quantity, barcode FROM Products";

        result = Database::executeQuery(stmt, query);

        // 🛑 أهم check
        if (result == nullptr)
        {
            std::cout << "Result is NULL ❌" << std::endl;
            return list;
        }

        while (result->next())
        {
            Product p;

            p.setName(result->getString("name"));
            p.setPrice(result->getDouble("price"));
            p.setCost(result->getDouble("cost"));
            p.setQuantity(result->getInt("quantity"));
            p.setBarcode(result->getString("barcode"));

            list.push_back(p);
        }
    }
    catch (sql::SQLException& e)
    {
        std::cout << "SQL Error: " << e.what() << std::endl;
    }

    // 🛑 تنظيف مهم جدًا
    if (result != nullptr) delete result;
    if (stmt != nullptr) delete stmt;

    return list;
}
bool ProductDAO::deleteProduct(std::string barcode)
{
    std::string query =
        "DELETE FROM Products WHERE barcode = '" + barcode + "'";

    return Database::executeUpdate(query) > 0;
}
std::vector<Product> ProductDAO::searchProducts(std::string name)
{
    std::vector<Product> list;

    sql::Statement* stmt = nullptr;
    sql::ResultSet* result = nullptr;

    try
    {
        std::string query =
            "SELECT id, name, price, cost, quantity, barcode FROM Products "
            "WHERE name LIKE '%" + name + "%'";

        result = Database::executeQuery(stmt, query);

        if (result == nullptr)
            return list;

        while (result->next())
        {
            Product p;
            p.setId(result->getInt("id"));

            p.setName(result->getString("name"));
            p.setPrice(result->getDouble("price"));
            p.setCost(result->getDouble("cost"));
            p.setQuantity(result->getInt("quantity"));
            p.setBarcode(result->getString("barcode"));

            list.push_back(p);
        }
    }
    catch (sql::SQLException& e)
    {
        std::cout << "SQL Error: " << e.what() << std::endl;
    }

    if (result != nullptr) delete result;
    if (stmt != nullptr) delete stmt;

    return list;
}
