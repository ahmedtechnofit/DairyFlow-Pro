//#include "AddProductForm.h"
//#include "controller/ProductController.h"
//#include <msclr/marshal_cppstd.h>
//using namespace System;
//using namespace System::Windows::Forms;
#include "AddProductForm.h"
#include "controller/ProductController.h"
#include <msclr/marshal_cppstd.h>
#include <string> // ضروري جداً عشان std::string
#include <vector>

namespace Project3 {

	using namespace System;
	using namespace System::Windows::Forms;

	// ================== ADD PRODUCT ==================
	System::Void AddProductForm::button1_Click(System::Object^ sender, System::EventArgs^ e)
	{
		msclr::interop::marshal_context context;

		std::string name = context.marshal_as<std::string>(textBox1->Text);
		std::string barcode = context.marshal_as<std::string>(textBox6->Text);

		try
		{
			double price = Convert::ToDouble(textBox2->Text);
			double cost = Convert::ToDouble(textBox3->Text);
			int qty = Convert::ToInt32(textBox5->Text);

			ProductController controller;

			if (controller.handleCreateProduct(name, price, cost, qty, barcode))
			{
				MessageBox::Show(L"Product Added ✅");
			}
			else
			{
				MessageBox::Show(L"Insert Failed ❌");
			}
		}
		catch (...)
		{
			MessageBox::Show(L"Invalid Input ❌");
		}
	}

	// ================== DISPLAY ALL PRODUCTS ==================
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

	// ================== DELETE PRODUCT ==================
	System::Void AddProductForm::btn_delete_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (this->dgvProducts->CurrentRow == nullptr)
		{
			MessageBox::Show(L"Select a row first ❌");
			return;
		}

		try {
			// الحصول على رقم السطر المختار
			int rowIndex = this->dgvProducts->CurrentRow->Index;

			// الطريقة الرسمية في C++/CLI للوصول للخلية رقم 5 (Index 4)
			Object^ value = this->dgvProducts->Rows->default[rowIndex]->Cells->default[4]->Value;

			if (value == nullptr || value->ToString() == "")
			{
				MessageBox::Show(L"Barcode cell is empty! ❌");
				return;
			}

			String^ barcodeManaged = value->ToString();

			// التحويل لـ Standard String عشان الـ Controller
			msclr::interop::marshal_context context;
			std::string barcode = context.marshal_as<std::string>(barcodeManaged);

			ProductController controller;
			if (controller.handleDeleteProduct(barcode))
			{
				MessageBox::Show(L"Deleted Successfully ✅");
				// تحديث الجدول فوراً
				this->btnShowProducts_Click(sender, e);
			}
			else
			{
				MessageBox::Show(L"Delete Failed ❌");
			}
		}
		catch (Exception^ ex) {
			MessageBox::Show(L"System Error: " + ex->Message);
		}
	}
}