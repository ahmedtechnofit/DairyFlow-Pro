//#ifndef USERDAO_H
//#define USERDAO_H
//
//#include "models/User.h"
//#include <string>
//
//class UserDAO {
//public:
//    User login(const std::string& username, const std::string& password);
//};
//
//#endif
#pragma once
#include <string>
#include "models/User.h"

// مفيش داعي تضيف مكتبات MySQL هنا عشان نقلل وقت الـ Build
// بنضيفها فقط في الـ .cpp

class UserDAO {
public:
    // تأكد إن الدالة معرفة بالشكل ده (بترجع كائن User مش مؤشر)
    User login(const std::string& username, const std::string& password) ;

    // لو عندك دوال تانية زي دي مثلاً:
    // void registerUser(User user);
};