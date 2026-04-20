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
		System::Windows::Forms::Label^ lblName;
		System::Windows::Forms::Label^ lblPrice;
		System::Windows::Forms::Label^ lblCost;
		System::Windows::Forms::Label^ lblQty;
		System::Windows::Forms::Label^ lblBarcode;
		System::Windows::Forms::DataGridView^ dgvProducts;
		System::Windows::Forms::Button^ btnShowProducts;
		System::Windows::Forms::Button^ btn_delete;
	private: System::Windows::Forms::TextBox^ txtSearch;


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
			this->lblName = (gcnew System::Windows::Forms::Label());
			this->lblPrice = (gcnew System::Windows::Forms::Label());
			this->lblCost = (gcnew System::Windows::Forms::Label());
			this->lblQty = (gcnew System::Windows::Forms::Label());
			this->lblBarcode = (gcnew System::Windows::Forms::Label());
			this->dgvProducts = (gcnew System::Windows::Forms::DataGridView());
			this->btnShowProducts = (gcnew System::Windows::Forms::Button());
			this->btn_delete = (gcnew System::Windows::Forms::Button());
			this->txtSearch = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvProducts))->BeginInit();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(150, 30);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 12;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(150, 70);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 11;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(150, 110);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 10;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(150, 150);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 20);
			this->textBox5->TabIndex = 9;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(150, 190);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 20);
			this->textBox6->TabIndex = 8;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(130, 233);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(139, 40);
			this->button1->TabIndex = 13;
			this->button1->Text = L"Save Product";
			this->button1->Click += gcnew System::EventHandler(this, &AddProductForm::button1_Click);
			// 
			// lblName
			// 
			this->lblName->AutoSize = true;
			this->lblName->Location = System::Drawing::Point(40, 33);
			this->lblName->Name = L"lblName";
			this->lblName->Size = System::Drawing::Size(35, 13);
			this->lblName->TabIndex = 4;
			this->lblName->Text = L"Name";
			// 
			// lblPrice
			// 
			this->lblPrice->AutoSize = true;
			this->lblPrice->Location = System::Drawing::Point(40, 73);
			this->lblPrice->Name = L"lblPrice";
			this->lblPrice->Size = System::Drawing::Size(31, 13);
			this->lblPrice->TabIndex = 3;
			this->lblPrice->Text = L"Price";
			// 
			// lblCost
			// 
			this->lblCost->AutoSize = true;
			this->lblCost->Location = System::Drawing::Point(40, 113);
			this->lblCost->Name = L"lblCost";
			this->lblCost->Size = System::Drawing::Size(28, 13);
			this->lblCost->TabIndex = 2;
			this->lblCost->Text = L"Cost";
			// 
			// lblQty
			// 
			this->lblQty->AutoSize = true;
			this->lblQty->Location = System::Drawing::Point(40, 153);
			this->lblQty->Name = L"lblQty";
			this->lblQty->Size = System::Drawing::Size(46, 13);
			this->lblQty->TabIndex = 1;
			this->lblQty->Text = L"Quantity";
			// 
			// lblBarcode
			// 
			this->lblBarcode->AutoSize = true;
			this->lblBarcode->Location = System::Drawing::Point(40, 193);
			this->lblBarcode->Name = L"lblBarcode";
			this->lblBarcode->Size = System::Drawing::Size(47, 13);
			this->lblBarcode->TabIndex = 0;
			this->lblBarcode->Text = L"Barcode";
			// 
			// dgvProducts
			// 
			this->dgvProducts->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
			this->dgvProducts->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvProducts->Location = System::Drawing::Point(295, 4);
			this->dgvProducts->Name = L"dgvProducts";
			this->dgvProducts->Size = System::Drawing::Size(510, 224);
			this->dgvProducts->TabIndex = 7;
			// 
			// btnShowProducts
			// 
			this->btnShowProducts->Location = System::Drawing::Point(548, 250);
			this->btnShowProducts->Name = L"btnShowProducts";
			this->btnShowProducts->Size = System::Drawing::Size(100, 30);
			this->btnShowProducts->TabIndex = 6;
			this->btnShowProducts->Text = L"All Products";
			this->btnShowProducts->Click += gcnew System::EventHandler(this, &AddProductForm::btnShowProducts_Click);
			// 
			// btn_delete
			// 
			this->btn_delete->Location = System::Drawing::Point(431, 250);
			this->btn_delete->Name = L"btn_delete";
			this->btn_delete->Size = System::Drawing::Size(100, 30);
			this->btn_delete->TabIndex = 5;
			this->btn_delete->Text = L"Delete";
			this->btn_delete->Click += gcnew System::EventHandler(this, &AddProductForm::btn_delete_Click);
			// 
			// txtSearch
			// 
			this->txtSearch->Location = System::Drawing::Point(677, 253);
			this->txtSearch->Name = L"txtSearch";
			this->txtSearch->Size = System::Drawing::Size(100, 20);
			this->txtSearch->TabIndex = 14;
			this->txtSearch->TextChanged += gcnew System::EventHandler(this, &AddProductForm::txtSearch_TextChanged);
			// 
			// AddProductForm
			// 
			this->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->ClientSize = System::Drawing::Size(847, 413);
			this->Controls->Add(this->txtSearch);
			this->Controls->Add(this->lblBarcode);
			this->Controls->Add(this->lblQty);
			this->Controls->Add(this->lblCost);
			this->Controls->Add(this->lblPrice);
			this->Controls->Add(this->lblName);
			this->Controls->Add(this->btn_delete);
			this->Controls->Add(this->btnShowProducts);
			this->Controls->Add(this->dgvProducts);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Name = L"AddProductForm";
			this->Load += gcnew System::EventHandler(this, &AddProductForm::AddProductForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvProducts))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private:
		System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void btnShowProducts_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void btn_delete_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void txtSearch_TextChanged(System::Object^ sender, System::EventArgs^ e);
	
private: System::Void AddProductForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}