#pragma once
#include "CreateTournament.h"
#include "AddVenue.h"
#include "CreatePlayer.h"
#include "CreateUmpire.h"
#include "ViewTournament.h"
#include "ViewPlayer1.h"
#include "ViewVenue.h"
namespace CricRec {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainWindow
	/// </summary>
	public ref class MainWindow : public System::Windows::Forms::Form
	{
	public:
		MainWindow(void)
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
		~MainWindow()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected:
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Label^  label1;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MainWindow::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(68, 115);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(123, 57);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Create Tournament";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MainWindow::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(248, 115);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(132, 55);
			this->button2->TabIndex = 1;
			this->button2->Text = L"View Tournament";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MainWindow::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(429, 115);
			this->button3->Margin = System::Windows::Forms::Padding(4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(128, 57);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Create Player";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MainWindow::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(602, 115);
			this->button4->Margin = System::Windows::Forms::Padding(4);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(124, 55);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Create Umpire";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MainWindow::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(765, 115);
			this->button5->Margin = System::Windows::Forms::Padding(4);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(130, 55);
			this->button5->TabIndex = 4;
			this->button5->Text = L"View Player";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MainWindow::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(946, 115);
			this->button6->Margin = System::Windows::Forms::Padding(4);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(123, 55);
			this->button6->TabIndex = 5;
			this->button6->Text = L"Add venue";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MainWindow::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(1126, 115);
			this->button7->Margin = System::Windows::Forms::Padding(4);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(140, 55);
			this->button7->TabIndex = 6;
			this->button7->Text = L"View Venue";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MainWindow::button7_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(544, 12);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(226, 50);
			this->label1->TabIndex = 7;
			this->label1->Text = L"CRICREC";
			// 
			// MainWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 18);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1312, 361);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(4);
			this->MaximizeBox = false;
			this->Name = L"MainWindow";
			this->Text = L"MainWindow";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &MainWindow::MainWindow_FormClosed);
			this->Load += gcnew System::EventHandler(this, &MainWindow::MainWindow_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		CreateTournament^ form = gcnew CreateTournament;
		Hide();
		form->ShowDialog();
		Show();
	}
private: System::Void MainWindow_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e) {
	Application::Exit();
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	ViewTournament^ form = gcnew ViewTournament;
	Hide();
	form->ShowDialog();
	Show();
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	CreatePlayer^ form = gcnew CreatePlayer;
	Hide();
	form->ShowDialog();
	Show();
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	CreateUmpire^ form = gcnew CreateUmpire;
	Hide();
	form->ShowDialog();
	Show();
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	ViewPlayer1^ form = gcnew ViewPlayer1;
	Hide();
	form->ShowDialog();
	Show();
}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
	AddVenue^ form = gcnew AddVenue;
	Hide();
	form->ShowDialog();
	Show();
}
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
	ViewVenue^ form = gcnew ViewVenue;
	Hide();
	form->ShowDialog();
	Show();
}
private: System::Void MainWindow_Load(System::Object^  sender, System::EventArgs^  e) {
}
};
}
