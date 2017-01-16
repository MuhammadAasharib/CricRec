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
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker1;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::ComboBox^  comboBox1;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(CreateTournament::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateTimePicker2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(103, 84);
			this->button1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(169, 61);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Make Team";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &CreateTournament::button1_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(103, 213);
			this->button3->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(169, 64);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Generate Match For Schedule";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &CreateTournament::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(243, 313);
			this->button4->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(124, 32);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Done";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &CreateTournament::button4_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(103, 30);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(151, 18);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Touranament Name";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(282, 26);
			this->textBox1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(164, 25);
			this->textBox1->TabIndex = 5;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(604, 30);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(132, 18);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Touranament ID";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(756, 26);
			this->textBox2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(164, 25);
			this->textBox2->TabIndex = 7;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(1007, 24);
			this->button2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(51, 32);
			this->button2->TabIndex = 8;
			this->button2->Text = L"ok";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &CreateTournament::button2_Click);
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->CustomFormat = L"yyyy-MM-dd";
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker1->Location = System::Drawing::Point(756, 84);
			this->dateTimePicker1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(331, 25);
			this->dateTimePicker1->TabIndex = 9;
			// 
			// dateTimePicker2
			// 
			this->dateTimePicker2->CustomFormat = L"yyyy-MM-dd";
			this->dateTimePicker2->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker2->Location = System::Drawing::Point(756, 147);
			this->dateTimePicker2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->dateTimePicker2->Name = L"dateTimePicker2";
			this->dateTimePicker2->Size = System::Drawing::Size(331, 25);
			this->dateTimePicker2->TabIndex = 10;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(756, 213);
			this->textBox3->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(164, 25);
			this->textBox3->TabIndex = 11;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(610, 84);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(84, 18);
			this->label3->TabIndex = 12;
			this->label3->Text = L"Start Date";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(610, 147);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(79, 18);
			this->label4->TabIndex = 13;
			this->label4->Text = L"End Date";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(610, 213);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(118, 18);
			this->label5->TabIndex = 14;
			this->label5->Text = L"Match Type Id";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"1\t10 Overs", L"2\t20 Overs", L"3\t50 Overs" });
			this->comboBox1->Location = System::Drawing::Point(1007, 213);
			this->comboBox1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(80, 26);
			this->comboBox1->TabIndex = 15;
			// 
			// CreateTournament
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 18);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlDark;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1117, 361);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->dateTimePicker2);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button1);
			this->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
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
	String^ startDate = dateTimePicker1->Text;
	String^ endDate = dateTimePicker2->Text;
	String^ matchTypeId = textBox3->Text;
	String^ constring = L"datasource = localhost; port = 3306; username = CricRec; password = cricrec";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);

	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("insert into cricrec.tournament (Tournament_id,Name,Start_Date,End_Date,Match_Type_Id) values ('" + tournamentID + "','" + tournamentName + "', '"+startDate+"','"+endDate+"','"+matchTypeId+"');", conDataBase);
	MySqlDataReader^ myReader;
	try {
		conDataBase->Open();
		myReader = cmdDataBase->ExecuteReader();

		while (myReader->Read()) {

		}
		MessageBox::Show("Touranment Created now u can add teams and shedule");
	}
	catch (Exception^ex) {
		MessageBox::Show(ex->Message);
	}
	
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	MessageBox::Show("tournament Created");
}
};
}
