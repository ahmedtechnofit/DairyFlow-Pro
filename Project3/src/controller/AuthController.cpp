#include "controller/AuthController.h"

User AuthController::login(const std::string& username, const std::string& password) {
    return authService.login(username, password);
}