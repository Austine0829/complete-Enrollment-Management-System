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
	/// Summary for teacher
	/// </summary>
	public ref class teacher : public System::Windows::Forms::Form
	{
	public:
		teacher(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			panelAddTeacher->Hide();
			panelUpdateTeacher->Hide();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~teacher()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabPage^ tabPage1;
	protected:
	private: System::Windows::Forms::Panel^ panelUpdateTeacher;
	private: System::Windows::Forms::TextBox^ txtUpdateTeacherEmail;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ txtUpdateTeacherAddress;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ txtUpdateTeacherContact;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ txtUpdateTeacherLast;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ txtUpdateTeacherMiddle;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::TextBox^ txtUpdateTeacherName;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Button^ btnCancelUpdateTeacher;
	private: System::Windows::Forms::Button^ btnUpdateTeacher;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Panel^ panelAddTeacher;
	private: System::Windows::Forms::TextBox^ txtTeacherEmail;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ txtTeacherAddress;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ txtTeacherContact;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ txtTeacherLast;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ txtTeacherMiddle;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ txtTeacherName;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ btnCancelAddTeacher;
	private: System::Windows::Forms::Button^ btnSaveAddTeacher;
	private: System::Windows::Forms::TextBox^ txtTeacherID;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::DataGridView^ dataGridTeacher;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::PictureBox^ btnDeleteTeacher;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ btnEditTeacher;
	private: System::Windows::Forms::PictureBox^ btnExitTeacher;
	private: System::Windows::Forms::Button^ btnAddTeacher;
	private: System::Windows::Forms::TabControl^ tabControl1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(teacher::typeid));
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->btnAddTeacher = (gcnew System::Windows::Forms::Button());
			this->btnExitTeacher = (gcnew System::Windows::Forms::PictureBox());
			this->btnEditTeacher = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnDeleteTeacher = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->dataGridTeacher = (gcnew System::Windows::Forms::DataGridView());
			this->panelAddTeacher = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtTeacherID = (gcnew System::Windows::Forms::TextBox());
			this->btnSaveAddTeacher = (gcnew System::Windows::Forms::Button());
			this->btnCancelAddTeacher = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txtTeacherName = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txtTeacherMiddle = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->txtTeacherLast = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->txtTeacherContact = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->txtTeacherAddress = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->txtTeacherEmail = (gcnew System::Windows::Forms::TextBox());
			this->panelUpdateTeacher = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->btnUpdateTeacher = (gcnew System::Windows::Forms::Button());
			this->btnCancelUpdateTeacher = (gcnew System::Windows::Forms::Button());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->txtUpdateTeacherName = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->txtUpdateTeacherMiddle = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->txtUpdateTeacherLast = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->txtUpdateTeacherContact = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->txtUpdateTeacherAddress = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->txtUpdateTeacherEmail = (gcnew System::Windows::Forms::TextBox());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1->SuspendLayout();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnExitTeacher))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnEditTeacher))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnDeleteTeacher))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridTeacher))->BeginInit();
			this->panelAddTeacher->SuspendLayout();
			this->panelUpdateTeacher->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->panelUpdateTeacher);
			this->tabPage1->Controls->Add(this->panelAddTeacher);
			this->tabPage1->Controls->Add(this->dataGridTeacher);
			this->tabPage1->Controls->Add(this->panel1);
			this->tabPage1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tabPage1->Location = System::Drawing::Point(4, 26);
			this->tabPage1->Margin = System::Windows::Forms::Padding(4);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(4);
			this->tabPage1->Size = System::Drawing::Size(987, 615);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Teacher";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// panel1
			// 
			this->panel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->btnDeleteTeacher);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->btnEditTeacher);
			this->panel1->Controls->Add(this->btnExitTeacher);
			this->panel1->Controls->Add(this->btnAddTeacher);
			this->panel1->Location = System::Drawing::Point(0, 1);
			this->panel1->Margin = System::Windows::Forms::Padding(4);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(984, 49);
			this->panel1->TabIndex = 0;
			// 
			// btnAddTeacher
			// 
			this->btnAddTeacher->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->btnAddTeacher->FlatAppearance->BorderSize = 0;
			this->btnAddTeacher->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnAddTeacher->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAddTeacher->Location = System::Drawing::Point(0, 6);
			this->btnAddTeacher->Margin = System::Windows::Forms::Padding(4);
			this->btnAddTeacher->Name = L"btnAddTeacher";
			this->btnAddTeacher->Size = System::Drawing::Size(137, 36);
			this->btnAddTeacher->TabIndex = 0;
			this->btnAddTeacher->Text = L"New Teacher";
			this->btnAddTeacher->UseVisualStyleBackColor = false;
			this->btnAddTeacher->Click += gcnew System::EventHandler(this, &teacher::btnAddTeacher_Click);
			// 
			// btnExitTeacher
			// 
			this->btnExitTeacher->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btnExitTeacher->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnExitTeacher.BackgroundImage")));
			this->btnExitTeacher->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btnExitTeacher->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnExitTeacher->Location = System::Drawing::Point(939, 0);
			this->btnExitTeacher->Margin = System::Windows::Forms::Padding(4);
			this->btnExitTeacher->Name = L"btnExitTeacher";
			this->btnExitTeacher->Size = System::Drawing::Size(47, 42);
			this->btnExitTeacher->TabIndex = 1;
			this->btnExitTeacher->TabStop = false;
			this->btnExitTeacher->Click += gcnew System::EventHandler(this, &teacher::btnExitTeacher_Click);
			// 
			// btnEditTeacher
			// 
			this->btnEditTeacher->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btnEditTeacher->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnEditTeacher.BackgroundImage")));
			this->btnEditTeacher->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->btnEditTeacher->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnEditTeacher->Location = System::Drawing::Point(706, 6);
			this->btnEditTeacher->Margin = System::Windows::Forms::Padding(4);
			this->btnEditTeacher->Name = L"btnEditTeacher";
			this->btnEditTeacher->Size = System::Drawing::Size(51, 39);
			this->btnEditTeacher->TabIndex = 2;
			this->btnEditTeacher->TabStop = false;
			this->btnEditTeacher->Click += gcnew System::EventHandler(this, &teacher::btnEditTeacher_Click);
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
			// btnDeleteTeacher
			// 
			this->btnDeleteTeacher->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btnDeleteTeacher->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnDeleteTeacher.BackgroundImage")));
			this->btnDeleteTeacher->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->btnDeleteTeacher->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnDeleteTeacher->Location = System::Drawing::Point(809, 6);
			this->btnDeleteTeacher->Margin = System::Windows::Forms::Padding(4);
			this->btnDeleteTeacher->Name = L"btnDeleteTeacher";
			this->btnDeleteTeacher->Size = System::Drawing::Size(51, 39);
			this->btnDeleteTeacher->TabIndex = 4;
			this->btnDeleteTeacher->TabStop = false;
			this->btnDeleteTeacher->Click += gcnew System::EventHandler(this, &teacher::btnDeleteTeacher_Click);
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
			// dataGridTeacher
			// 
			this->dataGridTeacher->AllowUserToAddRows = false;
			this->dataGridTeacher->AllowUserToDeleteRows = false;
			this->dataGridTeacher->AllowUserToResizeColumns = false;
			this->dataGridTeacher->AllowUserToResizeRows = false;
			this->dataGridTeacher->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGridTeacher->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridTeacher->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::DisplayedCells;
			this->dataGridTeacher->BackgroundColor = System::Drawing::SystemColors::Control;
			this->dataGridTeacher->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			this->dataGridTeacher->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridTeacher->Location = System::Drawing::Point(0, 50);
			this->dataGridTeacher->Margin = System::Windows::Forms::Padding(4);
			this->dataGridTeacher->MultiSelect = false;
			this->dataGridTeacher->Name = L"dataGridTeacher";
			this->dataGridTeacher->ReadOnly = true;
			this->dataGridTeacher->RowHeadersVisible = false;
			this->dataGridTeacher->RowHeadersWidth = 51;
			this->dataGridTeacher->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridTeacher->Size = System::Drawing::Size(984, 562);
			this->dataGridTeacher->TabIndex = 1;
			// 
			// panelAddTeacher
			// 
			this->panelAddTeacher->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->panelAddTeacher->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panelAddTeacher->Controls->Add(this->txtTeacherEmail);
			this->panelAddTeacher->Controls->Add(this->label9);
			this->panelAddTeacher->Controls->Add(this->txtTeacherAddress);
			this->panelAddTeacher->Controls->Add(this->label8);
			this->panelAddTeacher->Controls->Add(this->txtTeacherContact);
			this->panelAddTeacher->Controls->Add(this->label7);
			this->panelAddTeacher->Controls->Add(this->txtTeacherLast);
			this->panelAddTeacher->Controls->Add(this->label6);
			this->panelAddTeacher->Controls->Add(this->txtTeacherMiddle);
			this->panelAddTeacher->Controls->Add(this->label5);
			this->panelAddTeacher->Controls->Add(this->txtTeacherName);
			this->panelAddTeacher->Controls->Add(this->label4);
			this->panelAddTeacher->Controls->Add(this->btnCancelAddTeacher);
			this->panelAddTeacher->Controls->Add(this->btnSaveAddTeacher);
			this->panelAddTeacher->Controls->Add(this->txtTeacherID);
			this->panelAddTeacher->Controls->Add(this->label3);
			this->panelAddTeacher->Controls->Add(this->panel3);
			this->panelAddTeacher->Location = System::Drawing::Point(7, 57);
			this->panelAddTeacher->Name = L"panelAddTeacher";
			this->panelAddTeacher->Size = System::Drawing::Size(318, 433);
			this->panelAddTeacher->TabIndex = 2;
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
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(4, 37);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(84, 16);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Teacher ID";
			// 
			// txtTeacherID
			// 
			this->txtTeacherID->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtTeacherID->Location = System::Drawing::Point(7, 57);
			this->txtTeacherID->Name = L"txtTeacherID";
			this->txtTeacherID->Size = System::Drawing::Size(295, 23);
			this->txtTeacherID->TabIndex = 3;
			// 
			// btnSaveAddTeacher
			// 
			this->btnSaveAddTeacher->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->btnSaveAddTeacher->FlatAppearance->BorderSize = 0;
			this->btnSaveAddTeacher->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSaveAddTeacher->Location = System::Drawing::Point(170, 386);
			this->btnSaveAddTeacher->Name = L"btnSaveAddTeacher";
			this->btnSaveAddTeacher->Size = System::Drawing::Size(55, 30);
			this->btnSaveAddTeacher->TabIndex = 4;
			this->btnSaveAddTeacher->Text = L"Save";
			this->btnSaveAddTeacher->UseVisualStyleBackColor = false;
			this->btnSaveAddTeacher->Click += gcnew System::EventHandler(this, &teacher::btnSaveAddTeacher_Click);
			// 
			// btnCancelAddTeacher
			// 
			this->btnCancelAddTeacher->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->btnCancelAddTeacher->FlatAppearance->BorderSize = 0;
			this->btnCancelAddTeacher->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnCancelAddTeacher->Location = System::Drawing::Point(231, 386);
			this->btnCancelAddTeacher->Name = L"btnCancelAddTeacher";
			this->btnCancelAddTeacher->Size = System::Drawing::Size(71, 30);
			this->btnCancelAddTeacher->TabIndex = 5;
			this->btnCancelAddTeacher->Text = L"Cancel";
			this->btnCancelAddTeacher->UseVisualStyleBackColor = false;
			this->btnCancelAddTeacher->Click += gcnew System::EventHandler(this, &teacher::btnCancelAddTeacher_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(4, 88);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(82, 16);
			this->label4->TabIndex = 6;
			this->label4->Text = L"First Name";
			// 
			// txtTeacherName
			// 
			this->txtTeacherName->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtTeacherName->Location = System::Drawing::Point(7, 107);
			this->txtTeacherName->Name = L"txtTeacherName";
			this->txtTeacherName->Size = System::Drawing::Size(295, 23);
			this->txtTeacherName->TabIndex = 7;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(4, 138);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(99, 16);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Middle Name";
			// 
			// txtTeacherMiddle
			// 
			this->txtTeacherMiddle->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtTeacherMiddle->Location = System::Drawing::Point(7, 157);
			this->txtTeacherMiddle->Name = L"txtTeacherMiddle";
			this->txtTeacherMiddle->Size = System::Drawing::Size(295, 23);
			this->txtTeacherMiddle->TabIndex = 9;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(4, 188);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(81, 16);
			this->label6->TabIndex = 10;
			this->label6->Text = L"Last Name";
			// 
			// txtTeacherLast
			// 
			this->txtTeacherLast->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtTeacherLast->Location = System::Drawing::Point(7, 207);
			this->txtTeacherLast->Name = L"txtTeacherLast";
			this->txtTeacherLast->Size = System::Drawing::Size(295, 23);
			this->txtTeacherLast->TabIndex = 11;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(4, 238);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(117, 16);
			this->label7->TabIndex = 12;
			this->label7->Text = L"Contact Number";
			// 
			// txtTeacherContact
			// 
			this->txtTeacherContact->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtTeacherContact->Location = System::Drawing::Point(7, 257);
			this->txtTeacherContact->Name = L"txtTeacherContact";
			this->txtTeacherContact->Size = System::Drawing::Size(295, 23);
			this->txtTeacherContact->TabIndex = 13;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(4, 288);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(65, 16);
			this->label8->TabIndex = 14;
			this->label8->Text = L"Address";
			// 
			// txtTeacherAddress
			// 
			this->txtTeacherAddress->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtTeacherAddress->Location = System::Drawing::Point(7, 307);
			this->txtTeacherAddress->Name = L"txtTeacherAddress";
			this->txtTeacherAddress->Size = System::Drawing::Size(295, 23);
			this->txtTeacherAddress->TabIndex = 15;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(4, 338);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(108, 16);
			this->label9->TabIndex = 16;
			this->label9->Text = L"Email Address";
			// 
			// txtTeacherEmail
			// 
			this->txtTeacherEmail->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtTeacherEmail->Location = System::Drawing::Point(7, 357);
			this->txtTeacherEmail->Name = L"txtTeacherEmail";
			this->txtTeacherEmail->Size = System::Drawing::Size(295, 23);
			this->txtTeacherEmail->TabIndex = 17;
			// 
			// panelUpdateTeacher
			// 
			this->panelUpdateTeacher->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->panelUpdateTeacher->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panelUpdateTeacher->Controls->Add(this->txtUpdateTeacherEmail);
			this->panelUpdateTeacher->Controls->Add(this->label10);
			this->panelUpdateTeacher->Controls->Add(this->txtUpdateTeacherAddress);
			this->panelUpdateTeacher->Controls->Add(this->label11);
			this->panelUpdateTeacher->Controls->Add(this->txtUpdateTeacherContact);
			this->panelUpdateTeacher->Controls->Add(this->label12);
			this->panelUpdateTeacher->Controls->Add(this->txtUpdateTeacherLast);
			this->panelUpdateTeacher->Controls->Add(this->label13);
			this->panelUpdateTeacher->Controls->Add(this->txtUpdateTeacherMiddle);
			this->panelUpdateTeacher->Controls->Add(this->label14);
			this->panelUpdateTeacher->Controls->Add(this->txtUpdateTeacherName);
			this->panelUpdateTeacher->Controls->Add(this->label15);
			this->panelUpdateTeacher->Controls->Add(this->btnCancelUpdateTeacher);
			this->panelUpdateTeacher->Controls->Add(this->btnUpdateTeacher);
			this->panelUpdateTeacher->Controls->Add(this->panel4);
			this->panelUpdateTeacher->Location = System::Drawing::Point(331, 58);
			this->panelUpdateTeacher->Name = L"panelUpdateTeacher";
			this->panelUpdateTeacher->Size = System::Drawing::Size(318, 383);
			this->panelUpdateTeacher->TabIndex = 3;
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
			// btnUpdateTeacher
			// 
			this->btnUpdateTeacher->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->btnUpdateTeacher->FlatAppearance->BorderSize = 0;
			this->btnUpdateTeacher->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnUpdateTeacher->Location = System::Drawing::Point(153, 334);
			this->btnUpdateTeacher->Name = L"btnUpdateTeacher";
			this->btnUpdateTeacher->Size = System::Drawing::Size(71, 30);
			this->btnUpdateTeacher->TabIndex = 4;
			this->btnUpdateTeacher->Text = L"Update";
			this->btnUpdateTeacher->UseVisualStyleBackColor = false;
			this->btnUpdateTeacher->Click += gcnew System::EventHandler(this, &teacher::btnUpdateTeacher_Click);
			// 
			// btnCancelUpdateTeacher
			// 
			this->btnCancelUpdateTeacher->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->btnCancelUpdateTeacher->FlatAppearance->BorderSize = 0;
			this->btnCancelUpdateTeacher->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnCancelUpdateTeacher->Location = System::Drawing::Point(230, 334);
			this->btnCancelUpdateTeacher->Name = L"btnCancelUpdateTeacher";
			this->btnCancelUpdateTeacher->Size = System::Drawing::Size(71, 30);
			this->btnCancelUpdateTeacher->TabIndex = 5;
			this->btnCancelUpdateTeacher->Text = L"Cancel";
			this->btnCancelUpdateTeacher->UseVisualStyleBackColor = false;
			this->btnCancelUpdateTeacher->Click += gcnew System::EventHandler(this, &teacher::btnCancelUpdateTeacher_Click);
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(3, 36);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(82, 16);
			this->label15->TabIndex = 6;
			this->label15->Text = L"First Name";
			// 
			// txtUpdateTeacherName
			// 
			this->txtUpdateTeacherName->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtUpdateTeacherName->Location = System::Drawing::Point(6, 55);
			this->txtUpdateTeacherName->Name = L"txtUpdateTeacherName";
			this->txtUpdateTeacherName->Size = System::Drawing::Size(295, 23);
			this->txtUpdateTeacherName->TabIndex = 7;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(3, 86);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(99, 16);
			this->label14->TabIndex = 8;
			this->label14->Text = L"Middle Name";
			// 
			// txtUpdateTeacherMiddle
			// 
			this->txtUpdateTeacherMiddle->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtUpdateTeacherMiddle->Location = System::Drawing::Point(6, 105);
			this->txtUpdateTeacherMiddle->Name = L"txtUpdateTeacherMiddle";
			this->txtUpdateTeacherMiddle->Size = System::Drawing::Size(295, 23);
			this->txtUpdateTeacherMiddle->TabIndex = 9;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(3, 136);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(81, 16);
			this->label13->TabIndex = 10;
			this->label13->Text = L"Last Name";
			// 
			// txtUpdateTeacherLast
			// 
			this->txtUpdateTeacherLast->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtUpdateTeacherLast->Location = System::Drawing::Point(6, 155);
			this->txtUpdateTeacherLast->Name = L"txtUpdateTeacherLast";
			this->txtUpdateTeacherLast->Size = System::Drawing::Size(295, 23);
			this->txtUpdateTeacherLast->TabIndex = 11;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(3, 186);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(117, 16);
			this->label12->TabIndex = 12;
			this->label12->Text = L"Contact Number";
			// 
			// txtUpdateTeacherContact
			// 
			this->txtUpdateTeacherContact->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtUpdateTeacherContact->Location = System::Drawing::Point(6, 205);
			this->txtUpdateTeacherContact->Name = L"txtUpdateTeacherContact";
			this->txtUpdateTeacherContact->Size = System::Drawing::Size(295, 23);
			this->txtUpdateTeacherContact->TabIndex = 13;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(3, 236);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(65, 16);
			this->label11->TabIndex = 14;
			this->label11->Text = L"Address";
			// 
			// txtUpdateTeacherAddress
			// 
			this->txtUpdateTeacherAddress->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtUpdateTeacherAddress->Location = System::Drawing::Point(6, 255);
			this->txtUpdateTeacherAddress->Name = L"txtUpdateTeacherAddress";
			this->txtUpdateTeacherAddress->Size = System::Drawing::Size(295, 23);
			this->txtUpdateTeacherAddress->TabIndex = 15;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(3, 286);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(108, 16);
			this->label10->TabIndex = 16;
			this->label10->Text = L"Email Address";
			// 
			// txtUpdateTeacherEmail
			// 
			this->txtUpdateTeacherEmail->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtUpdateTeacherEmail->Location = System::Drawing::Point(6, 305);
			this->txtUpdateTeacherEmail->Name = L"txtUpdateTeacherEmail";
			this->txtUpdateTeacherEmail->Size = System::Drawing::Size(295, 23);
			this->txtUpdateTeacherEmail->TabIndex = 17;
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
			this->tabControl1->Size = System::Drawing::Size(995, 645);
			this->tabControl1->TabIndex = 2;
			// 
			// teacher
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1000, 650);
			this->Controls->Add(this->tabControl1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"teacher";
			this->Text = L"teacher";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &teacher::teacher_Load);
			this->tabPage1->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnExitTeacher))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnEditTeacher))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnDeleteTeacher))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridTeacher))->EndInit();
			this->panelAddTeacher->ResumeLayout(false);
			this->panelAddTeacher->PerformLayout();
			this->panelUpdateTeacher->ResumeLayout(false);
			this->panelUpdateTeacher->PerformLayout();
			this->tabControl1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion

String^ connString = "Server = localhost; Port = 3306; Database = enrollment_db; UID = root; Password = root";
MySqlConnection^ conn = gcnew MySqlConnection(connString);

void populateGridTeacher() {

	try
	{
		conn->Open();

		MySqlDataAdapter^ adapterTeacher = gcnew MySqlDataAdapter("SELECT * FROM tblteacher", conn);
		DataTable^ tableTeacher = gcnew DataTable();

		adapterTeacher->Fill(tableTeacher);

		dataGridTeacher->DataSource = tableTeacher;

		conn->Close();
	}

	catch (Exception^ e)
	{
		(void) e;
	}
}

private: System::Void teacher_Load(System::Object^ sender, System::EventArgs^ e) {

	populateGridTeacher();
}

private: System::Void btnAddTeacher_Click(System::Object^ sender, System::EventArgs^ e) {

	panelAddTeacher->Show();
}
private: System::Void btnCancelAddTeacher_Click(System::Object^ sender, System::EventArgs^ e) {

	panelAddTeacher->Hide();
}
private: System::Void btnSaveAddTeacher_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ teacherID = txtTeacherID->Text;
	String^ teacherName = txtTeacherName->Text;
	String^ teacherMiddle = txtTeacherMiddle->Text;
	String^ teacherLast = txtTeacherLast->Text;
	String^ teacherContact = txtTeacherContact->Text;
	String^ teacherAddress = txtTeacherAddress->Text;
	String^ teacherEmail = txtTeacherEmail->Text;

	try
	{
		conn->Open();

		String^ commStringTeacher = "INSERT INTO tblteacher(teacher_id, first_name, middle_name, last_name, contact, address, email) VALUES(@teacher_id, @first_name, @middle_name, @last_name, @contact, @address, @email)";
		MySqlCommand^ commTeacher = gcnew MySqlCommand(commStringTeacher, conn);

		commTeacher->Parameters->AddWithValue("@teacher_id", teacherID);
		commTeacher->Parameters->AddWithValue("@first_name", teacherName);
		commTeacher->Parameters->AddWithValue("@middle_name", teacherMiddle);
		commTeacher->Parameters->AddWithValue("@last_name", teacherLast);
		commTeacher->Parameters->AddWithValue("@contact", teacherContact);
		commTeacher->Parameters->AddWithValue("@address", teacherAddress);
		commTeacher->Parameters->AddWithValue("@email", teacherEmail);

		commTeacher->ExecuteNonQuery();

		MessageBox::Show("New Teacher Has Been Added", "Enrollment Management System", MessageBoxButtons::OK);

		conn->Close();

		txtTeacherID->Clear();
		txtTeacherName->Clear();
		txtTeacherMiddle->Clear();
		txtTeacherLast->Clear();
		txtTeacherContact->Clear();
		txtTeacherAddress->Clear();
		txtTeacherEmail->Clear();

		populateGridTeacher();
	}

	catch (Exception^ e)
	{
		(void) e;
		MessageBox::Show("Error Has Occured While Adding New Teacher", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}

private: System::Void btnEditTeacher_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ currentTeacherID = dataGridTeacher->Rows[dataGridTeacher->CurrentCell->RowIndex]->Cells[0]->Value->ToString();

	try
	{
		conn->Open();

		MySqlDataAdapter^ adapterUpdateTeacher = gcnew MySqlDataAdapter("SELECT * FROM tblteacher WHERE teacher_id = " + currentTeacherID, conn);
		DataTable^ tableUpdateTeacher = gcnew DataTable();

		adapterUpdateTeacher->Fill(tableUpdateTeacher);

		txtUpdateTeacherName->Text = tableUpdateTeacher->Rows[0]->ItemArray[1]->ToString();
		txtUpdateTeacherMiddle->Text = tableUpdateTeacher->Rows[0]->ItemArray[2]->ToString();
		txtUpdateTeacherLast->Text = tableUpdateTeacher->Rows[0]->ItemArray[3]->ToString();
		txtUpdateTeacherContact->Text = tableUpdateTeacher->Rows[0]->ItemArray[4]->ToString();
		txtUpdateTeacherAddress->Text = tableUpdateTeacher->Rows[0]->ItemArray[5]->ToString();
		txtUpdateTeacherEmail->Text = tableUpdateTeacher->Rows[0]->ItemArray[6]->ToString();

		conn->Close();

		panelUpdateTeacher->Show();
	}

	catch (Exception^ e)
	{
		(void) e;
	}
}
private: System::Void btnCancelUpdateTeacher_Click(System::Object^ sender, System::EventArgs^ e) {

	panelUpdateTeacher->Hide();
}
private: System::Void btnUpdateTeacher_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ currentTeacherID = dataGridTeacher->Rows[dataGridTeacher->CurrentCell->RowIndex]->Cells[0]->Value->ToString();

	String^ UpdateteacherName = txtUpdateTeacherName->Text;
	String^ UpdateteacherMiddle = txtUpdateTeacherMiddle->Text;
	String^ UpdateteacherLast = txtUpdateTeacherLast->Text;
	String^ UpdateteacherContact = txtUpdateTeacherContact->Text;
	String^ UpdateteacherAddress = txtUpdateTeacherAddress->Text;
	String^ UpdateteacherEmail = txtUpdateTeacherEmail->Text;

	if (MessageBox::Show("Are You Sure You Want To Update Teacher ID '"+ currentTeacherID +"'?", "Question", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == Windows::Forms::DialogResult::Yes)
	{

		try
		{
			conn->Open();

			MySqlCommand^ commUpdateTeacher = gcnew MySqlCommand("UPDATE tblteacher SET first_name = @first_name, middle_name = @middle_name, last_name = @last_name, contact = @contact, address = @address, email = @email WHERE teacher_id = " + currentTeacherID, conn);

			commUpdateTeacher->Parameters->AddWithValue("@first_name", UpdateteacherName);
			commUpdateTeacher->Parameters->AddWithValue("@middle_name", UpdateteacherMiddle);
			commUpdateTeacher->Parameters->AddWithValue("@last_name", UpdateteacherLast);
			commUpdateTeacher->Parameters->AddWithValue("@contact", UpdateteacherContact);
			commUpdateTeacher->Parameters->AddWithValue("@address", UpdateteacherAddress);
			commUpdateTeacher->Parameters->AddWithValue("@email", UpdateteacherEmail);

			commUpdateTeacher->ExecuteNonQuery();

			MessageBox::Show("Teacher ID '" + currentTeacherID + "' Has Been Updated", "Enrollment Management System", MessageBoxButtons::OK);

			conn->Close();

			panelUpdateTeacher->Hide();

			populateGridTeacher();
		}

		catch (Exception^ e)
		{
			(void)e;
			MessageBox::Show("Error Has Occured While Update Teacher ID '" + currentTeacherID + "'", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
}
private: System::Void btnDeleteTeacher_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ currentTeacherID = dataGridTeacher->Rows[dataGridTeacher->CurrentCell->RowIndex]->Cells[0]->Value->ToString();

	if (MessageBox::Show("Are You Sure You Want To Delete Teacher ID '"+ currentTeacherID +"'?", "Question", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == Windows::Forms::DialogResult::Yes)
	{
		try
		{
			conn->Open();

			MySqlCommand^ commDeleteTeacher = gcnew MySqlCommand("DELETE FROM tblteacher WHERE teacher_id = " + currentTeacherID, conn);

			commDeleteTeacher->ExecuteNonQuery();

			MessageBox::Show("Teacher ID '" + currentTeacherID + "' Has Been Deleted", "Enrollment Management System", MessageBoxButtons::OK);

			conn->Close();

			populateGridTeacher();
		}
		catch (Exception^ e)
		{
			(void)e;
			MessageBox::Show("Error Has Occured While Deleting Teacher ID '" + currentTeacherID + "'", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
}
private: System::Void btnExitTeacher_Click(System::Object^ sender, System::EventArgs^ e) {

	teacher::Close();
}
};
}
