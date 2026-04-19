#pragma once

namespace Project3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class AddProductForm : public System::Windows::Forms::Form
	{
	public:
		AddProductForm(void)
		{
			InitializeComponent();
		}

	protected:
		~AddProductForm()
		{
			if (components) { delete components; }
		}

	private:
		System::Windows::Forms::TextBox^ textBox1;
		System::Windows::Forms::TextBox^ textBox2;
		System::Windows::Forms::TextBox^ textBox3;
		System::Windows::Forms::TextBox^ textBox5;
		System::Windows::Forms::TextBox^ textBox6;
		System::Windows::Forms::Button^ button1;

		// ================= LABELS ADDED SAFELY =================
		System::Windows::Forms::Label^ lblName;
		System::Windows::Forms::Label^ lblPrice;
		System::Windows::Forms::Label^ lblCost;
		System::Windows::Forms::Label^ lblQty;
		System::Windows::Forms::Label^ lblBarcode;

		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code

		void InitializeComponent(void)
		{
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());

			// ================= LABEL INIT =================
			this->lblName = (gcnew System::Windows::Forms::Label());
			this->lblPrice = (gcnew System::Windows::Forms::Label());
			this->lblCost = (gcnew System::Windows::Forms::Label());
			this->lblQty = (gcnew System::Windows::Forms::Label());
			this->lblBarcode = (gcnew System::Windows::Forms::Label());

			this->SuspendLayout();

			// ================= LABELS =================

			// Name
			this->lblName->AutoSize = true;
			this->lblName->Location = System::Drawing::Point(40, 33);
			this->lblName->Text = L"Name";

			// Price
			this->lblPrice->AutoSize = true;
			this->lblPrice->Location = System::Drawing::Point(40, 73);
			this->lblPrice->Text = L"Price";

			// Cost
			this->lblCost->AutoSize = true;
			this->lblCost->Location = System::Drawing::Point(40, 113);
			this->lblCost->Text = L"Cost";

			// Quantity
			this->lblQty->AutoSize = true;
			this->lblQty->Location = System::Drawing::Point(40, 153);
			this->lblQty->Text = L"Quantity";

			// Barcode
			this->lblBarcode->AutoSize = true;
			this->lblBarcode->Location = System::Drawing::Point(40, 193);
			this->lblBarcode->Text = L"Barcode";

			// ================= TEXTBOXES =================

			this->textBox1->Location = System::Drawing::Point(150, 190);
			this->textBox2->Location = System::Drawing::Point(150, 150);
			this->textBox3->Location = System::Drawing::Point(150, 110);
			this->textBox5->Location = System::Drawing::Point(150, 70);
			this->textBox6->Location = System::Drawing::Point(150, 30);

			// ================= BUTTON =================
			this->button1->Location = System::Drawing::Point(150, 240);
			this->button1->Size = System::Drawing::Size(120, 40);
			this->button1->Text = L"Save Product";
			this->button1->Click += gcnew System::EventHandler(this, &AddProductForm::button1_Click);

			// ================= FORM =================
			this->ClientSize = System::Drawing::Size(515, 316);
			this->Text = L"Add New Product";

			// ================= ADD CONTROLS =================
			this->Controls->Add(this->lblName);
			this->Controls->Add(this->lblPrice);
			this->Controls->Add(this->lblCost);
			this->Controls->Add(this->lblQty);
			this->Controls->Add(this->lblBarcode);

			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);

			this->Controls->Add(this->button1);

			this->ResumeLayout(false);
			this->PerformLayout();
		}

#pragma endregion

	private:
		System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void AddProductForm_Load(System::Object^ sender, System::EventArgs^ e);
		System::Void AddProductForm_Load_1(System::Object^ sender, System::EventArgs^ e);
	};
}