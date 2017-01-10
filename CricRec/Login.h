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
			this->label1->Location = System::Drawing::Point(37, 44);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(55, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Username";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(40, 89);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(53, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Password";
			// 
			// UserTextBox
			// 
			this->UserTextBox->Location = System::Drawing::Point(167, 36);
			this->UserTextBox->Name = L"UserTextBox";
			this->UserTextBox->Size = System::Drawing::Size(100, 20);
			this->UserTextBox->TabIndex = 2;
			// 
			// PassTextBox
			// 
			this->PassTextBox->Location = System::Drawing::Point(167, 81);
			this->PassTextBox->Name = L"PassTextBox";
			this->PassTextBox->PasswordChar = '*';
			this->PassTextBox->Size = System::Drawing::Size(100, 20);
			this->PassTextBox->TabIndex = 3;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(167, 135);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Sign in";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Login::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(167, 183);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Sign Up";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Login::button2_Click);
			// 
			// Login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->PassTextBox);
			this->Controls->Add(this->UserTextBox);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
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
