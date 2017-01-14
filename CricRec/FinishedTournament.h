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
	/// Summary for FinishedTournament
	/// </summary>
	public ref class FinishedTournament : public System::Windows::Forms::Form
	{
	public:
		FinishedTournament(void)
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
		~FinishedTournament()
		{
			if (components)
			{
				delete components;
			}
		}


	private: System::Windows::Forms::ListView^  listView1;
	private: System::Windows::Forms::ColumnHeader^  columnHeader;
	private: System::Windows::Forms::ColumnHeader^  columnHeader1;
	private: System::Windows::Forms::ColumnHeader^  columnHeader2;
	private: System::Windows::Forms::ColumnHeader^  columnHeader3;
	private: System::Windows::Forms::ColumnHeader^  columnHeader4;


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
			this->columnHeader = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader3 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader4 = (gcnew System::Windows::Forms::ColumnHeader());
			this->SuspendLayout();
			// 
			// listView1
			// 
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(5) {
				this->columnHeader, this->columnHeader1,
					this->columnHeader2, this->columnHeader3, this->columnHeader4
			});
			this->listView1->Location = System::Drawing::Point(3, -1);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(544, 262);
			this->listView1->TabIndex = 2;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			// 
			// columnHeader
			// 
			this->columnHeader->Text = L"Tournament_Id";
			this->columnHeader->Width = 90;
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"Name";
			this->columnHeader1->Width = 128;
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"Start_Date";
			this->columnHeader2->Width = 100;
			// 
			// columnHeader3
			// 
			this->columnHeader3->Text = L"EndDate";
			this->columnHeader3->Width = 122;
			// 
			// columnHeader4
			// 
			this->columnHeader4->Text = L"Match_Type_ID";
			this->columnHeader4->Width = 199;
			// 
			// FinishedTournament
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(546, 261);
			this->Controls->Add(this->listView1);
			this->Name = L"FinishedTournament";
			this->Text = L"FinishedTournament";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	}

			 private: void fillListBox(void) {
				 String^ constring = L"datasource = localhost; port = 3306; username = CricRec; password = cricrec";
				 MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);

				 MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select * from cricrec.tournament where End_Date < Date(Now());", conDataBase);

				 MySqlDataReader^ myReader;
				 try {
					 conDataBase->Open();
					 myReader = cmdDataBase->ExecuteReader();
					 //listView1->Items->Add("Id" + "	" + "Name" + "		" + "Team" + "	" + "Type" + "	" + "BatAvg" + "	"
						// "Catches" + "	" + "Runs" + "	" + "StrRate" + "	" + "PreBatHand" + "	" + "PreBowHand" + "	"
						// "Fifty" + "    " + "Hundered" + "	" + "RunOut" + "	" + "Economy" + "	" + "Wickets" +
						// "	" + "Stumps" + "	" + "Age");
					 while (myReader->Read()) {

						 String^ id = myReader->GetInt32("Tournament_Id").ToString();
						 String^ name = myReader->GetString("Name");
						 String^ startDate = myReader->GetDateTime("Start_Date").ToString();
						 String^ endDate = myReader->GetDateTime("End_Date").ToString();
						 String^ matchTypeId = myReader->GetInt32("Match_Type_Id").ToString();
							
						 auto item = gcnew ListViewItem(gcnew array<String^> { id, name, startDate, endDate, matchTypeId});
						 listView1->Items->Add(item);
						 //listView1->Items->Add(id + "	  " + name + "	 " + startDate + "	" + endDate + "	" + matchTypeId);
					 }
				 }
				 catch (Exception^ex) {
					 MessageBox::Show(ex->Message);
				 }
			 }
	};
}
