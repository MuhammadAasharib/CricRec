#pragma once
#include "MakeTeam.h"

namespace CricRec {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
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
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(62, 34);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(90, 34);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Make Team";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &CreateTournament::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(62, 108);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(90, 30);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Add Umpire";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(62, 187);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(90, 33);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Make Schedule";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(366, 197);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Done";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// CreateTournament
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(670, 261);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"CreateTournament";
			this->Text = L"CreateTournament";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		MakeTeam^ form = gcnew MakeTeam;
		Hide();
		form->ShowDialog();
		Show();
	}
	};
}
