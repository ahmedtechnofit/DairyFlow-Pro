#include "service/AuthService.h"
#include <iostream>

User AuthService::login(const std::string& username, const std::string& password) {

    // 1. Validation
    if (username.empty() || password.empty()) {
        std::cout << "Username or Password is empty ❌\n";
        return User(); // invalid user
    }

    // 2. Call DAO
    User user = userDAO.login(username, password);

    // 3. Check result
    if (!user.isValid()) {
        std::cout << "Invalid username or password ❌\n";
    }

    return user;
}