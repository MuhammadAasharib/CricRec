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
	/// Summary for ViewPlayer
	/// </summary>
	public ref class ViewPlayer : public System::Windows::Forms::Form
	{
	public:
		ViewPlayer(void)
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
		~ViewPlayer()
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
			this->listBox1->Size = System::Drawing::Size(992, 225);
			this->listBox1->TabIndex = 0;
			// 
			// ViewPlayer
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1017, 261);
			this->Controls->Add(this->listBox1);
			this->Name = L"ViewPlayer";
			this->Text = L"ViewPlayer";
			this->ResumeLayout(false);

		}
#pragma endregion

	private: void fillListBox(void) {
		String^ constring = L"datasource = localhost; port = 3306; username = CricRec; password = cricrec";
		MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);

		MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select * from cricrec.player;", conDataBase);

		MySqlDataReader^ myReader;
		try {
			conDataBase->Open();
			myReader = cmdDataBase->ExecuteReader();
			listBox1->Items->Add("Id" + "	" + "Name" + "	" + "Team" + "	" + "Type" + "	" + "BatAvg" +
				"Catches" + "	" + "Runs" + "	" + "StrRate" + "	" + "PreBatHand" + "	" + "PreBowHand" +
				"Fifty" + "    " + "Hundered" + "	" + "RunOut" + "	" + "Economy" + "	" + "Wickets" +
				"	" + "Stumps" + "	" + "Age");
			while (myReader->Read()) {
				
				String^ id = myReader->GetInt32("Player_Id").ToString();
				String^ name = myReader->GetString("Name");
				String^ team = myReader->GetString("Team_Id");
				String^ type = myReader->GetString("Player_Type_Id");
				String^ batAvg = myReader->GetString("Batting_Avg");
				String^ catches = myReader->GetString("catches");
				String^ runs = myReader->GetString("runs");
				String^ strRate = myReader->GetString("Strike_Rate");
				String^ preBatHand = myReader->GetString("Preffered_Batting_Hand");
				String^ preBowHand = myReader->GetString("Preffered_Bowling_Hand");
				String^ fifty = myReader->GetString("fifties");
				String^ hundered = myReader->GetString("Hundred");
				String^ runOut = myReader->GetString("RunOut");
				String^ economy = myReader->GetString("Economy");
				String^ wickets = myReader->GetString("Wickets");
				String^ stumps = myReader->GetString("Stumps");
				String^ age = myReader->GetString("age");

				listBox1->Items->Add(id + "	  " + name + "	 " + team + "   " + type + "    " + batAvg + 
					catches +  "	" + runs +  "	" + strRate +  "	" + preBatHand  +  "	" + preBowHand + 
					fifty + "	" + hundered + "	" + runOut + "	 " + economy +  "	 " + wickets + 
					"	" + stumps +  "	  " + age);
			}
		}
		catch (Exception^ex) {
			MessageBox::Show(ex->Message);
		}
	}
	};
}
