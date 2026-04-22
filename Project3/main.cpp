//#include "ui/login.h"
//#include "dao/Database.h"
//// ضيف ده هنا
//#include "ui/AddProductForm.h" //
//using namespace System;
//using namespace System::Windows::Forms;
//
//[STAThreadAttribute]
//int main(cli::array<System::String^>^ args) {
//    Application::EnableVisualStyles();
//    Application::SetCompatibleTextRenderingDefault(false);
//
//    // خلي الـ connect تحصل أول ما البرنامج يبدأ في الخلفية
//    // Database::connect(); // لو دي بتعلق البرنامج، انقلها لـ login_Load
//
//    Project3::AddProductForm^ AddProductForm = gcnew Project3::AddProductForm();
//    Application::Run(AddProductForm);
//
//    return 0;
//}
//#include "ui/login.h"
//#include "ui/AddProductForm.h" // 1. لازم تعمل Include لصفحة إضافة المنتج هنا
//#include "dao/Database.h" 
//#include "ui/AddProductForm.h"
//
//using namespace System;
//using namespace System::Windows::Forms;
//
//[STAThreadAttribute]
//int main(cli::array<System::String^>^ args) {
//    Application::EnableVisualStyles();
//    Application::SetCompatibleTextRenderingDefault(false);
//
//    // 2. محاولة الاتصال بالداتابيز قبل فتح الفورم
//    // تأكد إن بيانات الاتصال في Database.cpp صحيحة (اسم السيرفر، اليوزر، الباسورد)
//    try {
//        Database::connect();
//    }
//    catch (...) {
//        MessageBox::Show("فشل الاتصال بقاعدة البيانات، تأكد من تشغيل MySQL", "خطأ اتصال");
//    }
//
//    // 3. تغيير الفورم اللي بيبدأ البرنامج
//    // بدل ما نفتح login، هنفتح AddProductForm
//    Project3::AddProductForm^ AddProductForm = gcnew Project3::AddProductForm();
//    Application::Run(AddProductForm);
//
//    return 0;
//}
#include "ui/login.h"
#include "dao/Database.h"
#include "ui/AddProductForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(cli::array<System::String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    // Database connection (اختياري هنا)
    // Database::connect();

    project3::login^ loginForm = gcnew project3::login();

    Application::Run(loginForm);

    return 0;
}