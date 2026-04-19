//
#pragma once
//#include "dashboard.h"
//
//#include "dao/UserDAO.h"
//#include "models/User.h"

//#include <msclr/marshal_cppstd.h>

namespace project3 {

	using namespace System;
	using namespace System::Windows::Forms;
	using namespace System::Drawing;

	public ref class login : public System::Windows::Forms::Form
	{
	public:
		login(void)
		{
			InitializeComponent();
		}

	protected:
		~login()
		{
			if (components) delete components;
		}

	private:
		// ===== Controls (Using full names to avoid Designer errors) =====
		System::Windows::Forms::Panel^ pnlCard;
		System::Windows::Forms::Panel^ pnlHeader;

		System::Windows::Forms::Label^ lblFactoryName;
		System::Windows::Forms::Label^ lblSubtitle;

		System::Windows::Forms::Label^ lblUser;
		System::Windows::Forms::Label^ lblPass;



		System::Windows::Forms::TextBox^ txtUsername;
		System::Windows::Forms::TextBox^ txtPassword;

		System::Windows::Forms::Button^ btnLogin;
	private: System::Windows::Forms::Label^ lblMessage;

		   System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		   void InitializeComponent(void)
		   {
			   this->pnlCard = (gcnew System::Windows::Forms::Panel());
			   this->pnlHeader = (gcnew System::Windows::Forms::Panel());
			   this->lblFactoryName = (gcnew System::Windows::Forms::Label());
			   this->lblSubtitle = (gcnew System::Windows::Forms::Label());
			   this->lblUser = (gcnew System::Windows::Forms::Label());
			   this->txtUsername = (gcnew System::Windows::Forms::TextBox());
			   this->lblPass = (gcnew System::Windows::Forms::Label());
			   this->txtPassword = (gcnew System::Windows::Forms::TextBox());
			   this->btnLogin = (gcnew System::Windows::Forms::Button());
			   this->lblMessage = (gcnew System::Windows::Forms::Label());
			   this->pnlCard->SuspendLayout();
			   this->pnlHeader->SuspendLayout();
			   this->SuspendLayout();
			   // 
			   // pnlCard
			   // 
			   this->pnlCard->BackColor = System::Drawing::Color::White;
			   this->pnlCard->Controls->Add(this->pnlHeader);
			   this->pnlCard->Controls->Add(this->lblUser);
			   this->pnlCard->Controls->Add(this->txtUsername);
			   this->pnlCard->Controls->Add(this->lblPass);
			   this->pnlCard->Controls->Add(this->txtPassword);
			   this->pnlCard->Controls->Add(this->btnLogin);
			   this->pnlCard->Controls->Add(this->lblMessage);
			   this->pnlCard->Location = System::Drawing::Point(40, 40);
			   this->pnlCard->Name = L"pnlCard";
			   this->pnlCard->Size = System::Drawing::Size(370, 470);
			   this->pnlCard->TabIndex = 0;
			   // 
			   // pnlHeader
			   // 
			   this->pnlHeader->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(29)), static_cast<System::Int32>(static_cast<System::Byte>(95)),
				   static_cast<System::Int32>(static_cast<System::Byte>(168)));
			   this->pnlHeader->Controls->Add(this->lblFactoryName);
			   this->pnlHeader->Controls->Add(this->lblSubtitle);
			   this->pnlHeader->Dock = System::Windows::Forms::DockStyle::Top;
			   this->pnlHeader->Location = System::Drawing::Point(0, 0);
			   this->pnlHeader->Name = L"pnlHeader";
			   this->pnlHeader->Size = System::Drawing::Size(370, 120);
			   this->pnlHeader->TabIndex = 0;
			   // 
			   // lblFactoryName
			   // 
			   this->lblFactoryName->Dock = System::Windows::Forms::DockStyle::Top;
			   this->lblFactoryName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold));
			   this->lblFactoryName->ForeColor = System::Drawing::Color::White;
			   this->lblFactoryName->Location = System::Drawing::Point(0, 0);
			   this->lblFactoryName->Name = L"lblFactoryName";
			   this->lblFactoryName->Size = System::Drawing::Size(370, 70);
			   this->lblFactoryName->TabIndex = 0;
			   this->lblFactoryName->Text = L"Dairy Atelier";
			   this->lblFactoryName->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			   // 
			   // lblSubtitle
			   // 
			   this->lblSubtitle->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->lblSubtitle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			   this->lblSubtitle->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(213)), static_cast<System::Int32>(static_cast<System::Byte>(227)),
				   static_cast<System::Int32>(static_cast<System::Byte>(255)));
			   this->lblSubtitle->Location = System::Drawing::Point(0, 0);
			   this->lblSubtitle->Name = L"lblSubtitle";
			   this->lblSubtitle->Size = System::Drawing::Size(370, 120);
			   this->lblSubtitle->TabIndex = 1;
			   this->lblSubtitle->Text = L"Industrial Precision Management";
			   this->lblSubtitle->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			   // 
			   // lblUser
			   // 
			   this->lblUser->Location = System::Drawing::Point(40, 150);
			   this->lblUser->Name = L"lblUser";
			   this->lblUser->Size = System::Drawing::Size(100, 23);
			   this->lblUser->TabIndex = 1;
			   this->lblUser->Text = L"USERNAME";
			   // 
			   // txtUsername
			   // 
			   this->txtUsername->Location = System::Drawing::Point(40, 180);
			   this->txtUsername->Name = L"txtUsername";
			   this->txtUsername->Size = System::Drawing::Size(290, 20);
			   this->txtUsername->TabIndex = 2;
			   this->txtUsername->TextChanged += gcnew System::EventHandler(this, &login::txtUsername_TextChanged);
			   // 
			   // lblPass
			   // 
			   this->lblPass->Location = System::Drawing::Point(40, 220);
			   this->lblPass->Name = L"lblPass";
			   this->lblPass->Size = System::Drawing::Size(100, 23);
			   this->lblPass->TabIndex = 3;
			   this->lblPass->Text = L"PASSWORD";
			   // 
			   // txtPassword
			   // 
			   this->txtPassword->Location = System::Drawing::Point(40, 250);
			   this->txtPassword->Name = L"txtPassword";
			   this->txtPassword->PasswordChar = '*';
			   this->txtPassword->Size = System::Drawing::Size(290, 20);
			   this->txtPassword->TabIndex = 4;
			   this->txtPassword->TextChanged += gcnew System::EventHandler(this, &login::txtPassword_TextChanged);
			   // 
			   // btnLogin
			   // 
			   this->btnLogin->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(29)), static_cast<System::Int32>(static_cast<System::Byte>(95)),
				   static_cast<System::Int32>(static_cast<System::Byte>(168)));
			   this->btnLogin->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->btnLogin->ForeColor = System::Drawing::Color::White;
			   this->btnLogin->Location = System::Drawing::Point(40, 320);
			   this->btnLogin->Name = L"btnLogin";
			   this->btnLogin->Size = System::Drawing::Size(290, 45);
			   this->btnLogin->TabIndex = 5;
			   this->btnLogin->Text = L"LOGIN";
			   this->btnLogin->UseVisualStyleBackColor = false;
			   this->btnLogin->Click += gcnew System::EventHandler(this, &login::btnLogin_Click);
			   // 
			   // lblMessage
			   // 
			   this->lblMessage->Location = System::Drawing::Point(40, 380);
			   this->lblMessage->Name = L"lblMessage";
			   this->lblMessage->Size = System::Drawing::Size(290, 40);
			   this->lblMessage->TabIndex = 6;
			   this->lblMessage->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			   // 
			   // login
			   // 
			   this->ClientSize = System::Drawing::Size(462, 550);
			   this->Controls->Add(this->pnlCard);
			   this->Name = L"login";
			   this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			   this->pnlCard->ResumeLayout(false);
			   this->pnlCard->PerformLayout();
			   this->pnlHeader->ResumeLayout(false);
			   this->ResumeLayout(false);

		   }
#pragma endregion

		   // ================= LOGIN LOGIC =================
	private:
		// جوه ملف login.h
	private: System::Void btnLogin_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void txtPassword_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void txtUsername_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
