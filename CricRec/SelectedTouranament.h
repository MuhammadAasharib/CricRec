#pragma once
#include "ViewSchedule.h"

namespace CricRec {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;
	using namespace System::Diagnostics;

	/// <summary>
	/// Summary for SelectedTouranament
	/// </summary>
	public ref class SelectedTouranament : public System::Windows::Forms::Form
	{
	public:
		String^ selectedTor;
		SelectedTouranament(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		SelectedTouranament(String^ name) {
			InitializeComponent();
			selectedTor = name;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~SelectedTouranament()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(SelectedTouranament::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(156, 43);
			this->button1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(135, 44);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Start Match";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &SelectedTouranament::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(156, 155);
			this->button2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(135, 42);
			this->button2->TabIndex = 1;
			this->button2->Text = L"View Stats";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &SelectedTouranament::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(156, 258);
			this->button3->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(135, 44);
			this->button3->TabIndex = 2;
			this->button3->Text = L"View Schedule";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &SelectedTouranament::button3_Click);
			// 
			// SelectedTouranament
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 18);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(426, 357);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"SelectedTouranament";
			this->Text = L"SelectedTouranament";
			this->ResumeLayout(false);

		}

	private: void fillListBox(void) {
		String^ constring = L"datasource = localhost; port = 3306; username = CricRec; password = cricrec";
		MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);

		MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select Name from cricrec.tournament where End_Date is NULL;", conDataBase);

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
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Hide();
		auto StartLiveScoreManager = 
			Process::Start("C:\\Users\\Aasharib\\OneDrive\\Third Semester\\Database\\project\\new\\LiveScoreManager\\LiveScoreManager\\CricketScoreBoard-ESP-DBS.exe");
		StartLiveScoreManager->WaitForExit();
		this->Show();
	}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	ViewSchedule^ form = gcnew ViewSchedule(selectedTor);
	Hide();
	form->ShowDialog();

}
};
}
