#ifndef AUTHCONTROLLER_H
#define AUTHCONTROLLER_H

#include "service/AuthService.h"

class AuthController {
private:
    AuthService authService;

public:
    User login(const std::string& username, const std::string& password);
};

#endif