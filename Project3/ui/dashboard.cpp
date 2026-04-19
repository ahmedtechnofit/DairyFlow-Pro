// جوه ملف dashboard.cpp

// 2. مكتبات الفورمز والـ CLI
#include "dashboard.h"
#include "AddProductForm.h"

// 3. أي مكتبات تانية
#include <msclr/marshal_cppstd.h>

namespace project3 {
    System::Void dashboard::btnLogout_Click(System::Object^ sender, System::EventArgs^ e) {
        // كل اللي عليك تعمله إنك تقفل الداشبورد!
        // وبما إن اللوجين كان مستني بـ ShowDialog، هيرجع يظهر لوحده.
        this->Close();
    }
    System::Void dashboard::btnProduction_Click(System::Object^ sender, System::EventArgs^ e) {
        Project3::AddProductForm^ p = gcnew Project3::AddProductForm();
        p->ShowDialog();
    }
}