#include "dao/Database.h"
#include <mysql_driver.h>
#include <mysql_connection.h>
#include <cppconn/statement.h>
#include <iostream>

sql::Connection* Database::con = nullptr;

void Database::connect() {
    try {
        if (con == nullptr || con->isClosed()) {
            sql::mysql::MySQL_Driver* driver = sql::mysql::get_mysql_driver_instance();
            con = driver->connect("tcp://127.0.0.1:3306", "root", "");
            con->setSchema("factory_db");

            // --- السطر السحري لحل مشكلة العربي ---
            sql::Statement* stmt = con->createStatement();
            stmt->execute("SET NAMES 'utf8'");
            delete stmt;
            // ------------------------------------

            std::cout << "Database Connected Successfully ✅" << std::endl;
        }
    }
    catch (sql::SQLException& e) {
        std::cerr << "DB Connection Error: " << e.what() << std::endl;
    }
}

sql::ResultSet* Database::executeQuery(sql::Statement*& stmt, const std::string& query)
{
    connect();

    if (con == nullptr)
    {
        std::cout << "Connection is NULL ❌" << std::endl;
        return nullptr;
    }

    stmt = con->createStatement();
    return stmt->executeQuery(query);
}
int Database::executeUpdate(const std::string& query) {
    connect();
    sql::Statement* stmt = con->createStatement();
    int rows = stmt->executeUpdate(query);
    delete stmt;
    return rows;
}