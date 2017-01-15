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
	/// Summary for ViewPlayer1
	/// </summary>
	public ref class ViewPlayer1 : public System::Windows::Forms::Form
	{
	public:
		ViewPlayer1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			fillListBox();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ViewPlayer1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListView^  listView1;
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
	private: System::Windows::Forms::ColumnHeader^  columnHeader17;
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
			this->listView1 = (gcnew System::Windows::Forms::ListView());
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
			this->columnHeader17 = (gcnew System::Windows::Forms::ColumnHeader());
			this->SuspendLayout();
			// 
			// listView1
			// 
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(17) {
				this->columnHeader1, this->columnHeader2,
					this->columnHeader3, this->columnHeader4, this->columnHeader5, this->columnHeader6, this->columnHeader7, this->columnHeader8,
					this->columnHeader9, this->columnHeader10, this->columnHeader11, this->columnHeader12, this->columnHeader13, this->columnHeader14,
					this->columnHeader15, this->columnHeader16, this->columnHeader17
			});
			this->listView1->Location = System::Drawing::Point(-1, 0);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(968, 263);
			this->listView1->TabIndex = 0;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"Player_Id";
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"Name";
			// 
			// columnHeader3
			// 
			this->columnHeader3->Text = L"Team_Id";
			// 
			// columnHeader4
			// 
			this->columnHeader4->Text = L"Player_Type_Id";
			// 
			// columnHeader5
			// 
			this->columnHeader5->Text = L"Batting_Avg";
			// 
			// columnHeader6
			// 
			this->columnHeader6->Text = L"Catches";
			// 
			// columnHeader7
			// 
			this->columnHeader7->Text = L"Runs";
			// 
			// columnHeader8
			// 
			this->columnHeader8->Text = L"Strike_Rate";
			// 
			// columnHeader9
			// 
			this->columnHeader9->Text = L"Preffered_Batting_Hand";
			// 
			// columnHeader10
			// 
			this->columnHeader10->Text = L"Preffered_Bowling_Hand";
			// 
			// columnHeader11
			// 
			this->columnHeader11->Text = L"Fifties";
			// 
			// columnHeader12
			// 
			this->columnHeader12->Text = L"Hundred";
			// 
			// columnHeader13
			// 
			this->columnHeader13->Text = L"RunOut";
			// 
			// columnHeader14
			// 
			this->columnHeader14->Text = L"Economy";
			// 
			// columnHeader15
			// 
			this->columnHeader15->Text = L"Wickets";
			// 
			// columnHeader16
			// 
			this->columnHeader16->Text = L"Stumps";
			// 
			// columnHeader17
			// 
			this->columnHeader17->Text = L"Age";
			// 
			// ViewPlayer1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(966, 261);
			this->Controls->Add(this->listView1);
			this->Name = L"ViewPlayer1";
			this->Text = L"ViewPlayer1";
			this->ResumeLayout(false);

		}

		 private: void fillListBox(void) {
			 String^ constring = L"datasource = localhost; port = 3306; username = CricRec; password = cricrec";
			 MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);

			 MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select * from cricrec.player;", conDataBase);

			 MySqlDataReader^ myReader;
			 try {
				 conDataBase->Open();
				 myReader = cmdDataBase->ExecuteReader();

				 while (myReader->Read()) {

					 String^ id = myReader->GetInt32("Player_Id").ToString();
					 String^ name = myReader->GetString("Name");
					 String^ team = myReader->GetInt32("Team_Id").ToString();
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

					 auto item = gcnew ListViewItem(gcnew array<String^> { id, name, team, type, batAvg, catches, runs, strRate, preBatHand, preBowHand, fifty, hundered, runOut, economy, wickets, stumps, age});
				//	 if (item != "NULL") {
						 listView1->Items->Add(item);
					// }

					 //listView1->Items->Add(id + "	  " + name + "	 " + startDate + "	" + endDate + "	" + matchTypeId);
				 }
				 myReader->Close();
			 }
			 catch (Exception^ex) {
				 MessageBox::Show(ex->Message);
			 }
		 }
#pragma endregion
	};
}
