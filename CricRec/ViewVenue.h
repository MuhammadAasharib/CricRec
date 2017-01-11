#pragma once

namespace CricRec {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for ViewVenue
	/// </summary>
	public ref class ViewVenue : public System::Windows::Forms::Form
	{
	public:
		ViewVenue(void)
		{
			InitializeComponent();
			fillListBox();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ViewVenue()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListBox^  listBox1;
	protected:



	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->SuspendLayout();
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(13, 13);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(333, 225);
			this->listBox1->TabIndex = 0;
			// 
			// ViewVenue
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(358, 261);
			this->Controls->Add(this->listBox1);
			this->Name = L"ViewVenue";
			this->Text = L"ViewVenue";
			this->Load += gcnew System::EventHandler(this, &ViewVenue::ViewVenue_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void ViewVenue_Load(System::Object^  sender, System::EventArgs^  e) {
	}

	private: void fillListBox(void) {
		String^ constring = L"datasource = localhost; port = 3306; username = CricRec; password = cricrec";
		MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);

		MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select * from cricrec.venue;", conDataBase);

		MySqlDataReader^ myReader;
		try {
			conDataBase->Open();
			myReader = cmdDataBase->ExecuteReader();
			listBox1->Items->Add("id" + "	" + "name");
			while (myReader->Read()) {
				String^ name;
				String^ id;
				id = myReader->GetInt32("Venue_Id").ToString();
				name = myReader->GetString("Name");
				listBox1->Items->Add(id + "	" +name);
			}
		}
		catch (Exception^ex) {
			MessageBox::Show(ex->Message);
		}
	}
	};
}
