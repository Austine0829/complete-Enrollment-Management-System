#pragma once

#include "academicyear.h"
#include "fees.h"
#include "teacher.h"
#include "section.h"
#include "student.h"
#include "enrollment.h"
#include "billing.h"

namespace ProjectSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for main
	/// </summary>
	public ref class main : public System::Windows::Forms::Form
	{
	public:
		main(void)
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
		~main()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::PictureBox^ btnShowMenuBar;
	private: System::Windows::Forms::Panel^ panelMenuBar;
	private: System::Windows::Forms::PictureBox^ btnHideMenuBar;



	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button4;

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button5;


	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::Panel^ panelMain;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btnExitSystem;
	private: System::Windows::Forms::Button^ btnMaximizeSystem;

	private: System::Windows::Forms::Button^ btnMinimizeSystem;










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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(main::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->btnMinimizeSystem = (gcnew System::Windows::Forms::Button());
			this->btnMaximizeSystem = (gcnew System::Windows::Forms::Button());
			this->btnExitSystem = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->btnShowMenuBar = (gcnew System::Windows::Forms::PictureBox());
			this->panelMenuBar = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->btnHideMenuBar = (gcnew System::Windows::Forms::PictureBox());
			this->panelMain = (gcnew System::Windows::Forms::Panel());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnShowMenuBar))->BeginInit();
			this->panelMenuBar->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnHideMenuBar))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Gray;
			this->panel1->Controls->Add(this->btnMinimizeSystem);
			this->panel1->Controls->Add(this->btnMaximizeSystem);
			this->panel1->Controls->Add(this->btnExitSystem);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1200, 30);
			this->panel1->TabIndex = 0;
			// 
			// btnMinimizeSystem
			// 
			this->btnMinimizeSystem->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btnMinimizeSystem->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnMinimizeSystem.BackgroundImage")));
			this->btnMinimizeSystem->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->btnMinimizeSystem->FlatAppearance->BorderSize = 0;
			this->btnMinimizeSystem->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnMinimizeSystem->Location = System::Drawing::Point(1090, 0);
			this->btnMinimizeSystem->Name = L"btnMinimizeSystem";
			this->btnMinimizeSystem->Size = System::Drawing::Size(39, 30);
			this->btnMinimizeSystem->TabIndex = 2;
			this->btnMinimizeSystem->UseVisualStyleBackColor = true;
			this->btnMinimizeSystem->Click += gcnew System::EventHandler(this, &main::btnMinimizeSystem_Click);
			// 
			// btnMaximizeSystem
			// 
			this->btnMaximizeSystem->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btnMaximizeSystem->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnMaximizeSystem.BackgroundImage")));
			this->btnMaximizeSystem->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->btnMaximizeSystem->FlatAppearance->BorderSize = 0;
			this->btnMaximizeSystem->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnMaximizeSystem->Location = System::Drawing::Point(1126, 0);
			this->btnMaximizeSystem->Name = L"btnMaximizeSystem";
			this->btnMaximizeSystem->Size = System::Drawing::Size(39, 30);
			this->btnMaximizeSystem->TabIndex = 1;
			this->btnMaximizeSystem->UseVisualStyleBackColor = true;
			this->btnMaximizeSystem->Click += gcnew System::EventHandler(this, &main::btnMaximizeSystem_Click);
			// 
			// btnExitSystem
			// 
			this->btnExitSystem->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btnExitSystem->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnExitSystem.BackgroundImage")));
			this->btnExitSystem->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->btnExitSystem->FlatAppearance->BorderSize = 0;
			this->btnExitSystem->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnExitSystem->Location = System::Drawing::Point(1160, 0);
			this->btnExitSystem->Name = L"btnExitSystem";
			this->btnExitSystem->Size = System::Drawing::Size(39, 30);
			this->btnExitSystem->TabIndex = 0;
			this->btnExitSystem->UseVisualStyleBackColor = true;
			this->btnExitSystem->Click += gcnew System::EventHandler(this, &main::btnExitSystem_Click);
			// 
			// panel2
			// 
			this->panel2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->panel2->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->panel2->Controls->Add(this->btnShowMenuBar);
			this->panel2->Location = System::Drawing::Point(0, 30);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(46, 723);
			this->panel2->TabIndex = 2;
			// 
			// btnShowMenuBar
			// 
			this->btnShowMenuBar->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnShowMenuBar.BackgroundImage")));
			this->btnShowMenuBar->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->btnShowMenuBar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnShowMenuBar->Location = System::Drawing::Point(5, 7);
			this->btnShowMenuBar->Name = L"btnShowMenuBar";
			this->btnShowMenuBar->Size = System::Drawing::Size(36, 42);
			this->btnShowMenuBar->TabIndex = 0;
			this->btnShowMenuBar->TabStop = false;
			this->btnShowMenuBar->Click += gcnew System::EventHandler(this, &main::btnShowMenuBar_Click);
			// 
			// panelMenuBar
			// 
			this->panelMenuBar->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->panelMenuBar->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->panelMenuBar->Controls->Add(this->label2);
			this->panelMenuBar->Controls->Add(this->label1);
			this->panelMenuBar->Controls->Add(this->button8);
			this->panelMenuBar->Controls->Add(this->button7);
			this->panelMenuBar->Controls->Add(this->button6);
			this->panelMenuBar->Controls->Add(this->button5);
			this->panelMenuBar->Controls->Add(this->button4);
			this->panelMenuBar->Controls->Add(this->button2);
			this->panelMenuBar->Controls->Add(this->button1);
			this->panelMenuBar->Controls->Add(this->pictureBox3);
			this->panelMenuBar->Controls->Add(this->btnHideMenuBar);
			this->panelMenuBar->Location = System::Drawing::Point(0, 30);
			this->panelMenuBar->Name = L"panelMenuBar";
			this->panelMenuBar->Size = System::Drawing::Size(262, 723);
			this->panelMenuBar->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label2->AutoSize = true;
			this->label2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(80, 197);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(93, 20);
			this->label2->TabIndex = 11;
			this->label2->Text = L"Adminstrator";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(62, 174);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(131, 23);
			this->label1->TabIndex = 10;
			this->label1->Text = L"Austine Tuazon";
			// 
			// button8
			// 
			this->button8->FlatAppearance->BorderSize = 0;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button8.Image")));
			this->button8->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button8->Location = System::Drawing::Point(0, 542);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(262, 40);
			this->button8->TabIndex = 7;
			this->button8->Text = L"   Academic Year";
			this->button8->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &main::button8_Click);
			// 
			// button7
			// 
			this->button7->FlatAppearance->BorderSize = 0;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button7.Image")));
			this->button7->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button7->Location = System::Drawing::Point(0, 496);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(262, 40);
			this->button7->TabIndex = 7;
			this->button7->Text = L"   Section";
			this->button7->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &main::button7_Click);
			// 
			// button6
			// 
			this->button6->FlatAppearance->BorderSize = 0;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button6.Image")));
			this->button6->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button6->Location = System::Drawing::Point(0, 450);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(262, 40);
			this->button6->TabIndex = 7;
			this->button6->Text = L"   Fees";
			this->button6->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &main::button6_Click);
			// 
			// button5
			// 
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button5.Image")));
			this->button5->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button5->Location = System::Drawing::Point(0, 404);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(262, 40);
			this->button5->TabIndex = 6;
			this->button5->Text = L"   Teacher";
			this->button5->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &main::button5_Click);
			// 
			// button4
			// 
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.Image")));
			this->button4->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button4->Location = System::Drawing::Point(0, 358);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(262, 40);
			this->button4->TabIndex = 5;
			this->button4->Text = L"   Student";
			this->button4->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &main::button4_Click);
			// 
			// button2
			// 
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.Image")));
			this->button2->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button2->Location = System::Drawing::Point(0, 312);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(262, 40);
			this->button2->TabIndex = 3;
			this->button2->Text = L"   Payment";
			this->button2->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &main::button2_Click);
			// 
			// button1
			// 
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button1->Location = System::Drawing::Point(0, 266);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(262, 40);
			this->button1->TabIndex = 2;
			this->button1->Text = L"   Enrollment";
			this->button1->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &main::button1_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.BackgroundImage")));
			this->pictureBox3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox3->Location = System::Drawing::Point(69, 51);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(116, 120);
			this->pictureBox3->TabIndex = 1;
			this->pictureBox3->TabStop = false;
			// 
			// btnHideMenuBar
			// 
			this->btnHideMenuBar->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnHideMenuBar.BackgroundImage")));
			this->btnHideMenuBar->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->btnHideMenuBar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnHideMenuBar->Location = System::Drawing::Point(5, 7);
			this->btnHideMenuBar->Name = L"btnHideMenuBar";
			this->btnHideMenuBar->Size = System::Drawing::Size(36, 42);
			this->btnHideMenuBar->TabIndex = 0;
			this->btnHideMenuBar->TabStop = false;
			this->btnHideMenuBar->Click += gcnew System::EventHandler(this, &main::btnHideMenuBar_Click);
			// 
			// panelMain
			// 
			this->panelMain->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panelMain->BackColor = System::Drawing::SystemColors::Control;
			this->panelMain->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->panelMain->Location = System::Drawing::Point(45, 30);
			this->panelMain->Name = L"panelMain";
			this->panelMain->Size = System::Drawing::Size(1155, 720);
			this->panelMain->TabIndex = 3;
			// 
			// main
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 17);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1200, 750);
			this->Controls->Add(this->panelMenuBar);
			this->Controls->Add(this->panelMain);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"main";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L" ";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->panel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnShowMenuBar))->EndInit();
			this->panelMenuBar->ResumeLayout(false);
			this->panelMenuBar->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnHideMenuBar))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

private: System::Void btnShowMenuBar_Click(System::Object^ sender, System::EventArgs^ e) {

	panelMenuBar->Show();
}
private: System::Void btnHideMenuBar_Click(System::Object^ sender, System::EventArgs^ e) {

	panelMenuBar->Hide();
}

private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {

	academicyear^ openAY = gcnew academicyear;
	openAY->TopLevel = false;
	panelMain->Controls->Add(openAY);
	openAY->Show();
	panelMenuBar->Hide();
}

private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {

	fees^ openFees = gcnew fees();
	openFees->TopLevel = false;
	panelMain->Controls->Add(openFees);
	openFees->Show();
	panelMenuBar->Hide();
}

private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {

	teacher^ openTeacher = gcnew teacher();
	openTeacher->TopLevel = false;
	panelMain->Controls->Add(openTeacher);
	openTeacher->Show();
	panelMenuBar->Hide();
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {

	section^ openSection = gcnew section();
	openSection->TopLevel = false;
	panelMain->Controls->Add(openSection);
	openSection->Show();
	panelMenuBar->Hide();
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {

	student^ openStudent = gcnew student();
	openStudent->TopLevel = false;
	panelMain->Controls->Add(openStudent);
	openStudent->Show();
	panelMenuBar->Hide();
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

	enrollment^ openEnrollment = gcnew enrollment();
	openEnrollment->TopLevel = false;
	panelMain->Controls->Add(openEnrollment);
	openEnrollment->Show();
	panelMenuBar->Hide();
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

	billing^ openBilling = gcnew billing();
	openBilling->TopLevel = false;
	panelMain->Controls->Add(openBilling);
	openBilling->Show();
	panelMenuBar->Hide();
}

private: System::Void btnMinimizeSystem_Click(System::Object^ sender, System::EventArgs^ e) {

	WindowState = FormWindowState::Minimized;
}
private: System::Void btnMaximizeSystem_Click(System::Object^ sender, System::EventArgs^ e) {

	if (WindowState == FormWindowState::Normal)
	{
		WindowState = FormWindowState::Maximized;
	}
	
	else
	{
		WindowState = FormWindowState::Normal;
	}
}
private: System::Void btnExitSystem_Click(System::Object^ sender, System::EventArgs^ e) {

	Application::Exit();
}
};

}
