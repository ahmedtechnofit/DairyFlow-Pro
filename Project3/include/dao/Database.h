#pragma once

#include <mysql_connection.h>
#include <mysql_driver.h>
#include <cppconn/resultset.h>
#include <cppconn/statement.h>
#include <string>

class Database {
public:
    static void connect();

    static sql::Connection* getConnection() { return con; }

    static sql::ResultSet* executeQuery(sql::Statement*& stmt, const std::string& query);

    static int executeUpdate(const std::string& query);

private:
    static sql::Connection* con;
};