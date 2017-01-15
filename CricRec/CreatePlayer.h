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
	/// Summary for CreatePlayer
	/// </summary>
	public ref class CreatePlayer : public System::Windows::Forms::Form
	{
	public:
		CreatePlayer(void)
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
		~CreatePlayer()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label3;

	private: System::Windows::Forms::Label^  label4;

	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label5;

	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox5;
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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(149, 36);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(13, 42);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(35, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Name";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(13, 70);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(26, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Age";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(149, 67);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 3;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(13, 104);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(31, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Type";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(13, 135);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(115, 13);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Preferred Hand Batting";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(174, 204);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 8;
			this->button1->Text = L"ok";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &CreatePlayer::button1_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(13, 167);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(119, 13);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Preferred Hand Bowling";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(149, 135);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 11;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(149, 164);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 20);
			this->textBox5->TabIndex = 12;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Batsman", L"Bowler", L"WicketKepper", L"All Rounder" });
			this->comboBox1->Location = System::Drawing::Point(149, 101);
			this->comboBox1->MaxDropDownItems = 4;
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(100, 21);
			this->comboBox1->TabIndex = 13;
			// 
			// CreatePlayer
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Name = L"CreatePlayer";
			this->Text = L"CreatePlayer";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

		String^ constring = L"datasource = localhost; port = 3306; username = CricRec; password = cricrec";
		MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);

		MySqlCommand^ cmdDataBase;

		if (comboBox1->SelectedItem->Equals("Batsman")) {

			cmdDataBase = gcnew MySqlCommand("INSERT INTO cricrec.player (name, age,Player_type_id, Preffered_Batting_Hand, Preffered_Bowling_Hand) values ('" + this->textBox1->Text + "','" + this->textBox2->Text + "', '1' ,'" + this->textBox4->Text + "','" + this->textBox5->Text + "');", conDataBase);
			MessageBox::Show("Player Added Sucessfully");
		}

		if (comboBox1->SelectedItem->Equals("Bowler")) {

			cmdDataBase = gcnew MySqlCommand("INSERT INTO cricrec.player (name, age, Preffered_Batting_Hand, Preffered_Bowling_Hand) values ('" + this->textBox1->Text + "','" + this->textBox2->Text + "', '2' ,'" + this->textBox4->Text + "','" + this->textBox5->Text + "');", conDataBase);
			MessageBox::Show("Player Added Sucessfully");
		}

		if (comboBox1->SelectedItem->Equals("Wicket Keeper")) {

			cmdDataBase = gcnew MySqlCommand("INSERT INTO cricrec.player (name, age, Preffered_Batting_Hand, Preffered_Bowling_Hand) values ('" + this->textBox1->Text + "','" + this->textBox2->Text + "', '3' ,'" + this->textBox4->Text + "','" + this->textBox5->Text + "');", conDataBase);
			MessageBox::Show("Player Added Sucessfully");
		}

		if (comboBox1->SelectedItem->Equals("All Rounder")) {

			cmdDataBase = gcnew MySqlCommand("INSERT INTO cricrec.player (name, age, Preffered_Batting_Hand, Preffered_Bowling_Hand) values ('" + this->textBox1->Text + "','" + this->textBox2->Text + "', '4' ,'" + this->textBox4->Text + "','" + this->textBox5->Text + "');", conDataBase);
			MessageBox::Show("Player Added Sucessfully");
		}

		MySqlDataReader^ myReader;
		try {
			conDataBase->Open();
			myReader = cmdDataBase->ExecuteReader();

			while (myReader->Read()) {

			}
		}
		catch (Exception^ex) {
			MessageBox::Show(ex->Message);
		}

	}
};
}
