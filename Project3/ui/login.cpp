
#include "login.h"
#include "dashboard.h" // بنعمله include هنا بأمان
#include "dao/UserDAO.h"
#include "models/User.h"
#include <msclr/marshal_cppstd.h>

namespace project3 {
    System::Void login::btnLogin_Click(System::Object^ sender, System::EventArgs^ e) {
        try {
            std::string userStr = msclr::interop::marshal_as<std::string>(txtUsername->Text);
            std::string passStr = msclr::interop::marshal_as<std::string>(txtPassword->Text);

            UserDAO userDAO;
            User currentUser = userDAO.login(userStr, passStr);

            if (currentUser.getId() != 0) {
                std::string role = currentUser.getRole();

                if (role == "admin" || role == "Admin") {
                    lblMessage->ForeColor = System::Drawing::Color::Green;
                    lblMessage->Text = "Access Granted";

                    // === الطريقة الهندسية الصح للتنقل ===
                    this->Hide(); // نخفي اللوجين
                    project3::dashboard^ d = gcnew project3::dashboard();
                    d->ShowDialog(); // نفتح الداشبورد كـ Dialog عشان يوقف الكود هنا لحد ما تتقفل

                    // السطر ده هيتنفذ لما تقفل الداشبورد (تعمل Log out)
                    this->Show(); // نرجع نظهر اللوجين تاني
                    this->txtUsername->Text = "";
                    this->txtPassword->Text = ""; // نمسح الباسورد القديم كنوع من السكيورتي
                }
                else {
                    lblMessage->ForeColor = System::Drawing::Color::Red;
                    lblMessage->Text = "Admin only access!";
                    //لقراء داخل اللبل
                }
            }
            else {
                lblMessage->ForeColor = System::Drawing::Color::Red;
                lblMessage->Text = "Invalid username or password!";
            }
        }
        catch (System::Exception^ ex) {
            System::Windows::Forms::MessageBox::Show("Error: " + ex->Message);
        }
    }
}
