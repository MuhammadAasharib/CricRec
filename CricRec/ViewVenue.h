#pragma once

namespace CricRec {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ViewVenue
	/// </summary>
	public ref class ViewVenue : public System::Windows::Forms::Form
	{
	public:
		ViewVenue(void)
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
		~ViewVenue()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListView^  listView1;
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
			this->SuspendLayout();
			// 
			// listView1
			// 
			this->listView1->Location = System::Drawing::Point(41, 57);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(198, 97);
			this->listView1->TabIndex = 0;
			this->listView1->UseCompatibleStateImageBehavior = false;
			// 
			// ViewVenue
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->listView1);
			this->Name = L"ViewVenue";
			this->Text = L"ViewVenue";
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}