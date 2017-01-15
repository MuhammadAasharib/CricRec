#pragma once
#include "MakeTeam.h"
#include "MakeSchedule.h"

namespace CricRec {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for CreateTournament
	/// </summary>
	public ref class CreateTournament : public System::Windows::Forms::Form
	{
	public:
		CreateTournament(void)
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
		~CreateTournament()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;

	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Button^  button2;
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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(62, 61);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(101, 44);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Make Team";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &CreateTournament::button1_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(62, 154);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(101, 46);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Generate Match For Schedule";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &CreateTournament::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(366, 197);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Done";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &CreateTournament::button4_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(62, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(101, 13);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Touranament Name";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(169, 19);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 5;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(363, 22);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(84, 13);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Touranament ID";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(453, 19);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 7;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(604, 17);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(31, 23);
			this->button2->TabIndex = 8;
			this->button2->Text = L"ok";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &CreateTournament::button2_Click);
			// 
			// CreateTournament
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(670, 261);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button1);
			this->Name = L"CreateTournament";
			this->Text = L"CreateTournament";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		MakeTeam^ form = gcnew MakeTeam(textBox2->Text);
		Hide();
		form->ShowDialog();
		Show();
	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		MakeSchedule^ form = gcnew MakeSchedule(textBox2->Text);
		Hide();
		form->ShowDialog();
		Show();
	}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ tournamentName = textBox1->Text;
	String^ tournamentID = textBox2->Text;
	String^ constring = L"datasource = localhost; port = 3306; username = CricRec; password = cricrec";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);

	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("insert into cricrec.tournament (Tournament_id,Name) values ('" + tournamentID + "','" + tournamentName + "');", conDataBase);
	MySqlDataReader^ myReader;
	try {
		conDataBase->Open();
		myReader = cmdDataBase->ExecuteReader();

		while (myReader->Read()) {

		}
		MessageBox::Show("Touranment Created");
	}
	catch (Exception^ex) {
		MessageBox::Show(ex->Message);
	}
	
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ TournamentId = textBox2->Text;
	String TeamId = 
}
};
}
