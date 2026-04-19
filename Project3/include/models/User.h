#ifndef USER_H
#define USER_H

#include <string>

class User {
private:
    int id;
    std::string username;
    std::string password;
    std::string role;

public:
    // Constructor افتراضي
    User();

    // Constructor كامل
    User(int id, const std::string& username, const std::string& password, const std::string& role);

    // Getters
    int getId() const;
    std::string getUsername() const;
    std::string getPassword() const;
    std::string getRole() const;

    // Setters
    void setId(int id);
    void setUsername(const std::string& username);
    void setPassword(const std::string& password);
    void setRole(const std::string& role);

    bool isValid() const;
};

#endif