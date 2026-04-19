//#ifndef DATABASE_H
//#define DATABASE_H
//
//#include <mysql_driver.h>
//#include <mysql_connection.h>
//#include <cppconn/resultset.h>
//#include <cppconn/statement.h>
//#include <string>
//
//class Database {
//private:
//    static sql::Connection* con;
//
//public:
//    static void connect();
//
//    static sql::ResultSet* executeQuery(const std::string& query);
//
//    static int executeUpdate(const std::string& query);
//};
//
//#endif
#pragma once
#include <mysql_connection.h>
#include <mysql_driver.h>
#include <cppconn/resultset.h>
#include <string>

class Database {
public:
    static void connect();

    // تأكد من وجود السطر ده بالظبط في الـ public
    static sql::Connection* getConnection() { return con; }

    static sql::ResultSet* executeQuery(sql::Statement*& stmt, const std::string& query);
    static int executeUpdate(const std::string& query);

private:
    static sql::Connection* con; // تعريف الـ connection
};