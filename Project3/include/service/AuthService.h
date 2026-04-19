#ifndef AUTHSERVICE_H
#define AUTHSERVICE_H

#include "dao/UserDAO.h"

class AuthService {
private:
    UserDAO userDAO;

public:
    User login(const std::string& username, const std::string& password);
};

#endif