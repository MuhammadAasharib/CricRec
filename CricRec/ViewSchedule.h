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
	/// Summary for ViewSchedule
	/// </summary>
	public ref class ViewSchedule : public System::Windows::Forms::Form
	{
	public:
		String^ curr;
		ViewSchedule(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			fillListBox();
		}

		ViewSchedule(String^ name)
		{
			InitializeComponent();
			curr = name;
			fillListBox();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ViewSchedule()
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
			this->SuspendLayout();
			// 
			// listView1
			// 
			this->listView1->BackColor = System::Drawing::SystemColors::ControlLight;
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(9) {
				this->columnHeader1, this->columnHeader2,
					this->columnHeader3, this->columnHeader4, this->columnHeader5, this->columnHeader6, this->columnHeader7, this->columnHeader8,
					this->columnHeader9
			});
			this->listView1->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listView1->Location = System::Drawing::Point(-1, -3);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(750, 268);
			this->listView1->TabIndex = 0;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"Match ID";
			this->columnHeader1->Width = 87;
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"Tournament ID";
			this->columnHeader2->Width = 99;
			// 
			// columnHeader3
			// 
			this->columnHeader3->Text = L"Time Slot";
			this->columnHeader3->Width = 123;
			// 
			// columnHeader4
			// 
			this->columnHeader4->Text = L"Venue ID";
			this->columnHeader4->Width = 75;
			// 
			// columnHeader5
			// 
			this->columnHeader5->Text = L"Umpire 1";
			// 
			// columnHeader6
			// 
			this->columnHeader6->Text = L"Umpire 2";
			// 
			// columnHeader7
			// 
			this->columnHeader7->Text = L"Umpire 3";
			// 
			// columnHeader8
			// 
			this->columnHeader8->Text = L"Team 1";
			// 
			// columnHeader9
			// 
			this->columnHeader9->Text = L"Team 2";
			// 
			// ViewSchedule
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(749, 261);
			this->Controls->Add(this->listView1);
			this->Name = L"ViewSchedule";
			this->Text = L"ViewSchedule";
			this->ResumeLayout(false);

		}

	private: void fillListBox(void) {
		String^ constring = L"datasource = localhost; port = 3306; username = CricRec; password = cricrec";
		MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);

		MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select Match_Id,Tournament_Id,Time_Slot,Venue_Id,Umpire_1_Id,Umpire_2_Id,Umpire_3_Id,team1,team2 from cricrec.match where tournament_Id = (select tournament_Id from cricrec.Tournament where name = '"+curr+"'  );", conDataBase);

		MySqlDataReader^ myReader;
		try {
			conDataBase->Open();
			myReader = cmdDataBase->ExecuteReader();

			while (myReader->Read()) {

				String^ matchId = myReader->GetInt32("Match_Id").ToString();
				String^ tournamentId = myReader->GetInt32("Tournament_Id").ToString();
				auto time = myReader->GetDateTime("Time_Slot");
				String^ venueId = myReader->GetInt32("Venue_Id").ToString();
				String^ umpire1 = myReader->GetInt32("Umpire_1_Id").ToString();
				String^ umpire2 = myReader->GetInt32("Umpire_2_Id").ToString();
				String^ umpire3 = myReader->GetInt32("Umpire_3_Id").ToString();
				String^ team1 = myReader->GetString("team1");
				String^ team2 = myReader->GetString("team2");
				
				auto item = gcnew ListViewItem(gcnew array<String^> { matchId, tournamentId, time.ToString(), venueId, umpire1, umpire2, umpire3, team1, team2});
				listView1->Items->Add(item);

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
