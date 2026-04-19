#include "models/User.h"

// Constructor افتراضي
User::User() {
    id = -1;
    username = "";
    password = "";
    role = "";
}

// Constructor كامل
User::User(int id, const std::string& username, const std::string& password, const std::string& role) {
    this->id = id;
    this->username = username;
    this->password = password;
    this->role = role;
}

// Getters
int User::getId() const {
    return id;
}

std::string User::getUsername() const {
    return username;
}

std::string User::getPassword() const {
    return password;
}

std::string User::getRole() const {
    return role;
}

// Setters
void User::setId(int id) {
    this->id = id;
}

void User::setUsername(const std::string& username) {
    this->username = username;
}

void User::setPassword(const std::string& password) {
    this->password = password;
}

void User::setRole(const std::string& role) {
    this->role = role;
}

// Validation
bool User::isValid() const {
    return id != -1;
}