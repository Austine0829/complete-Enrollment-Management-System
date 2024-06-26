#pragma once

namespace ProjectSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for section
	/// </summary>
	public ref class section : public System::Windows::Forms::Form
	{
	public:
		section(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//

			panelAddSection->Hide();
			panelUpdateSection->Hide();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~section()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::Panel^ panelAddSection;

	private: System::Windows::Forms::TextBox^ txtSectionTeacher;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ txtGrade;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ btnCancelAddSection;

	private: System::Windows::Forms::Button^ btnSaveAddSection;

	private: System::Windows::Forms::TextBox^ txtSection;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::DataGridView^ dataGridSection;

	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::PictureBox^ btnDeleteSection;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ btnEditSection;
	private: System::Windows::Forms::PictureBox^ btnExitSection;


	private: System::Windows::Forms::Button^ btnAddSection;
	private: System::Windows::Forms::Panel^ panelUpdateSection;
	private: System::Windows::Forms::TextBox^ txtUpdateSectionTeacher;




	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ txtUpdateGrade;


	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ btnCancelUpdateSection;

	private: System::Windows::Forms::Button^ btnUpdateSection;

	private: System::Windows::Forms::TextBox^ txtUpdateSection;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Panel^ panel4;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(section::typeid));
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->panelUpdateSection = (gcnew System::Windows::Forms::Panel());
			this->txtUpdateSectionTeacher = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->txtUpdateGrade = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->btnCancelUpdateSection = (gcnew System::Windows::Forms::Button());
			this->btnUpdateSection = (gcnew System::Windows::Forms::Button());
			this->txtUpdateSection = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panelAddSection = (gcnew System::Windows::Forms::Panel());
			this->txtSectionTeacher = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txtGrade = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->btnCancelAddSection = (gcnew System::Windows::Forms::Button());
			this->btnSaveAddSection = (gcnew System::Windows::Forms::Button());
			this->txtSection = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->dataGridSection = (gcnew System::Windows::Forms::DataGridView());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->btnDeleteSection = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnEditSection = (gcnew System::Windows::Forms::PictureBox());
			this->btnExitSection = (gcnew System::Windows::Forms::PictureBox());
			this->btnAddSection = (gcnew System::Windows::Forms::Button());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->panelUpdateSection->SuspendLayout();
			this->panelAddSection->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridSection))->BeginInit();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnDeleteSection))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnEditSection))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnExitSection))->BeginInit();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tabControl1->Location = System::Drawing::Point(3, 3);
			this->tabControl1->Margin = System::Windows::Forms::Padding(4);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(995, 545);
			this->tabControl1->TabIndex = 3;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->panelUpdateSection);
			this->tabPage1->Controls->Add(this->panelAddSection);
			this->tabPage1->Controls->Add(this->dataGridSection);
			this->tabPage1->Controls->Add(this->panel1);
			this->tabPage1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tabPage1->Location = System::Drawing::Point(4, 26);
			this->tabPage1->Margin = System::Windows::Forms::Padding(4);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(4);
			this->tabPage1->Size = System::Drawing::Size(987, 515);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Section";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// panelUpdateSection
			// 
			this->panelUpdateSection->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->panelUpdateSection->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panelUpdateSection->Controls->Add(this->txtUpdateSectionTeacher);
			this->panelUpdateSection->Controls->Add(this->label6);
			this->panelUpdateSection->Controls->Add(this->txtUpdateGrade);
			this->panelUpdateSection->Controls->Add(this->label7);
			this->panelUpdateSection->Controls->Add(this->btnCancelUpdateSection);
			this->panelUpdateSection->Controls->Add(this->btnUpdateSection);
			this->panelUpdateSection->Controls->Add(this->txtUpdateSection);
			this->panelUpdateSection->Controls->Add(this->label8);
			this->panelUpdateSection->Controls->Add(this->panel4);
			this->panelUpdateSection->Location = System::Drawing::Point(331, 57);
			this->panelUpdateSection->Name = L"panelUpdateSection";
			this->panelUpdateSection->Size = System::Drawing::Size(318, 233);
			this->panelUpdateSection->TabIndex = 3;
			// 
			// txtUpdateSectionTeacher
			// 
			this->txtUpdateSectionTeacher->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtUpdateSectionTeacher->Location = System::Drawing::Point(7, 157);
			this->txtUpdateSectionTeacher->Name = L"txtUpdateSectionTeacher";
			this->txtUpdateSectionTeacher->Size = System::Drawing::Size(295, 23);
			this->txtUpdateSectionTeacher->TabIndex = 9;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(4, 138);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(84, 16);
			this->label6->TabIndex = 8;
			this->label6->Text = L"Teacher ID";
			// 
			// txtUpdateGrade
			// 
			this->txtUpdateGrade->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtUpdateGrade->Location = System::Drawing::Point(7, 107);
			this->txtUpdateGrade->Name = L"txtUpdateGrade";
			this->txtUpdateGrade->Size = System::Drawing::Size(295, 23);
			this->txtUpdateGrade->TabIndex = 7;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(4, 88);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(50, 16);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Grade";
			// 
			// btnCancelUpdateSection
			// 
			this->btnCancelUpdateSection->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->btnCancelUpdateSection->FlatAppearance->BorderSize = 0;
			this->btnCancelUpdateSection->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnCancelUpdateSection->Location = System::Drawing::Point(231, 186);
			this->btnCancelUpdateSection->Name = L"btnCancelUpdateSection";
			this->btnCancelUpdateSection->Size = System::Drawing::Size(71, 30);
			this->btnCancelUpdateSection->TabIndex = 5;
			this->btnCancelUpdateSection->Text = L"Cancel";
			this->btnCancelUpdateSection->UseVisualStyleBackColor = false;
			this->btnCancelUpdateSection->Click += gcnew System::EventHandler(this, &section::btnCancelUpdateSection_Click);
			// 
			// btnUpdateSection
			// 
			this->btnUpdateSection->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->btnUpdateSection->FlatAppearance->BorderSize = 0;
			this->btnUpdateSection->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnUpdateSection->Location = System::Drawing::Point(157, 186);
			this->btnUpdateSection->Name = L"btnUpdateSection";
			this->btnUpdateSection->Size = System::Drawing::Size(68, 30);
			this->btnUpdateSection->TabIndex = 4;
			this->btnUpdateSection->Text = L"Update";
			this->btnUpdateSection->UseVisualStyleBackColor = false;
			this->btnUpdateSection->Click += gcnew System::EventHandler(this, &section::btnUpdateSection_Click);
			// 
			// txtUpdateSection
			// 
			this->txtUpdateSection->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtUpdateSection->Location = System::Drawing::Point(7, 57);
			this->txtUpdateSection->Name = L"txtUpdateSection";
			this->txtUpdateSection->Size = System::Drawing::Size(295, 23);
			this->txtUpdateSection->TabIndex = 3;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(4, 37);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(59, 16);
			this->label8->TabIndex = 2;
			this->label8->Text = L"Section";
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::Gray;
			this->panel4->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel4->Location = System::Drawing::Point(0, 0);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(316, 30);
			this->panel4->TabIndex = 1;
			// 
			// panelAddSection
			// 
			this->panelAddSection->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->panelAddSection->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panelAddSection->Controls->Add(this->txtSectionTeacher);
			this->panelAddSection->Controls->Add(this->label5);
			this->panelAddSection->Controls->Add(this->txtGrade);
			this->panelAddSection->Controls->Add(this->label4);
			this->panelAddSection->Controls->Add(this->btnCancelAddSection);
			this->panelAddSection->Controls->Add(this->btnSaveAddSection);
			this->panelAddSection->Controls->Add(this->txtSection);
			this->panelAddSection->Controls->Add(this->label3);
			this->panelAddSection->Controls->Add(this->panel3);
			this->panelAddSection->Location = System::Drawing::Point(7, 57);
			this->panelAddSection->Name = L"panelAddSection";
			this->panelAddSection->Size = System::Drawing::Size(318, 233);
			this->panelAddSection->TabIndex = 2;
			// 
			// txtSectionTeacher
			// 
			this->txtSectionTeacher->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtSectionTeacher->Location = System::Drawing::Point(7, 157);
			this->txtSectionTeacher->Name = L"txtSectionTeacher";
			this->txtSectionTeacher->Size = System::Drawing::Size(295, 23);
			this->txtSectionTeacher->TabIndex = 9;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(4, 138);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(84, 16);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Teacher ID";
			// 
			// txtGrade
			// 
			this->txtGrade->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtGrade->Location = System::Drawing::Point(7, 107);
			this->txtGrade->Name = L"txtGrade";
			this->txtGrade->Size = System::Drawing::Size(295, 23);
			this->txtGrade->TabIndex = 7;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(4, 88);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(50, 16);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Grade";
			// 
			// btnCancelAddSection
			// 
			this->btnCancelAddSection->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->btnCancelAddSection->FlatAppearance->BorderSize = 0;
			this->btnCancelAddSection->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnCancelAddSection->Location = System::Drawing::Point(231, 186);
			this->btnCancelAddSection->Name = L"btnCancelAddSection";
			this->btnCancelAddSection->Size = System::Drawing::Size(71, 30);
			this->btnCancelAddSection->TabIndex = 5;
			this->btnCancelAddSection->Text = L"Cancel";
			this->btnCancelAddSection->UseVisualStyleBackColor = false;
			this->btnCancelAddSection->Click += gcnew System::EventHandler(this, &section::btnCancelAddSection_Click);
			// 
			// btnSaveAddSection
			// 
			this->btnSaveAddSection->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->btnSaveAddSection->FlatAppearance->BorderSize = 0;
			this->btnSaveAddSection->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSaveAddSection->Location = System::Drawing::Point(170, 186);
			this->btnSaveAddSection->Name = L"btnSaveAddSection";
			this->btnSaveAddSection->Size = System::Drawing::Size(55, 30);
			this->btnSaveAddSection->TabIndex = 4;
			this->btnSaveAddSection->Text = L"Save";
			this->btnSaveAddSection->UseVisualStyleBackColor = false;
			this->btnSaveAddSection->Click += gcnew System::EventHandler(this, &section::btnSaveAddSection_Click);
			// 
			// txtSection
			// 
			this->txtSection->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtSection->Location = System::Drawing::Point(7, 57);
			this->txtSection->Name = L"txtSection";
			this->txtSection->Size = System::Drawing::Size(295, 23);
			this->txtSection->TabIndex = 3;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(4, 37);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(59, 16);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Section";
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::Gray;
			this->panel3->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel3->Location = System::Drawing::Point(0, 0);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(316, 30);
			this->panel3->TabIndex = 1;
			// 
			// dataGridSection
			// 
			this->dataGridSection->AllowUserToAddRows = false;
			this->dataGridSection->AllowUserToDeleteRows = false;
			this->dataGridSection->AllowUserToResizeColumns = false;
			this->dataGridSection->AllowUserToResizeRows = false;
			this->dataGridSection->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGridSection->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridSection->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::DisplayedCells;
			this->dataGridSection->BackgroundColor = System::Drawing::SystemColors::Control;
			this->dataGridSection->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			this->dataGridSection->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridSection->Location = System::Drawing::Point(0, 50);
			this->dataGridSection->Margin = System::Windows::Forms::Padding(4);
			this->dataGridSection->MultiSelect = false;
			this->dataGridSection->Name = L"dataGridSection";
			this->dataGridSection->ReadOnly = true;
			this->dataGridSection->RowHeadersVisible = false;
			this->dataGridSection->RowHeadersWidth = 51;
			this->dataGridSection->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridSection->Size = System::Drawing::Size(984, 462);
			this->dataGridSection->TabIndex = 1;
			// 
			// panel1
			// 
			this->panel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->btnDeleteSection);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->btnEditSection);
			this->panel1->Controls->Add(this->btnExitSection);
			this->panel1->Controls->Add(this->btnAddSection);
			this->panel1->Location = System::Drawing::Point(0, 1);
			this->panel1->Margin = System::Windows::Forms::Padding(4);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(984, 49);
			this->panel1->TabIndex = 0;
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(868, 17);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(55, 17);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Delete";
			// 
			// btnDeleteSection
			// 
			this->btnDeleteSection->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btnDeleteSection->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnDeleteSection.BackgroundImage")));
			this->btnDeleteSection->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->btnDeleteSection->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnDeleteSection->Location = System::Drawing::Point(809, 6);
			this->btnDeleteSection->Margin = System::Windows::Forms::Padding(4);
			this->btnDeleteSection->Name = L"btnDeleteSection";
			this->btnDeleteSection->Size = System::Drawing::Size(51, 39);
			this->btnDeleteSection->TabIndex = 4;
			this->btnDeleteSection->TabStop = false;
			this->btnDeleteSection->Click += gcnew System::EventHandler(this, &section::btnDeleteSection_Click);
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(765, 17);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(36, 17);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Edit";
			// 
			// btnEditSection
			// 
			this->btnEditSection->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btnEditSection->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnEditSection.BackgroundImage")));
			this->btnEditSection->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->btnEditSection->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnEditSection->Location = System::Drawing::Point(706, 6);
			this->btnEditSection->Margin = System::Windows::Forms::Padding(4);
			this->btnEditSection->Name = L"btnEditSection";
			this->btnEditSection->Size = System::Drawing::Size(51, 39);
			this->btnEditSection->TabIndex = 2;
			this->btnEditSection->TabStop = false;
			this->btnEditSection->Click += gcnew System::EventHandler(this, &section::btnEditSection_Click);
			// 
			// btnExitSection
			// 
			this->btnExitSection->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btnExitSection->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnExitSection.BackgroundImage")));
			this->btnExitSection->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btnExitSection->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnExitSection->Location = System::Drawing::Point(939, 0);
			this->btnExitSection->Margin = System::Windows::Forms::Padding(4);
			this->btnExitSection->Name = L"btnExitSection";
			this->btnExitSection->Size = System::Drawing::Size(47, 42);
			this->btnExitSection->TabIndex = 1;
			this->btnExitSection->TabStop = false;
			this->btnExitSection->Click += gcnew System::EventHandler(this, &section::btnExitSection_Click);
			// 
			// btnAddSection
			// 
			this->btnAddSection->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->btnAddSection->FlatAppearance->BorderSize = 0;
			this->btnAddSection->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnAddSection->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAddSection->Location = System::Drawing::Point(0, 6);
			this->btnAddSection->Margin = System::Windows::Forms::Padding(4);
			this->btnAddSection->Name = L"btnAddSection";
			this->btnAddSection->Size = System::Drawing::Size(137, 36);
			this->btnAddSection->TabIndex = 0;
			this->btnAddSection->Text = L"New Section";
			this->btnAddSection->UseVisualStyleBackColor = false;
			this->btnAddSection->Click += gcnew System::EventHandler(this, &section::btnAddSection_Click);
			// 
			// section
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1000, 550);
			this->Controls->Add(this->tabControl1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"section";
			this->Text = L"section";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &section::section_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->panelUpdateSection->ResumeLayout(false);
			this->panelUpdateSection->PerformLayout();
			this->panelAddSection->ResumeLayout(false);
			this->panelAddSection->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridSection))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnDeleteSection))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnEditSection))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnExitSection))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

String^ connString = "Server = localhost; Port = 3306; Database = enrollment_db; UID = root; Password = root";
MySqlConnection^ conn = gcnew MySqlConnection(connString);

void populateGridSection() {

	try
	{
		conn->Open();

		MySqlDataAdapter^ adapterSection = gcnew MySqlDataAdapter("SELECT * FROM vsection", conn);
		DataTable^ tableSection = gcnew DataTable();

		adapterSection->Fill(tableSection);

		dataGridSection->DataSource = tableSection;

		conn->Close();
	}

	catch (Exception^ e)
	{
		(void) e;
	}
}

private: System::Void section_Load(System::Object^ sender, System::EventArgs^ e) {

	populateGridSection();
}

private: System::Void btnAddSection_Click(System::Object^ sender, System::EventArgs^ e) {

	panelAddSection->Show();
}
private: System::Void btnCancelAddSection_Click(System::Object^ sender, System::EventArgs^ e) {

	panelAddSection->Hide();
}
private: System::Void btnSaveAddSection_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ section = txtSection->Text;
	String^ grade = txtGrade->Text;
	String^ adviserID = txtSectionTeacher->Text;

	try
	{
		conn->Open();

		String^ commStringSection = "INSERT INTO tblsection(section_name, grade, adviser_id) VALUES(@section_name, @grade, @adviser_id)";
		MySqlCommand^ commSection = gcnew MySqlCommand(commStringSection, conn);

		commSection->Parameters->AddWithValue("@section_name", section);
		commSection->Parameters->AddWithValue("@grade", grade);
		commSection->Parameters->AddWithValue("@adviser_id", adviserID);

		commSection->ExecuteNonQuery();

		MessageBox::Show("New Section Has Been Added", "Enrollment Management System", MessageBoxButtons::OK);

		conn->Close();

		txtSection->Clear();
		txtGrade->Clear();
		txtSectionTeacher->Clear();

		populateGridSection();
	}

	catch (Exception^ e)
	{
		(void) e;
		MessageBox::Show("Error Has Occured While Adding New Section", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}


private: System::Void btnEditSection_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ currentSectionID = dataGridSection->Rows[dataGridSection->CurrentCell->RowIndex]->Cells[0]->Value->ToString();

	try
	{
		conn->Open();

		MySqlDataAdapter^ adapterUpdateSection = gcnew MySqlDataAdapter("SELECT * FROM tblsection WHERE section_id = " + currentSectionID, conn);
		DataTable^ tableUpdateSection = gcnew DataTable();

		adapterUpdateSection->Fill(tableUpdateSection);

		txtUpdateSection->Text = tableUpdateSection->Rows[0]->ItemArray[1]->ToString();
		txtUpdateGrade->Text = tableUpdateSection->Rows[0]->ItemArray[2]->ToString();
		txtUpdateSectionTeacher->Text = tableUpdateSection->Rows[0]->ItemArray[3]->ToString();

		conn->Close();

		panelUpdateSection->Show();
	}

	catch (Exception^ e)
	{
		(void) e;
	}

	
}
private: System::Void btnCancelUpdateSection_Click(System::Object^ sender, System::EventArgs^ e) {

	panelUpdateSection->Hide();
}
private: System::Void btnUpdateSection_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ currentSectionID = dataGridSection->Rows[dataGridSection->CurrentCell->RowIndex]->Cells[0]->Value->ToString();

	String^ updateSection = txtUpdateSection->Text;
	String^ updateGrade = txtUpdateGrade->Text;
	String^ updateTeacherID = txtUpdateSectionTeacher->Text;

	if (MessageBox::Show("Are You Sure You Want To Update Section ID '"+ currentSectionID +"'?", "Question", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == Windows::Forms::DialogResult::Yes)
	{
		try
		{
			conn->Open();

			MySqlCommand^ commUpdateSection = gcnew MySqlCommand("UPDATE tblsection SET section_name = @section_name, grade = @grade, adviser_id = @adviser_id WHERE section_id = " + currentSectionID, conn);

			commUpdateSection->Parameters->AddWithValue("@section_name", updateSection);
			commUpdateSection->Parameters->AddWithValue("@grade", updateGrade);
			commUpdateSection->Parameters->AddWithValue("adviser_id", updateTeacherID);

			commUpdateSection->ExecuteNonQuery();

			MessageBox::Show("Section ID '" + currentSectionID + "' Has Been Updated", "Enrollment Management System", MessageBoxButtons::OK);

			conn->Close();

			txtUpdateSection->Clear();
			txtUpdateGrade->Clear();
			txtUpdateSectionTeacher->Clear();
			
			panelUpdateSection->Hide();

			populateGridSection();
		}

		catch (Exception^ e)
		{
			(void)e;
			MessageBox::Show("Error Has Occured While Updating A Section ID '" + currentSectionID + "'", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
}
private: System::Void btnDeleteSection_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ currentSectionID = dataGridSection->Rows[dataGridSection->CurrentCell->RowIndex]->Cells[0]->Value->ToString();

	if (MessageBox::Show("Are You Sure You Want To Delete Section ID '"+ currentSectionID +"'?", "Question", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == Windows::Forms::DialogResult::Yes)
	{
		try
		{
			conn->Open();

			MySqlCommand^ commDeleteSection = gcnew MySqlCommand("DELETE FROM tblsection WHERE section_id = " + currentSectionID, conn);

			commDeleteSection->ExecuteNonQuery();

			MessageBox::Show("Section ID '" + currentSectionID + "' Has Been Deleted", "Enrollment Management System");

			conn->Close();

			populateGridSection();
		}

		catch (Exception^ e)
		{
			(void)e;
			MessageBox::Show("Error Has Occured While Deleting Section ID '" + currentSectionID + "'", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
}
private: System::Void btnExitSection_Click(System::Object^ sender, System::EventArgs^ e) {

	section::Close();
}
};
}
