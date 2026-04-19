#pragma once
//#include "login.h"

namespace project3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class dashboard : public System::Windows::Forms::Form
	{
	public:
		dashboard(void)
		{
			InitializeComponent();
		}

	protected:
		~dashboard()
		{
			if (components) delete components;
		}

	private:
		// الحفاظ على الأسماء البرمجية القديمة
		System::Windows::Forms::Panel^ pnlSidebar;
		System::Windows::Forms::Panel^ pnlHeader;
		System::Windows::Forms::Label^ lblTitle;
		System::Windows::Forms::Button^ btnProduction;
		System::Windows::Forms::Button^ btnSales;
		System::Windows::Forms::Button^ btnInventory;
		System::Windows::Forms::Button^ btnLogout;
		System::Windows::Forms::Panel^ pnlContainer;

		// عناصر إضافية للتصميم الجديد
		System::Windows::Forms::Panel^ pnlLogoSection;
		System::Windows::Forms::Label^ lblBrandName;
		System::Windows::Forms::Label^ lblUserRole;
		System::Windows::Forms::Panel^ pnlActiveIndicator;
		System::Windows::Forms::Label^ lblDateStatus;

		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->pnlSidebar = (gcnew System::Windows::Forms::Panel());
			this->btnLogout = (gcnew System::Windows::Forms::Button());
			this->btnInventory = (gcnew System::Windows::Forms::Button());
			this->btnSales = (gcnew System::Windows::Forms::Button());
			this->btnProduction = (gcnew System::Windows::Forms::Button());
			this->pnlLogoSection = (gcnew System::Windows::Forms::Panel());
			this->lblBrandName = (gcnew System::Windows::Forms::Label());
			this->lblUserRole = (gcnew System::Windows::Forms::Label());
			this->pnlHeader = (gcnew System::Windows::Forms::Panel());
			this->lblTitle = (gcnew System::Windows::Forms::Label());
			this->lblDateStatus = (gcnew System::Windows::Forms::Label());
			this->pnlContainer = (gcnew System::Windows::Forms::Panel());
			this->pnlSidebar->SuspendLayout();
			this->pnlLogoSection->SuspendLayout();
			this->pnlHeader->SuspendLayout();
			this->SuspendLayout();
			// 
			// pnlSidebar
			// 
			this->pnlSidebar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)), static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(42)));
			this->pnlSidebar->Controls->Add(this->btnLogout);
			this->pnlSidebar->Controls->Add(this->btnInventory);
			this->pnlSidebar->Controls->Add(this->btnSales);
			this->pnlSidebar->Controls->Add(this->btnProduction);
			this->pnlSidebar->Controls->Add(this->pnlLogoSection);
			this->pnlSidebar->Dock = System::Windows::Forms::DockStyle::Left;
			this->pnlSidebar->Location = System::Drawing::Point(0, 0);
			this->pnlSidebar->Margin = System::Windows::Forms::Padding(2);
			this->pnlSidebar->Name = L"pnlSidebar";
			this->pnlSidebar->Size = System::Drawing::Size(180, 585);
			this->pnlSidebar->TabIndex = 2;
			// 
			// btnLogout
			// 
			this->btnLogout->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->btnLogout->FlatAppearance->BorderSize = 0;
			this->btnLogout->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnLogout->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold));
			this->btnLogout->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)), static_cast<System::Int32>(static_cast<System::Byte>(68)),
				static_cast<System::Int32>(static_cast<System::Byte>(68)));
			this->btnLogout->Location = System::Drawing::Point(0, 536);
			this->btnLogout->Margin = System::Windows::Forms::Padding(2);
			this->btnLogout->Name = L"btnLogout";
			this->btnLogout->Size = System::Drawing::Size(180, 49);
			this->btnLogout->TabIndex = 0;
			this->btnLogout->Text = L"Log out";
			this->btnLogout->Click += gcnew System::EventHandler(this, &dashboard::btnLogout_Click);
			// 
			// btnInventory
			// 
			this->btnInventory->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnInventory->FlatAppearance->BorderSize = 0;
			this->btnInventory->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnInventory->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold));
			this->btnInventory->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(163)),
				static_cast<System::Int32>(static_cast<System::Byte>(184)));
			this->btnInventory->Location = System::Drawing::Point(0, 171);
			this->btnInventory->Margin = System::Windows::Forms::Padding(2);
			this->btnInventory->Name = L"btnInventory";
			this->btnInventory->Padding = System::Windows::Forms::Padding(15, 0, 0, 0);
			this->btnInventory->Size = System::Drawing::Size(180, 45);
			this->btnInventory->TabIndex = 1;
			this->btnInventory->Text = L"  Warehouse";
			this->btnInventory->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// btnSales
			// 
			this->btnSales->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnSales->FlatAppearance->BorderSize = 0;
			this->btnSales->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSales->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold));
			this->btnSales->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(163)),
				static_cast<System::Int32>(static_cast<System::Byte>(184)));
			this->btnSales->Location = System::Drawing::Point(0, 126);
			this->btnSales->Margin = System::Windows::Forms::Padding(2);
			this->btnSales->Name = L"btnSales";
			this->btnSales->Padding = System::Windows::Forms::Padding(15, 0, 0, 0);
			this->btnSales->Size = System::Drawing::Size(180, 45);
			this->btnSales->TabIndex = 2;
			this->btnSales->Text = L"  Sales Tracking";
			this->btnSales->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// btnProduction
			// 
			this->btnProduction->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnProduction->FlatAppearance->BorderSize = 0;
			this->btnProduction->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(59)));
			this->btnProduction->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(59)));
			this->btnProduction->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnProduction->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold));
			this->btnProduction->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(163)),
				static_cast<System::Int32>(static_cast<System::Byte>(184)));
			this->btnProduction->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnProduction->Location = System::Drawing::Point(0, 81);
			this->btnProduction->Margin = System::Windows::Forms::Padding(2);
			this->btnProduction->Name = L"btnProduction";
			this->btnProduction->Padding = System::Windows::Forms::Padding(15, 0, 0, 0);
			this->btnProduction->Size = System::Drawing::Size(180, 45);
			this->btnProduction->TabIndex = 3;
			this->btnProduction->Text = L"  Production";
			this->btnProduction->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnProduction->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btnProduction->Click += gcnew System::EventHandler(this, &dashboard::btnProduction_Click);
			// 
			// pnlLogoSection
			// 
			this->pnlLogoSection->Controls->Add(this->lblBrandName);
			this->pnlLogoSection->Controls->Add(this->lblUserRole);
			this->pnlLogoSection->Dock = System::Windows::Forms::DockStyle::Top;
			this->pnlLogoSection->Location = System::Drawing::Point(0, 0);
			this->pnlLogoSection->Margin = System::Windows::Forms::Padding(2);
			this->pnlLogoSection->Name = L"pnlLogoSection";
			this->pnlLogoSection->Size = System::Drawing::Size(180, 81);
			this->pnlLogoSection->TabIndex = 4;
			// 
			// lblBrandName
			// 
			this->lblBrandName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold));
			this->lblBrandName->ForeColor = System::Drawing::Color::White;
			this->lblBrandName->Location = System::Drawing::Point(11, 20);
			this->lblBrandName->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lblBrandName->Name = L"lblBrandName";
			this->lblBrandName->Size = System::Drawing::Size(150, 24);
			this->lblBrandName->TabIndex = 0;
			this->lblBrandName->Text = L"Dairy Atelier";
			// 
			// lblUserRole
			// 
			this->lblUserRole->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7, System::Drawing::FontStyle::Bold));
			this->lblUserRole->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)), static_cast<System::Int32>(static_cast<System::Byte>(116)),
				static_cast<System::Int32>(static_cast<System::Byte>(139)));
			this->lblUserRole->Location = System::Drawing::Point(11, 45);
			this->lblUserRole->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lblUserRole->Name = L"lblUserRole";
			this->lblUserRole->Size = System::Drawing::Size(150, 16);
			this->lblUserRole->TabIndex = 1;
			this->lblUserRole->Text = L"PRODUCTION MANAGER";
			// 
			// pnlHeader
			// 
			this->pnlHeader->BackColor = System::Drawing::Color::White;
			this->pnlHeader->Controls->Add(this->lblTitle);
			this->pnlHeader->Controls->Add(this->lblDateStatus);
			this->pnlHeader->Dock = System::Windows::Forms::DockStyle::Top;
			this->pnlHeader->Location = System::Drawing::Point(180, 0);
			this->pnlHeader->Margin = System::Windows::Forms::Padding(2);
			this->pnlHeader->Name = L"pnlHeader";
			this->pnlHeader->Size = System::Drawing::Size(780, 65);
			this->pnlHeader->TabIndex = 1;
			// 
			// lblTitle
			// 
			this->lblTitle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold));
			this->lblTitle->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(41)),
				static_cast<System::Int32>(static_cast<System::Byte>(59)));
			this->lblTitle->Location = System::Drawing::Point(22, 12);
			this->lblTitle->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lblTitle->Name = L"lblTitle";
			this->lblTitle->Size = System::Drawing::Size(225, 28);
			this->lblTitle->TabIndex = 0;
			this->lblTitle->Text = L"Factory Overview";
			// 
			// lblDateStatus
			// 
			this->lblDateStatus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->lblDateStatus->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)), static_cast<System::Int32>(static_cast<System::Byte>(116)),
				static_cast<System::Int32>(static_cast<System::Byte>(139)));
			this->lblDateStatus->Location = System::Drawing::Point(24, 39);
			this->lblDateStatus->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lblDateStatus->Name = L"lblDateStatus";
			this->lblDateStatus->Size = System::Drawing::Size(225, 16);
			this->lblDateStatus->TabIndex = 1;
			this->lblDateStatus->Text = L"Production status: Optimal";
			// 
			// pnlContainer
			// 
			this->pnlContainer->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(250)),
				static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->pnlContainer->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pnlContainer->Location = System::Drawing::Point(180, 65);
			this->pnlContainer->Margin = System::Windows::Forms::Padding(2);
			this->pnlContainer->Name = L"pnlContainer";
			this->pnlContainer->Size = System::Drawing::Size(780, 520);
			this->pnlContainer->TabIndex = 0;
			this->pnlContainer->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &dashboard::pnlContainer_Paint);
			// 
			// dashboard
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(960, 585);
			this->Controls->Add(this->pnlContainer);
			this->Controls->Add(this->pnlHeader);
			this->Controls->Add(this->pnlSidebar);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"dashboard";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Dairy Atelier - Enterprise Suite";
			this->pnlSidebar->ResumeLayout(false);
			this->pnlLogoSection->ResumeLayout(false);
			this->pnlHeader->ResumeLayout(false);
			this->ResumeLayout(false);

		}

private: System::Void btnLogout_Click(System::Object^ sender, System::EventArgs^ e);




	private: System::Void pnlContainer_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		// ده مجرد مكان مؤقت لوضع الكود اللي هيعرض البيانات في الداشبورد

	};
	
private: System::Void btnProduction_Click(System::Object^ sender, System::EventArgs^ e);

};
}
#pragma endregion
