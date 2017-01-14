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
	/// Summary for MakeTeam
	/// </summary>
	public ref class MakeTeam : public System::Windows::Forms::Form
	{
	public:
		MakeTeam(void)
		{
			InitializeComponent();
			fillListBox();
			teamAddedPlayer(textBox1->Text);

			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MakeTeam()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::TextBox^  textBox1;

	private: System::Windows::Forms::ListView^  listView2;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::ColumnHeader^  columnHeader1;
	private: System::Windows::Forms::ColumnHeader^  columnHeader2;
	private: System::Windows::Forms::ColumnHeader^  columnHeader3;
	private: System::Windows::Forms::ColumnHeader^  columnHeader4;
	private: System::Windows::Forms::ColumnHeader^  columnHeader5;
	private: System::Windows::Forms::ColumnHeader^  columnHeader6;
	private: System::Windows::Forms::ColumnHeader^  columnHeader7;
	private: System::Windows::Forms::ColumnHeader^  columnHeader8;
	private: System::Windows::Forms::ColumnHeader^  columnHeader9;
	private: System::Windows::Forms::ColumnHeader^  columnHeader10;
	private: System::Windows::Forms::ColumnHeader^  columnHeader11;
	private: System::Windows::Forms::ColumnHeader^  columnHeader12;
	private: System::Windows::Forms::ColumnHeader^  columnHeader13;
	private: System::Windows::Forms::ColumnHeader^  columnHeader14;
	private: System::Windows::Forms::ColumnHeader^  columnHeader15;
	private: System::Windows::Forms::ColumnHeader^  columnHeader16;
	private: System::Windows::Forms::ListView^  listView3;
	private: System::Windows::Forms::ColumnHeader^  columnHeader17;
	private: System::Windows::Forms::ColumnHeader^  columnHeader18;
	private: System::Windows::Forms::ColumnHeader^  columnHeader19;
	private: System::Windows::Forms::ColumnHeader^  columnHeader20;
	private: System::Windows::Forms::ColumnHeader^  columnHeader21;
	private: System::Windows::Forms::ColumnHeader^  columnHeader22;
	private: System::Windows::Forms::ColumnHeader^  columnHeader23;
	private: System::Windows::Forms::ColumnHeader^  columnHeader24;
	private: System::Windows::Forms::ColumnHeader^  columnHeader25;
	private: System::Windows::Forms::ColumnHeader^  columnHeader26;
	private: System::Windows::Forms::ColumnHeader^  columnHeader27;
	private: System::Windows::Forms::ColumnHeader^  columnHeader28;
	private: System::Windows::Forms::ColumnHeader^  columnHeader29;
	private: System::Windows::Forms::ColumnHeader^  columnHeader30;
	private: System::Windows::Forms::ColumnHeader^  columnHeader31;
	private: System::Windows::Forms::ColumnHeader^  columnHeader32;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::TextBox^  textBox2;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->listView2 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader3 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader4 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader5 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader6 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader7 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader8 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader9 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader10 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader11 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader12 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader13 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader14 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader15 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader16 = (gcnew System::Windows::Forms::ColumnHeader());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->listView3 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader17 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader18 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader19 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader20 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader21 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader22 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader23 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader24 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader25 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader26 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader27 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader28 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader29 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader30 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader31 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader32 = (gcnew System::Windows::Forms::ColumnHeader());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(261, 19);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(65, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Team Name";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(395, 19);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(161, 20);
			this->textBox1->TabIndex = 1;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MakeTeam::textBox1_TextChanged);
			// 
			// listView2
			// 
			this->listView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(16) {
				this->columnHeader1, this->columnHeader2,
					this->columnHeader3, this->columnHeader4, this->columnHeader5, this->columnHeader6, this->columnHeader7, this->columnHeader8,
					this->columnHeader9, this->columnHeader10, this->columnHeader11, this->columnHeader12, this->columnHeader13, this->columnHeader14,
					this->columnHeader15, this->columnHeader16
			});
			this->listView2->Location = System::Drawing::Point(530, 135);
			this->listView2->Name = L"listView2";
			this->listView2->Size = System::Drawing::Size(397, 177);
			this->listView2->TabIndex = 4;
			this->listView2->UseCompatibleStateImageBehavior = false;
			this->listView2->View = System::Windows::Forms::View::Details;
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"PlayerId";
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"Name";
			// 
			// columnHeader3
			// 
			this->columnHeader3->Text = L"Player Type";
			// 
			// columnHeader4
			// 
			this->columnHeader4->Text = L"Batting Avg";
			// 
			// columnHeader5
			// 
			this->columnHeader5->Text = L"Catches";
			// 
			// columnHeader6
			// 
			this->columnHeader6->Text = L"Runs";
			// 
			// columnHeader7
			// 
			this->columnHeader7->Text = L"Strike_Rate";
			// 
			// columnHeader8
			// 
			this->columnHeader8->Text = L"Preffered_Batting_Hand";
			// 
			// columnHeader9
			// 
			this->columnHeader9->Text = L"Preffered_Bowling_Hand";
			// 
			// columnHeader10
			// 
			this->columnHeader10->Text = L"Fifties";
			// 
			// columnHeader11
			// 
			this->columnHeader11->Text = L"Hundred";
			// 
			// columnHeader12
			// 
			this->columnHeader12->Text = L"RunOut";
			// 
			// columnHeader13
			// 
			this->columnHeader13->Text = L"Economy";
			// 
			// columnHeader14
			// 
			this->columnHeader14->Text = L"Wickets";
			// 
			// columnHeader15
			// 
			this->columnHeader15->Text = L"Stumps";
			// 
			// columnHeader16
			// 
			this->columnHeader16->Text = L"Age";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(705, 119);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(82, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Available Player";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(148, 119);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(70, 13);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Added Player";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(438, 289);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 7;
			this->button1->Text = L"Done";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// listView3
			// 
			this->listView3->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(16) {
				this->columnHeader17, this->columnHeader18,
					this->columnHeader19, this->columnHeader20, this->columnHeader21, this->columnHeader22, this->columnHeader23, this->columnHeader24,
					this->columnHeader25, this->columnHeader26, this->columnHeader27, this->columnHeader28, this->columnHeader29, this->columnHeader30,
					this->columnHeader31, this->columnHeader32
			});
			this->listView3->Location = System::Drawing::Point(12, 135);
			this->listView3->Name = L"listView3";
			this->listView3->Size = System::Drawing::Size(400, 177);
			this->listView3->TabIndex = 8;
			this->listView3->UseCompatibleStateImageBehavior = false;
			this->listView3->View = System::Windows::Forms::View::Details;
			// 
			// columnHeader17
			// 
			this->columnHeader17->Text = L"PlayerId";
			// 
			// columnHeader18
			// 
			this->columnHeader18->Text = L"Name";
			// 
			// columnHeader19
			// 
			this->columnHeader19->Text = L"Player Type";
			// 
			// columnHeader20
			// 
			this->columnHeader20->Text = L"Batting Avg";
			// 
			// columnHeader21
			// 
			this->columnHeader21->Text = L"Catches";
			// 
			// columnHeader22
			// 
			this->columnHeader22->Text = L"Runs";
			// 
			// columnHeader23
			// 
			this->columnHeader23->Text = L"Strike_Rate";
			// 
			// columnHeader24
			// 
			this->columnHeader24->Text = L"Preffered_Batting_Hand";
			// 
			// columnHeader25
			// 
			this->columnHeader25->Text = L"Preffered_Bowling_Hand";
			// 
			// columnHeader26
			// 
			this->columnHeader26->Text = L"Fifties";
			// 
			// columnHeader27
			// 
			this->columnHeader27->Text = L"Hundred";
			// 
			// columnHeader28
			// 
			this->columnHeader28->Text = L"RunOut";
			// 
			// columnHeader29
			// 
			this->columnHeader29->Text = L"Economy";
			// 
			// columnHeader30
			// 
			this->columnHeader30->Text = L"Wickets";
			// 
			// columnHeader31
			// 
			this->columnHeader31->Text = L"Stumps";
			// 
			// columnHeader32
			// 
			this->columnHeader32->Text = L"Age";
			// 
			// label4
			// 
			this->label4->AllowDrop = true;
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(264, 53);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(123, 13);
			this->label4->TabIndex = 9;
			this->label4->Text = L"ID of Player to be Added";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(618, 53);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 10;
			this->button2->Text = L"Add";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MakeTeam::button2_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(395, 53);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(161, 20);
			this->textBox2->TabIndex = 11;
			// 
			// MakeTeam
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(939, 324);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->listView3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->listView2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Name = L"MakeTeam";
			this->ShowInTaskbar = false;
			this->Text = L"MakeTeam";
			this->ResumeLayout(false);
			this->PerformLayout();

		}

	private: void teamAddedPlayer(String^ name) {
		String^ constring = L"datasource = localhost; port = 3306; username = CricRec; password = cricrec";
		MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);

		MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select * from cricrec.player where Team_Id in (select Team_Id from cricrec.Team where Team_Name = '"+ textBox1->Text+"');", conDataBase);
		//MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select * from cricrec.player where Team_Id = 1;", conDataBase);

		MySqlDataReader^ myReader;
		try {
			conDataBase->Open();
			myReader = cmdDataBase->ExecuteReader();

			while (myReader->Read()) {

				String^ id = myReader->GetInt32("Player_Id").ToString();
				String^ name = myReader->GetString("Name");
				//String^ team = myReader->GetInt32("Team_Id").ToString();
				String^ type = myReader->GetInt32("Player_Type_Id").ToString();
				String^ batAvg = myReader->GetFloat("Batting_Avg").ToString();
				String^ catches = myReader->GetFloat("catches").ToString();
				String^ runs = myReader->GetInt32("runs").ToString();
				String^ strRate = myReader->GetFloat("Strike_Rate").ToString();
				String^ preBatHand = myReader->GetChar("Preffered_Batting_Hand").ToString();
				String^ preBowHand = myReader->GetChar("Preffered_Bowling_Hand").ToString();
				String^ fifty = myReader->GetInt32("fifties").ToString();
				String^ hundered = myReader->GetInt32("Hundred").ToString();
				String^ runOut = myReader->GetInt32("RunOut").ToString();
				String^ economy = myReader->GetFloat("Economy").ToString();
				String^ wickets = myReader->GetInt32("Wickets").ToString();
				String^ stumps = myReader->GetInt32("Stumps").ToString();
				String^ age = myReader->GetInt32("age").ToString();

				auto item = gcnew ListViewItem(gcnew array<String^> { id, name, type, batAvg, catches, runs, strRate, preBatHand, preBowHand, fifty, hundered, runOut, economy, wickets, stumps, age});
				listView3->Items->Add(item);

				//listView1->Items->Add(id + "	  " + name + "	 " + startDate + "	" + endDate + "	" + matchTypeId);
			}
		}
		catch (Exception^ex) {
			MessageBox::Show(ex->Message);
		}
	}

	private: void fillListBox(void) {
		String^ constring = L"datasource = localhost; port = 3306; username = CricRec; password = cricrec";
		MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);

		MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select * from cricrec.player where Team_Id is not NULL;", conDataBase);

		MySqlDataReader^ myReader;
		try {
			conDataBase->Open();
			myReader = cmdDataBase->ExecuteReader();

			while (myReader->Read()) {

				String^ id = myReader->GetInt32("Player_Id").ToString();
				String^ name = myReader->GetString("Name");
				//String^ team = myReader->GetInt32("Team_Id").ToString();
				String^ type = myReader->GetInt32("Player_Type_Id").ToString();
				String^ batAvg = myReader->GetFloat("Batting_Avg").ToString();
				String^ catches = myReader->GetFloat("catches").ToString();
				String^ runs = myReader->GetInt32("runs").ToString();
				String^ strRate = myReader->GetFloat("Strike_Rate").ToString();
				String^ preBatHand = myReader->GetChar("Preffered_Batting_Hand").ToString();
				String^ preBowHand = myReader->GetChar("Preffered_Bowling_Hand").ToString();
				String^ fifty = myReader->GetInt32("fifties").ToString();
				String^ hundered = myReader->GetInt32("Hundred").ToString();
				String^ runOut = myReader->GetInt32("RunOut").ToString();
				String^ economy = myReader->GetFloat("Economy").ToString();
				String^ wickets = myReader->GetInt32("Wickets").ToString();
				String^ stumps = myReader->GetInt32("Stumps").ToString();
				String^ age = myReader->GetInt32("age").ToString();

				auto item = gcnew ListViewItem(gcnew array<String^> { id, name, type, batAvg, catches, runs, strRate, preBatHand, preBowHand, fifty, hundered, runOut, economy, wickets, stumps, age});
				listView2->Items->Add(item);

				//listView1->Items->Add(id + "	  " + name + "	 " + startDate + "	" + endDate + "	" + matchTypeId);
			}
		}
		catch (Exception^ex) {
			MessageBox::Show(ex->Message);
		}
	}


	private: void insertPlayerTeamId(String^ id, String^ playerId) {
		String^ constring = L"datasource = localhost; port = 3306; username = CricRec; password = cricrec";
		MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);

		MySqlCommand^ cmdDataBase = gcnew MySqlCommand("update cricrec.player set Team_Id = '"+ id +"' where player_id = '"+playerId+"';", conDataBase);

		MySqlDataReader^ myReader;
		try {
			conDataBase->Open();
			myReader = cmdDataBase->ExecuteReader();

			while (myReader->Read()) {

				String^ id = myReader->GetInt32("Player_Id").ToString();
				String^ name = myReader->GetString("Name");
				//String^ team = myReader->GetInt32("Team_Id").ToString();
				String^ type = myReader->GetInt32("Player_Type_Id").ToString();
				String^ batAvg = myReader->GetFloat("Batting_Avg").ToString();
				String^ catches = myReader->GetFloat("catches").ToString();
				String^ runs = myReader->GetInt32("runs").ToString();
				String^ strRate = myReader->GetFloat("Strike_Rate").ToString();
				String^ preBatHand = myReader->GetChar("Preffered_Batting_Hand").ToString();
				String^ preBowHand = myReader->GetChar("Preffered_Bowling_Hand").ToString();
				String^ fifty = myReader->GetInt32("fifties").ToString();
				String^ hundered = myReader->GetInt32("Hundred").ToString();
				String^ runOut = myReader->GetInt32("RunOut").ToString();
				String^ economy = myReader->GetFloat("Economy").ToString();
				String^ wickets = myReader->GetInt32("Wickets").ToString();
				String^ stumps = myReader->GetInt32("Stumps").ToString();
				String^ age = myReader->GetInt32("age").ToString();

				auto item = gcnew ListViewItem(gcnew array<String^> { id, name, type, batAvg, catches, runs, strRate, preBatHand, preBowHand, fifty, hundered, runOut, economy, wickets, stumps, age});
				listView2->Items->Add(item);

				//listView1->Items->Add(id + "	  " + name + "	 " + startDate + "	" + endDate + "	" + matchTypeId);
			}
		}
		catch (Exception^ex) {
			MessageBox::Show(ex->Message);
		}
	}
#pragma endregion
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		fillListBox();
		teamAddedPlayer(textBox1->Text);

		String^ constring = L"datasource = localhost; port = 3306; username = CricRec; password = cricrec";
		MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);

		MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select Team_Id from cricrec.Team where Team_Name = '"+textBox1->Text+"';", conDataBase);
		MySqlDataReader^ myReader;
		try {
			conDataBase->Open();
			myReader = cmdDataBase->ExecuteReader();

			while (myReader->Read()) {
				String^ teamId = myReader->GetString("Team_Id");
				insertPlayerTeamId(teamId, textBox2->Text);
			}
		}
		catch (Exception^ex) {
			MessageBox::Show(ex->Message);
		}


	}
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	String^ name = textBox1->Text;
}
};
}