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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvProducts))->BeginInit();
			this->SuspendLayout();

			// lblName
			this->lblName->AutoSize = true;
			this->lblName->Location = System::Drawing::Point(40, 33);
			this->lblName->Name = L"lblName";
			this->lblName->Size = System::Drawing::Size(35, 13);
			this->lblName->Text = L"Name";

			// textBox1 (Name)
			this->textBox1->Location = System::Drawing::Point(150, 30);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);

			// lblPrice
			this->lblPrice->AutoSize = true;
			this->lblPrice->Location = System::Drawing::Point(40, 73);
			this->lblPrice->Name = L"lblPrice";
			this->lblPrice->Size = System::Drawing::Size(31, 13);
			this->lblPrice->Text = L"Price";

			// textBox2 (Price)
			this->textBox2->Location = System::Drawing::Point(150, 70);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);

			// lblCost
			this->lblCost->AutoSize = true;
			this->lblCost->Location = System::Drawing::Point(40, 113);
			this->lblCost->Name = L"lblCost";
			this->lblCost->Size = System::Drawing::Size(28, 13);
			this->lblCost->Text = L"Cost";

			// textBox3 (Cost)
			this->textBox3->Location = System::Drawing::Point(150, 110);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);

			// lblQty
			this->lblQty->AutoSize = true;
			this->lblQty->Location = System::Drawing::Point(40, 153);
			this->lblQty->Name = L"lblQty";
			this->lblQty->Size = System::Drawing::Size(46, 13);
			this->lblQty->Text = L"Quantity";

			// textBox5 (Qty)
			this->textBox5->Location = System::Drawing::Point(150, 150);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 20);

			// lblBarcode
			this->lblBarcode->AutoSize = true;
			this->lblBarcode->Location = System::Drawing::Point(40, 193);
			this->lblBarcode->Name = L"lblBarcode";
			this->lblBarcode->Size = System::Drawing::Size(47, 13);
			this->lblBarcode->Text = L"Barcode";

			// textBox6 (Barcode)
			this->textBox6->Location = System::Drawing::Point(150, 190);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 20);

			// button1 (Save)
			this->button1->Location = System::Drawing::Point(130, 233);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(139, 40);
			this->button1->Text = L"Save Product";
			this->button1->Click += gcnew System::EventHandler(this, &AddProductForm::button1_Click);

			// dgvProducts
			this->dgvProducts->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvProducts->Location = System::Drawing::Point(295, 4);
			this->dgvProducts->Name = L"dgvProducts";
			this->dgvProducts->Size = System::Drawing::Size(510, 224);

			// btnShowProducts
			this->btnShowProducts->Location = System::Drawing::Point(548, 250);
			this->btnShowProducts->Name = L"btnShowProducts";
			this->btnShowProducts->Size = System::Drawing::Size(100, 30);
			this->btnShowProducts->Text = L"All Products";
			this->btnShowProducts->Click += gcnew System::EventHandler(this, &AddProductForm::btnShowProducts_Click);

			// btn_delete
			this->btn_delete->Location = System::Drawing::Point(431, 250);
			this->btn_delete->Name = L"btn_delete";
			this->btn_delete->Size = System::Drawing::Size(100, 30);
			this->btn_delete->Text = L"Delete";
			this->btn_delete->Click += gcnew System::EventHandler(this, &AddProductForm::btn_delete_Click);

			// AddProductForm Layout
			this->ClientSize = System::Drawing::Size(805, 413);
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvProducts))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();
		}
#pragma endregion

	private:
		System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void btnShowProducts_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void btn_delete_Click(System::Object^ sender, System::EventArgs^ e);
	};
}