
#include "dao/UserDAO.h"
#include "dao/Database.h"
#include <cppconn/resultset.h>
#include <cppconn/statement.h>
#include "models/User.h"

User UserDAO::login(const std::string& username, const std::string& password) {
    User user;
    sql::Statement* stmt = nullptr;
    sql::ResultSet* result = nullptr;

    try {
        Database::connect();
        if (Database::getConnection() == nullptr) return user;

        // نصيحة: استخدم PreparedStatement بدل الكونسول ده عشان الـ SQL Injection والـ Crashes
        stmt = Database::getConnection()->createStatement();

        // تأكد إن الكويري مفهاش حروف غريبة بتبوظ الـ string
        std::string query = "SELECT id, username, password, role FROM Users WHERE username = '"
            + username + "' AND password = '" + password + "' LIMIT 1";

        result = stmt->executeQuery(query);

        if (result && result->next()) {
            user.setId(result->getInt("id"));
            user.setUsername(result->getString("username"));
            user.setPassword(result->getString("password"));
            user.setRole(result->getString("role"));
        }
    }
    catch (sql::SQLException& e) {
        std::cerr << "Login Error: " << e.what() << std::endl;
    }

    // التنظيف هنا هو اللي بيعمل Crash لو الـ DLLs مش متوافقة
    try {
        if (result) { delete result; result = nullptr; }
        if (stmt) { delete stmt; stmt = nullptr; }
    }
    catch (...) {}

    return user;
}