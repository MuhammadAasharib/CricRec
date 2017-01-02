#pragma once
#include "CreateTournament.h"
#include "AddVenue.h"
#include "CreatePlayer.h"
#include "CreateUmpire.h"
#include "ViewTournament.h"
#include "ViewPlayer.h"
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
			this->button1->Location = System::Drawing::Point(35, 119);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(82, 41);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Create Tournament";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MainWindow::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(153, 119);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(88, 40);
			this->button2->TabIndex = 1;
			this->button2->Text = L"View Tournament";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MainWindow::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(284, 119);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(85, 41);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Create Player";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MainWindow::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(403, 119);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(83, 40);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Create Umpire";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MainWindow::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(517, 120);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(87, 40);
			this->button5->TabIndex = 4;
			this->button5->Text = L"View Player";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MainWindow::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(640, 119);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(82, 40);
			this->button6->TabIndex = 5;
			this->button6->Text = L"Add venue";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MainWindow::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(764, 119);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(93, 40);
			this->button7->TabIndex = 6;
			this->button7->Text = L"View Venue";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MainWindow::button7_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(363, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(147, 33);
			this->label1->TabIndex = 7;
			this->label1->Text = L"CRICREC";
			// 
			// MainWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(892, 261);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"MainWindow";
			this->Text = L"MainWindow";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &MainWindow::MainWindow_FormClosed);
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
	ViewPlayer^ form = gcnew ViewPlayer;
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
};
}
