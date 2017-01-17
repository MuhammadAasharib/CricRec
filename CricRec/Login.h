#pragma once
#include "MainWindow.h"
#include "AddAdmin.h"
namespace CricRec {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for Login
	/// </summary>
	public ref class Login : public System::Windows::Forms::Form
	{
	public:
		Login(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Login()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  UserTextBox;
	private: System::Windows::Forms::TextBox^  PassTextBox;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	protected:

	private:
		 //<summary>
		 //Required designer variable.
		 //</summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Login::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->UserTextBox = (gcnew System::Windows::Forms::TextBox());
			this->PassTextBox = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(49, 57);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(68, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Username";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(53, 117);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(65, 17);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Password";
			// 
			// UserTextBox
			// 
			this->UserTextBox->Location = System::Drawing::Point(223, 47);
			this->UserTextBox->Margin = System::Windows::Forms::Padding(4);
			this->UserTextBox->Name = L"UserTextBox";
			this->UserTextBox->Size = System::Drawing::Size(132, 24);
			this->UserTextBox->TabIndex = 2;
			// 
			// PassTextBox
			// 
			this->PassTextBox->Location = System::Drawing::Point(223, 106);
			this->PassTextBox->Margin = System::Windows::Forms::Padding(4);
			this->PassTextBox->Name = L"PassTextBox";
			this->PassTextBox->PasswordChar = '*';
			this->PassTextBox->Size = System::Drawing::Size(132, 24);
			this->PassTextBox->TabIndex = 3;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(223, 176);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 30);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Sign in";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Login::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(223, 239);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(100, 30);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Sign Up";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Login::button2_Click);
			// 
			// Login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 17);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(534, 380);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->PassTextBox);
			this->Controls->Add(this->UserTextBox);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(4);
			this->MaximizeBox = false;
			this->Name = L"Login";
			this->Text = L"Login";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		private: System::Void validateCred(String^ user, String^ pass) {
			
			String^ constring = L"datasource = localhost; port = 3306; username = CricRec; password = cricrec";
			MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);

			MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select * from CricRec.admin where username = '" + user + "' and password = sha1('" + pass + "');", conDataBase);
			MySqlDataReader^ myReader;
			try {
				conDataBase->Open();
				myReader = cmdDataBase->ExecuteReader();

				if (myReader->HasRows > 0) {
					MessageBox::Show("Connected");
					MainWindow^ menu = gcnew MainWindow;
					Hide();
					menu->ShowDialog();
				}
				else {
					MessageBox::Show("Invalid username or password");
				}
			}
			catch (Exception^ex) {
				MessageBox::Show(ex->Message);
			}
		}

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		//A function to validate the username and password.
		validateCred(this->UserTextBox->Text, this->PassTextBox->Text);

	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		AddAdmin^ form = gcnew AddAdmin;
		Hide();
		form->ShowDialog();

	}
};
}
