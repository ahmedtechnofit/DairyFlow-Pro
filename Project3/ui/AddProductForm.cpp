#include "AddProductForm.h"
#include "controller/ProductController.h"
#include "models/Product.h"
#include <msclr/marshal_cppstd.h>// عملنا له Include هنا بأمان

namespace Project3 {

	System::Void AddProductForm::button1_Click(System::Object^ sender, System::EventArgs^ e) {
		msclr::interop::marshal_context context;

		std::string name = context.marshal_as<std::string>(textBox1->Text);
		std::string barcode = context.marshal_as<std::string>(textBox6->Text);

		try {
			double price = Convert::ToDouble(textBox2->Text);
			double cost = Convert::ToDouble(textBox3->Text);
			int qty = Convert::ToInt32(textBox5->Text);

			ProductController controller;

			if (controller.handleCreateProduct(name, price, cost, qty, barcode)) {
				MessageBox::Show(L"Success: Product has been added! ✅", L"Success");
				textBox1->Clear(); textBox2->Clear(); textBox3->Clear();
				textBox5->Clear(); textBox6->Clear();
			}
			else {
				MessageBox::Show(L"Error: Check database connection. ❌", L"Error");
			}
		}
		catch (Exception^ ex) {
			MessageBox::Show(L"Invalid Input: Please use numbers for Price/Qty.", L"Warning");
		}
	}

	//System::Void AddProductForm::AddProductForm_Load(System::Object^ sender, System::EventArgs^ e) {

	//}

	//System::Void AddProductForm::AddProductForm_Load_1(System::Object^ sender, System::EventArgs^ e) {
	//}
	System::Void AddProductForm::btnShowProducts_Click(System::Object^ sender, System::EventArgs^ e)
	{
		ProductController controller;

		std::vector<Product> products = controller.getAllProducts();

		DataTable^ table = gcnew DataTable();

		table->Columns->Add("Name");
		table->Columns->Add("Price");
		table->Columns->Add("Cost");
		table->Columns->Add("Quantity");
		table->Columns->Add("Barcode");

		for (auto& p : products)
		{
			table->Rows->Add(
				gcnew String(p.getName().c_str()),
				p.getPrice(),
				p.getCost(),
				p.getQuantity(),
				gcnew String(p.getBarcode().c_str())
			);
		}

		dgvProducts->DataSource = table;
	}

}