#pragma once

namespace ProjectSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for student
	/// </summary>
	public ref class student : public System::Windows::Forms::Form
	{
	public:
		student(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			panelStudent->Hide();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~student()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::Panel^ panelStudent;

	private: System::Windows::Forms::TextBox^ txtFatherName;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ txtStudentAge;

	private: System::Windows::Forms::TextBox^ txtStudentBirth;

	private: System::Windows::Forms::TextBox^ txtStudentLast;

	private: System::Windows::Forms::TextBox^ txtStudentName;
	private: System::Windows::Forms::TextBox^ txtStudentAddress;


	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ txtStudentMiddle;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ btnCancelAddStudent;

	private: System::Windows::Forms::Button^ btnSaveAddStudent;

	private: System::Windows::Forms::TextBox^ txtLrn;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::DataGridView^ dataGridStudent;

	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::PictureBox^ btnDeleteStudent;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ btnEditStudent;
	private: System::Windows::Forms::PictureBox^ btnExitStudent;


	private: System::Windows::Forms::Button^ btnAddStudent;
	private: System::Windows::Forms::Button^ btnUpdateStudent;


	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ txtMotherName;

	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::ComboBox^ cbStudentStatus;
	private: System::Windows::Forms::Label^ label12;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(student::typeid));
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->panelStudent = (gcnew System::Windows::Forms::Panel());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->cbStudentStatus = (gcnew System::Windows::Forms::ComboBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->btnUpdateStudent = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->txtMotherName = (gcnew System::Windows::Forms::TextBox());
			this->txtFatherName = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->txtStudentAge = (gcnew System::Windows::Forms::TextBox());
			this->txtStudentBirth = (gcnew System::Windows::Forms::TextBox());
			this->txtStudentLast = (gcnew System::Windows::Forms::TextBox());
			this->txtStudentName = (gcnew System::Windows::Forms::TextBox());
			this->txtStudentAddress = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txtStudentMiddle = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->btnCancelAddStudent = (gcnew System::Windows::Forms::Button());
			this->btnSaveAddStudent = (gcnew System::Windows::Forms::Button());
			this->txtLrn = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->dataGridStudent = (gcnew System::Windows::Forms::DataGridView());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->btnDeleteStudent = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnEditStudent = (gcnew System::Windows::Forms::PictureBox());
			this->btnExitStudent = (gcnew System::Windows::Forms::PictureBox());
			this->btnAddStudent = (gcnew System::Windows::Forms::Button());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->panelStudent->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridStudent))->BeginInit();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnDeleteStudent))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnEditStudent))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnExitStudent))->BeginInit();
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
			this->tabControl1->TabIndex = 4;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->panelStudent);
			this->tabPage1->Controls->Add(this->dataGridStudent);
			this->tabPage1->Controls->Add(this->panel1);
			this->tabPage1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tabPage1->Location = System::Drawing::Point(4, 26);
			this->tabPage1->Margin = System::Windows::Forms::Padding(4);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(4);
			this->tabPage1->Size = System::Drawing::Size(987, 515);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Student";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// panelStudent
			// 
			this->panelStudent->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->panelStudent->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panelStudent->Controls->Add(this->label12);
			this->panelStudent->Controls->Add(this->cbStudentStatus);
			this->panelStudent->Controls->Add(this->label11);
			this->panelStudent->Controls->Add(this->label10);
			this->panelStudent->Controls->Add(this->label9);
			this->panelStudent->Controls->Add(this->label8);
			this->panelStudent->Controls->Add(this->btnUpdateStudent);
			this->panelStudent->Controls->Add(this->label7);
			this->panelStudent->Controls->Add(this->txtMotherName);
			this->panelStudent->Controls->Add(this->txtFatherName);
			this->panelStudent->Controls->Add(this->label6);
			this->panelStudent->Controls->Add(this->txtStudentAge);
			this->panelStudent->Controls->Add(this->txtStudentBirth);
			this->panelStudent->Controls->Add(this->txtStudentLast);
			this->panelStudent->Controls->Add(this->txtStudentName);
			this->panelStudent->Controls->Add(this->txtStudentAddress);
			this->panelStudent->Controls->Add(this->label5);
			this->panelStudent->Controls->Add(this->txtStudentMiddle);
			this->panelStudent->Controls->Add(this->label4);
			this->panelStudent->Controls->Add(this->btnCancelAddStudent);
			this->panelStudent->Controls->Add(this->btnSaveAddStudent);
			this->panelStudent->Controls->Add(this->txtLrn);
			this->panelStudent->Controls->Add(this->label3);
			this->panelStudent->Controls->Add(this->panel3);
			this->panelStudent->Location = System::Drawing::Point(7, 57);
			this->panelStudent->Name = L"panelStudent";
			this->panelStudent->Size = System::Drawing::Size(625, 335);
			this->panelStudent->TabIndex = 2;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(312, 238);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(50, 16);
			this->label12->TabIndex = 24;
			this->label12->Text = L"Status";
			// 
			// cbStudentStatus
			// 
			this->cbStudentStatus->FormattingEnabled = true;
			this->cbStudentStatus->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Enrolled", L"Not Enrolled", L"Graduated" });
			this->cbStudentStatus->Location = System::Drawing::Point(315, 257);
			this->cbStudentStatus->Name = L"cbStudentStatus";
			this->cbStudentStatus->Size = System::Drawing::Size(295, 25);
			this->cbStudentStatus->TabIndex = 23;
			this->cbStudentStatus->Text = L"Enrolled";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(312, 188);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(96, 16);
			this->label11->TabIndex = 22;
			this->label11->Text = L"Father Name";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(312, 138);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(75, 16);
			this->label10->TabIndex = 21;
			this->label10->Text = L"Birth Date";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(312, 88);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(81, 16);
			this->label9->TabIndex = 20;
			this->label9->Text = L"Last Name";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(312, 38);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(82, 16);
			this->label8->TabIndex = 19;
			this->label8->Text = L"First Name";
			// 
			// btnUpdateStudent
			// 
			this->btnUpdateStudent->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->btnUpdateStudent->FlatAppearance->BorderSize = 0;
			this->btnUpdateStudent->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnUpdateStudent->Location = System::Drawing::Point(463, 288);
			this->btnUpdateStudent->Name = L"btnUpdateStudent";
			this->btnUpdateStudent->Size = System::Drawing::Size(70, 30);
			this->btnUpdateStudent->TabIndex = 18;
			this->btnUpdateStudent->Text = L"Update";
			this->btnUpdateStudent->UseVisualStyleBackColor = false;
			this->btnUpdateStudent->Click += gcnew System::EventHandler(this, &student::btnUpdateStudent_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(4, 238);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(99, 16);
			this->label7->TabIndex = 17;
			this->label7->Text = L"Mother Name";
			// 
			// txtMotherName
			// 
			this->txtMotherName->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtMotherName->Location = System::Drawing::Point(7, 257);
			this->txtMotherName->Name = L"txtMotherName";
			this->txtMotherName->Size = System::Drawing::Size(295, 23);
			this->txtMotherName->TabIndex = 16;
			// 
			// txtFatherName
			// 
			this->txtFatherName->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtFatherName->Location = System::Drawing::Point(315, 207);
			this->txtFatherName->Name = L"txtFatherName";
			this->txtFatherName->Size = System::Drawing::Size(295, 23);
			this->txtFatherName->TabIndex = 15;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(4, 188);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(39, 16);
			this->label6->TabIndex = 14;
			this->label6->Text = L"Age ";
			// 
			// txtStudentAge
			// 
			this->txtStudentAge->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtStudentAge->Location = System::Drawing::Point(7, 207);
			this->txtStudentAge->Name = L"txtStudentAge";
			this->txtStudentAge->Size = System::Drawing::Size(295, 23);
			this->txtStudentAge->TabIndex = 13;
			// 
			// txtStudentBirth
			// 
			this->txtStudentBirth->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtStudentBirth->Location = System::Drawing::Point(315, 157);
			this->txtStudentBirth->Name = L"txtStudentBirth";
			this->txtStudentBirth->Size = System::Drawing::Size(295, 23);
			this->txtStudentBirth->TabIndex = 12;
			// 
			// txtStudentLast
			// 
			this->txtStudentLast->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtStudentLast->Location = System::Drawing::Point(315, 107);
			this->txtStudentLast->Name = L"txtStudentLast";
			this->txtStudentLast->Size = System::Drawing::Size(295, 23);
			this->txtStudentLast->TabIndex = 11;
			// 
			// txtStudentName
			// 
			this->txtStudentName->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtStudentName->Location = System::Drawing::Point(315, 57);
			this->txtStudentName->Name = L"txtStudentName";
			this->txtStudentName->Size = System::Drawing::Size(295, 23);
			this->txtStudentName->TabIndex = 10;
			// 
			// txtStudentAddress
			// 
			this->txtStudentAddress->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtStudentAddress->Location = System::Drawing::Point(7, 157);
			this->txtStudentAddress->Name = L"txtStudentAddress";
			this->txtStudentAddress->Size = System::Drawing::Size(295, 23);
			this->txtStudentAddress->TabIndex = 9;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(4, 138);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(65, 16);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Address";
			// 
			// txtStudentMiddle
			// 
			this->txtStudentMiddle->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtStudentMiddle->Location = System::Drawing::Point(7, 107);
			this->txtStudentMiddle->Name = L"txtStudentMiddle";
			this->txtStudentMiddle->Size = System::Drawing::Size(295, 23);
			this->txtStudentMiddle->TabIndex = 7;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(4, 88);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(99, 16);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Middle Name";
			// 
			// btnCancelAddStudent
			// 
			this->btnCancelAddStudent->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->btnCancelAddStudent->FlatAppearance->BorderSize = 0;
			this->btnCancelAddStudent->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnCancelAddStudent->Location = System::Drawing::Point(539, 288);
			this->btnCancelAddStudent->Name = L"btnCancelAddStudent";
			this->btnCancelAddStudent->Size = System::Drawing::Size(71, 30);
			this->btnCancelAddStudent->TabIndex = 5;
			this->btnCancelAddStudent->Text = L"Cancel";
			this->btnCancelAddStudent->UseVisualStyleBackColor = false;
			this->btnCancelAddStudent->Click += gcnew System::EventHandler(this, &student::btnCancelAddStudent_Click);
			// 
			// btnSaveAddStudent
			// 
			this->btnSaveAddStudent->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->btnSaveAddStudent->FlatAppearance->BorderSize = 0;
			this->btnSaveAddStudent->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSaveAddStudent->Location = System::Drawing::Point(402, 288);
			this->btnSaveAddStudent->Name = L"btnSaveAddStudent";
			this->btnSaveAddStudent->Size = System::Drawing::Size(55, 30);
			this->btnSaveAddStudent->TabIndex = 4;
			this->btnSaveAddStudent->Text = L"Save";
			this->btnSaveAddStudent->UseVisualStyleBackColor = false;
			this->btnSaveAddStudent->Click += gcnew System::EventHandler(this, &student::btnSaveAddStudent_Click);
			// 
			// txtLrn
			// 
			this->txtLrn->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtLrn->Location = System::Drawing::Point(7, 57);
			this->txtLrn->Name = L"txtLrn";
			this->txtLrn->Size = System::Drawing::Size(295, 23);
			this->txtLrn->TabIndex = 3;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(4, 37);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(37, 16);
			this->label3->TabIndex = 2;
			this->label3->Text = L"LRN";
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::Gray;
			this->panel3->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel3->Location = System::Drawing::Point(0, 0);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(623, 30);
			this->panel3->TabIndex = 1;
			// 
			// dataGridStudent
			// 
			this->dataGridStudent->AllowUserToAddRows = false;
			this->dataGridStudent->AllowUserToDeleteRows = false;
			this->dataGridStudent->AllowUserToResizeColumns = false;
			this->dataGridStudent->AllowUserToResizeRows = false;
			this->dataGridStudent->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGridStudent->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridStudent->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::DisplayedCells;
			this->dataGridStudent->BackgroundColor = System::Drawing::SystemColors::Control;
			this->dataGridStudent->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			this->dataGridStudent->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridStudent->Location = System::Drawing::Point(0, 50);
			this->dataGridStudent->Margin = System::Windows::Forms::Padding(4);
			this->dataGridStudent->MultiSelect = false;
			this->dataGridStudent->Name = L"dataGridStudent";
			this->dataGridStudent->ReadOnly = true;
			this->dataGridStudent->RowHeadersVisible = false;
			this->dataGridStudent->RowHeadersWidth = 51;
			this->dataGridStudent->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridStudent->Size = System::Drawing::Size(984, 462);
			this->dataGridStudent->TabIndex = 1;
			// 
			// panel1
			// 
			this->panel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->btnDeleteStudent);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->btnEditStudent);
			this->panel1->Controls->Add(this->btnExitStudent);
			this->panel1->Controls->Add(this->btnAddStudent);
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
			// btnDeleteStudent
			// 
			this->btnDeleteStudent->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btnDeleteStudent->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnDeleteStudent.BackgroundImage")));
			this->btnDeleteStudent->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->btnDeleteStudent->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnDeleteStudent->Location = System::Drawing::Point(809, 6);
			this->btnDeleteStudent->Margin = System::Windows::Forms::Padding(4);
			this->btnDeleteStudent->Name = L"btnDeleteStudent";
			this->btnDeleteStudent->Size = System::Drawing::Size(51, 39);
			this->btnDeleteStudent->TabIndex = 4;
			this->btnDeleteStudent->TabStop = false;
			this->btnDeleteStudent->Click += gcnew System::EventHandler(this, &student::btnDeleteStudent_Click);
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
			// btnEditStudent
			// 
			this->btnEditStudent->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btnEditStudent->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnEditStudent.BackgroundImage")));
			this->btnEditStudent->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->btnEditStudent->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnEditStudent->Location = System::Drawing::Point(706, 6);
			this->btnEditStudent->Margin = System::Windows::Forms::Padding(4);
			this->btnEditStudent->Name = L"btnEditStudent";
			this->btnEditStudent->Size = System::Drawing::Size(51, 39);
			this->btnEditStudent->TabIndex = 2;
			this->btnEditStudent->TabStop = false;
			this->btnEditStudent->Click += gcnew System::EventHandler(this, &student::btnEditStudent_Click);
			// 
			// btnExitStudent
			// 
			this->btnExitStudent->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btnExitStudent->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnExitStudent.BackgroundImage")));
			this->btnExitStudent->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btnExitStudent->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnExitStudent->Location = System::Drawing::Point(939, 0);
			this->btnExitStudent->Margin = System::Windows::Forms::Padding(4);
			this->btnExitStudent->Name = L"btnExitStudent";
			this->btnExitStudent->Size = System::Drawing::Size(47, 42);
			this->btnExitStudent->TabIndex = 1;
			this->btnExitStudent->TabStop = false;
			this->btnExitStudent->Click += gcnew System::EventHandler(this, &student::btnExitStudent_Click);
			// 
			// btnAddStudent
			// 
			this->btnAddStudent->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->btnAddStudent->FlatAppearance->BorderSize = 0;
			this->btnAddStudent->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnAddStudent->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAddStudent->Location = System::Drawing::Point(0, 6);
			this->btnAddStudent->Margin = System::Windows::Forms::Padding(4);
			this->btnAddStudent->Name = L"btnAddStudent";
			this->btnAddStudent->Size = System::Drawing::Size(137, 36);
			this->btnAddStudent->TabIndex = 0;
			this->btnAddStudent->Text = L"New Student";
			this->btnAddStudent->UseVisualStyleBackColor = false;
			this->btnAddStudent->Click += gcnew System::EventHandler(this, &student::btnAddStudent_Click);
			// 
			// student
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1000, 550);
			this->Controls->Add(this->tabControl1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"student";
			this->Text = L"student";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &student::student_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->panelStudent->ResumeLayout(false);
			this->panelStudent->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridStudent))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnDeleteStudent))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnEditStudent))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnExitStudent))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

String^ connString = "Server = localhost; Port = 3306; Database = enrollment_db; UID = root; Password = root";
MySqlConnection^ conn = gcnew MySqlConnection(connString);

void populateGridStudent() {

	try
	{
		conn->Open();

		MySqlDataAdapter^ adapterStudent = gcnew MySqlDataAdapter("SELECT * FROM tblstudent", conn);
		DataTable^ tableStudent = gcnew DataTable();

		adapterStudent->Fill(tableStudent);

		dataGridStudent->DataSource = tableStudent;

		conn->Close();
	}

	catch (Exception^ e)
	{
		(void) e;
	}
}

void clearStudentForm() {

	txtLrn->Clear();
	txtStudentName->Clear();
	txtStudentMiddle->Clear();
	txtStudentLast->Clear();
	txtStudentAddress->Clear();
	txtStudentBirth->Clear();
	txtStudentAge->Clear();
	txtFatherName->Clear();
	txtMotherName->Clear();
	cbStudentStatus->Text = "";
}

private: System::Void student_Load(System::Object^ sender, System::EventArgs^ e) {

	populateGridStudent();
}

private: System::Void btnAddStudent_Click(System::Object^ sender, System::EventArgs^ e) {

	panelStudent->Show();

	btnUpdateStudent->Enabled = false;
	cbStudentStatus->Enabled = false;
	btnSaveAddStudent->Enabled = true;
}

private: System::Void btnSaveAddStudent_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ studentlrn = txtLrn->Text;
	String^ studentName = txtStudentName->Text;
	String^ studentMiddle = txtStudentMiddle->Text;
	String^ studentLast = txtStudentLast->Text;
	String^ studentAddress = txtStudentAddress->Text;
	String^ studentBirth = txtStudentBirth->Text;
	int studentAge = Convert::ToInt16(txtStudentAge->Text);
	String^ fatherName = txtFatherName->Text;
	String^ motherName = txtMotherName->Text;

	try
	{
		conn->Open();

		String^ commStringStudent = "INSERT INTO tblstudent(lrn, first_name, middle_name, last_name, address, birth_date, age, father_name, mother_name) VALUES(@lrn, @first_name, @middle_name, @last_name, @address, @birth_date, @age, @father_name, @mother_name)";
		MySqlCommand^ commStudent = gcnew MySqlCommand(commStringStudent, conn);

		commStudent->Parameters->AddWithValue("@lrn", studentlrn);
		commStudent->Parameters->AddWithValue("@first_name", studentName);
		commStudent->Parameters->AddWithValue("@middle_name", studentMiddle);
		commStudent->Parameters->AddWithValue("@last_name", studentLast);
		commStudent->Parameters->AddWithValue("@address", studentAddress);
		commStudent->Parameters->AddWithValue("@birth_date", studentBirth);
		commStudent->Parameters->AddWithValue("@age", studentAge);
		commStudent->Parameters->AddWithValue("@father_name", fatherName);
		commStudent->Parameters->AddWithValue("@mother_name", motherName);

		commStudent->ExecuteNonQuery();

		MessageBox::Show("New Student Has Been Added", "Enrollment Management System", MessageBoxButtons::OK);

		conn->Close();

		clearStudentForm();

		populateGridStudent();
	}

	catch (Exception^ e)
	{
		(void) e;
		MessageBox::Show("Error Has Occured While Adding New Student", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}

private: System::Void btnEditStudent_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ currentLrn = dataGridStudent->Rows[dataGridStudent->CurrentCell->RowIndex]->Cells[0]->Value->ToString();

	try
	{
		conn->Open();

		MySqlDataAdapter^ adapterUpdateStudent = gcnew MySqlDataAdapter("SELECT * FROM tblstudent WHERE lrn = " + currentLrn, conn);
		DataTable^ tableUpdateStudent = gcnew DataTable();

		adapterUpdateStudent->Fill(tableUpdateStudent);

		txtLrn->Text = tableUpdateStudent->Rows[0]->ItemArray[0]->ToString();
		txtStudentName->Text = tableUpdateStudent->Rows[0]->ItemArray[1]->ToString();
		txtStudentMiddle->Text = tableUpdateStudent->Rows[0]->ItemArray[2]->ToString();
		txtStudentLast->Text = tableUpdateStudent->Rows[0]->ItemArray[3]->ToString();
		txtStudentAddress->Text = tableUpdateStudent->Rows[0]->ItemArray[4]->ToString();
		txtStudentBirth->Text = tableUpdateStudent->Rows[0]->ItemArray[5]->ToString();
		txtStudentAge->Text = tableUpdateStudent->Rows[0]->ItemArray[6]->ToString();
		txtFatherName->Text = tableUpdateStudent->Rows[0]->ItemArray[7]->ToString();
		txtMotherName->Text = tableUpdateStudent->Rows[0]->ItemArray[8]->ToString();
		cbStudentStatus->Text = tableUpdateStudent->Rows[0]->ItemArray[9]->ToString();

		conn->Close();

		panelStudent->Show();

		btnSaveAddStudent->Enabled = false;
		btnUpdateStudent->Enabled = true;
		cbStudentStatus->Enabled = true;

	}

	catch (Exception^ e)
	{
		(void) e;
	}
}

private: System::Void btnUpdateStudent_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ currentLrn = dataGridStudent->Rows[dataGridStudent->CurrentCell->RowIndex]->Cells[0]->Value->ToString();

	String^ updateStudentLrn = txtLrn->Text;
	String^ updateStudentName = txtStudentName->Text;
	String^ updateStudentMiddle = txtStudentMiddle->Text;
	String^ updateStudentLast = txtStudentLast->Text;
	String^ updateStudentAddress = txtStudentAddress->Text;
	String^ updateStudentBirth = txtStudentBirth->Text;
	int updateStudentAge = Convert::ToInt16(txtStudentAge->Text);
	String^ updateFatherName = txtFatherName->Text;
	String^ updateMotherName = txtMotherName->Text;
	String^ updateStatus = cbStudentStatus->Text;

	try
	{
		conn->Open();

		MySqlCommand^ commUpdateStudent = gcnew MySqlCommand("UPDATE tblstudent SET lrn = @lrn, first_name = @first_name, middle_name = @middle_name, last_name = @last_name, address = @address, birth_date = @birth_date, age = @age, father_name = @father_name, mother_name = @mother_name, status = @status WHERE lrn = " + currentLrn, conn);

		commUpdateStudent->Parameters->AddWithValue("@lrn", updateStudentLrn);
		commUpdateStudent->Parameters->AddWithValue("@first_name", updateStudentName);
		commUpdateStudent->Parameters->AddWithValue("@middle_name", updateStudentMiddle);
		commUpdateStudent->Parameters->AddWithValue("@last_name", updateStudentLast);
		commUpdateStudent->Parameters->AddWithValue("@address", updateStudentAddress);
		commUpdateStudent->Parameters->AddWithValue("@birth_date", updateStudentBirth);
		commUpdateStudent->Parameters->AddWithValue("@age", updateStudentAge);
		commUpdateStudent->Parameters->AddWithValue("@father_name", updateFatherName);
		commUpdateStudent->Parameters->AddWithValue("@mother_name", updateMotherName);
		commUpdateStudent->Parameters->AddWithValue("@status", updateStatus);

		commUpdateStudent->ExecuteNonQuery();

		MessageBox::Show("Student LRN '"+ currentLrn +"' Has Been Updated", "Enrollment Management System", MessageBoxButtons::OK);

		conn->Close();

		clearStudentForm();

		panelStudent->Hide();

		populateGridStudent();
	}

	catch (Exception^ e)
	{
		(void) e;
		MessageBox::Show("Error Has Occured While Updating Student LRN '"+ currentLrn +"'", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}

private: System::Void btnDeleteStudent_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ currentLrn = dataGridStudent->Rows[dataGridStudent->CurrentCell->RowIndex]->Cells[0]->Value->ToString();

	if (MessageBox::Show("Are You Sure You Want To Delete Student LRN '"+ currentLrn +"'?", "Question", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == Windows::Forms::DialogResult::Yes)
	{
		try
		{
			conn->Open();

			MySqlCommand^ commDeleteStudent = gcnew MySqlCommand("DELETE FROM tblstudent WHERE lrn = " + currentLrn, conn);

			commDeleteStudent->ExecuteNonQuery();

			MessageBox::Show("Student LRN '" + currentLrn + "' Has Been Deleted", "Error", MessageBoxButtons::OK);

			conn->Close();

			populateGridStudent();
		}

		catch (Exception^ e)
		{
			(void)e;
			MessageBox::Show("Error Has Occured While Deleting Student LRN '" + currentLrn + "'", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
}
private: System::Void btnCancelAddStudent_Click(System::Object^ sender, System::EventArgs^ e) {

	panelStudent->Hide();
}
private: System::Void btnExitStudent_Click(System::Object^ sender, System::EventArgs^ e) {

	student::Close();
}
};

}
