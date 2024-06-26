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
	/// Summary for enrollment
	/// </summary>
	public ref class enrollment : public System::Windows::Forms::Form
	{
	public:
		enrollment(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			panelEnrollment->Hide();
			panelEnrollmentAddStudent->Hide();
			panelEnrollmentAddSection->Hide();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~enrollment()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::Panel^ panelEnrollment;











	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ txtEnrollmentLast;

	private: System::Windows::Forms::TextBox^ txtEnrollmentMiddle;




	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ txtEnrollmentName;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ btnCancelAddEnrollment;

	private: System::Windows::Forms::Button^ btnSaveEnrollment;

	private: System::Windows::Forms::TextBox^ txtEnrollmentLrn;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::DataGridView^ dataGridEnrollment;



	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::PictureBox^ btnDeleteEnrollment;
	private: System::Windows::Forms::PictureBox^ btnExitEnrollment;
	private: System::Windows::Forms::Button^ btnAddEnrollment;





	private: System::Windows::Forms::TextBox^ txtEnrollmentTeacher;

	private: System::Windows::Forms::TextBox^ txtEnrollmentGrade;

	private: System::Windows::Forms::TextBox^ txtEnrollmentSection;

	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ txtEnrollmentSectionID;


	private: System::Windows::Forms::PictureBox^ btnShowEnrollmentStudent;
	private: System::Windows::Forms::PictureBox^ btnShowEnrollmentSection;
	private: System::Windows::Forms::Panel^ panelEnrollmentAddSection;




	private: System::Windows::Forms::TabControl^ tabControl2;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::PictureBox^ btnEnrollmentAddStudent;
	private: System::Windows::Forms::PictureBox^ btnHideEnrollmentStudent;
	private: System::Windows::Forms::DataGridView^ dataGridEnrollmentSection;




	private: System::Windows::Forms::Panel^ panelEnrollmentAddStudent;

	private: System::Windows::Forms::TabControl^ tabControl3;
	private: System::Windows::Forms::TabPage^ tabPage3;
private: System::Windows::Forms::DataGridView^ dataGridEnrollmentStudent;

	private: System::Windows::Forms::Panel^ panel5;
private: System::Windows::Forms::PictureBox^ btnCancelEnrollmentAddStudent;


	private: System::Windows::Forms::PictureBox^ btnEnrollmetAddStudent;
private: System::Windows::Forms::Label^ txtActiveAy;

private: System::Windows::Forms::Label^ label1;
private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(enrollment::typeid));
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->panelEnrollmentAddStudent = (gcnew System::Windows::Forms::Panel());
			this->tabControl3 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->dataGridEnrollmentStudent = (gcnew System::Windows::Forms::DataGridView());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->btnCancelEnrollmentAddStudent = (gcnew System::Windows::Forms::PictureBox());
			this->btnEnrollmetAddStudent = (gcnew System::Windows::Forms::PictureBox());
			this->panelEnrollmentAddSection = (gcnew System::Windows::Forms::Panel());
			this->tabControl2 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->dataGridEnrollmentSection = (gcnew System::Windows::Forms::DataGridView());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->btnHideEnrollmentStudent = (gcnew System::Windows::Forms::PictureBox());
			this->btnEnrollmentAddStudent = (gcnew System::Windows::Forms::PictureBox());
			this->panelEnrollment = (gcnew System::Windows::Forms::Panel());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtActiveAy = (gcnew System::Windows::Forms::Label());
			this->btnShowEnrollmentStudent = (gcnew System::Windows::Forms::PictureBox());
			this->btnShowEnrollmentSection = (gcnew System::Windows::Forms::PictureBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->txtEnrollmentSectionID = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->txtEnrollmentTeacher = (gcnew System::Windows::Forms::TextBox());
			this->txtEnrollmentGrade = (gcnew System::Windows::Forms::TextBox());
			this->txtEnrollmentSection = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->txtEnrollmentLast = (gcnew System::Windows::Forms::TextBox());
			this->txtEnrollmentMiddle = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txtEnrollmentName = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->btnCancelAddEnrollment = (gcnew System::Windows::Forms::Button());
			this->btnSaveEnrollment = (gcnew System::Windows::Forms::Button());
			this->txtEnrollmentLrn = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->dataGridEnrollment = (gcnew System::Windows::Forms::DataGridView());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->btnDeleteEnrollment = (gcnew System::Windows::Forms::PictureBox());
			this->btnExitEnrollment = (gcnew System::Windows::Forms::PictureBox());
			this->btnAddEnrollment = (gcnew System::Windows::Forms::Button());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->panelEnrollmentAddStudent->SuspendLayout();
			this->tabControl3->SuspendLayout();
			this->tabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridEnrollmentStudent))->BeginInit();
			this->panel5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnCancelEnrollmentAddStudent))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnEnrollmetAddStudent))->BeginInit();
			this->panelEnrollmentAddSection->SuspendLayout();
			this->tabControl2->SuspendLayout();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridEnrollmentSection))->BeginInit();
			this->panel4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnHideEnrollmentStudent))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnEnrollmentAddStudent))->BeginInit();
			this->panelEnrollment->SuspendLayout();
			this->flowLayoutPanel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnShowEnrollmentStudent))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnShowEnrollmentSection))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridEnrollment))->BeginInit();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnDeleteEnrollment))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnExitEnrollment))->BeginInit();
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
			this->tabControl1->Size = System::Drawing::Size(1195, 640);
			this->tabControl1->TabIndex = 5;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->panelEnrollmentAddStudent);
			this->tabPage1->Controls->Add(this->panelEnrollmentAddSection);
			this->tabPage1->Controls->Add(this->panelEnrollment);
			this->tabPage1->Controls->Add(this->dataGridEnrollment);
			this->tabPage1->Controls->Add(this->panel1);
			this->tabPage1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tabPage1->Location = System::Drawing::Point(4, 26);
			this->tabPage1->Margin = System::Windows::Forms::Padding(4);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(4);
			this->tabPage1->Size = System::Drawing::Size(1187, 610);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Enrollment";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// panelEnrollmentAddStudent
			// 
			this->panelEnrollmentAddStudent->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->panelEnrollmentAddStudent->Controls->Add(this->tabControl3);
			this->panelEnrollmentAddStudent->Location = System::Drawing::Point(626, 58);
			this->panelEnrollmentAddStudent->Name = L"panelEnrollmentAddStudent";
			this->panelEnrollmentAddStudent->Size = System::Drawing::Size(551, 547);
			this->panelEnrollmentAddStudent->TabIndex = 4;
			// 
			// tabControl3
			// 
			this->tabControl3->Controls->Add(this->tabPage3);
			this->tabControl3->Location = System::Drawing::Point(3, 3);
			this->tabControl3->Name = L"tabControl3";
			this->tabControl3->SelectedIndex = 0;
			this->tabControl3->Size = System::Drawing::Size(544, 540);
			this->tabControl3->TabIndex = 0;
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->dataGridEnrollmentStudent);
			this->tabPage3->Controls->Add(this->panel5);
			this->tabPage3->Location = System::Drawing::Point(4, 26);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(536, 510);
			this->tabPage3->TabIndex = 0;
			this->tabPage3->Text = L"Choose Student";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// dataGridEnrollmentStudent
			// 
			this->dataGridEnrollmentStudent->AllowUserToAddRows = false;
			this->dataGridEnrollmentStudent->AllowUserToDeleteRows = false;
			this->dataGridEnrollmentStudent->AllowUserToResizeColumns = false;
			this->dataGridEnrollmentStudent->AllowUserToResizeRows = false;
			this->dataGridEnrollmentStudent->BackgroundColor = System::Drawing::SystemColors::Control;
			this->dataGridEnrollmentStudent->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::SingleVertical;
			this->dataGridEnrollmentStudent->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			this->dataGridEnrollmentStudent->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridEnrollmentStudent->Location = System::Drawing::Point(0, 46);
			this->dataGridEnrollmentStudent->MultiSelect = false;
			this->dataGridEnrollmentStudent->Name = L"dataGridEnrollmentStudent";
			this->dataGridEnrollmentStudent->ReadOnly = true;
			this->dataGridEnrollmentStudent->RowHeadersVisible = false;
			this->dataGridEnrollmentStudent->RowHeadersWidth = 51;
			this->dataGridEnrollmentStudent->RowTemplate->Height = 24;
			this->dataGridEnrollmentStudent->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridEnrollmentStudent->Size = System::Drawing::Size(536, 464);
			this->dataGridEnrollmentStudent->TabIndex = 1;
			// 
			// panel5
			// 
			this->panel5->Controls->Add(this->btnCancelEnrollmentAddStudent);
			this->panel5->Controls->Add(this->btnEnrollmetAddStudent);
			this->panel5->Location = System::Drawing::Point(1, 1);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(535, 46);
			this->panel5->TabIndex = 0;
			// 
			// btnCancelEnrollmentAddStudent
			// 
			this->btnCancelEnrollmentAddStudent->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnCancelEnrollmentAddStudent.BackgroundImage")));
			this->btnCancelEnrollmentAddStudent->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->btnCancelEnrollmentAddStudent->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnCancelEnrollmentAddStudent->Location = System::Drawing::Point(495, 0);
			this->btnCancelEnrollmentAddStudent->Name = L"btnCancelEnrollmentAddStudent";
			this->btnCancelEnrollmentAddStudent->Size = System::Drawing::Size(39, 40);
			this->btnCancelEnrollmentAddStudent->TabIndex = 1;
			this->btnCancelEnrollmentAddStudent->TabStop = false;
			this->btnCancelEnrollmentAddStudent->Click += gcnew System::EventHandler(this, &enrollment::btnCancelEnrollmentAddStudent_Click);
			// 
			// btnEnrollmetAddStudent
			// 
			this->btnEnrollmetAddStudent->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnEnrollmetAddStudent.BackgroundImage")));
			this->btnEnrollmetAddStudent->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->btnEnrollmetAddStudent->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnEnrollmetAddStudent->Location = System::Drawing::Point(0, 3);
			this->btnEnrollmetAddStudent->Name = L"btnEnrollmetAddStudent";
			this->btnEnrollmetAddStudent->Size = System::Drawing::Size(39, 40);
			this->btnEnrollmetAddStudent->TabIndex = 0;
			this->btnEnrollmetAddStudent->TabStop = false;
			this->btnEnrollmetAddStudent->Click += gcnew System::EventHandler(this, &enrollment::btnEnrollmetAddStudent_Click);
			// 
			// panelEnrollmentAddSection
			// 
			this->panelEnrollmentAddSection->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->panelEnrollmentAddSection->Controls->Add(this->tabControl2);
			this->panelEnrollmentAddSection->Location = System::Drawing::Point(629, 57);
			this->panelEnrollmentAddSection->Name = L"panelEnrollmentAddSection";
			this->panelEnrollmentAddSection->Size = System::Drawing::Size(551, 547);
			this->panelEnrollmentAddSection->TabIndex = 3;
			// 
			// tabControl2
			// 
			this->tabControl2->Controls->Add(this->tabPage2);
			this->tabControl2->Location = System::Drawing::Point(4, 4);
			this->tabControl2->Name = L"tabControl2";
			this->tabControl2->SelectedIndex = 0;
			this->tabControl2->Size = System::Drawing::Size(544, 540);
			this->tabControl2->TabIndex = 0;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->dataGridEnrollmentSection);
			this->tabPage2->Controls->Add(this->panel4);
			this->tabPage2->Location = System::Drawing::Point(4, 26);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(536, 510);
			this->tabPage2->TabIndex = 0;
			this->tabPage2->Text = L"Choose Section";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// dataGridEnrollmentSection
			// 
			this->dataGridEnrollmentSection->AllowUserToAddRows = false;
			this->dataGridEnrollmentSection->AllowUserToDeleteRows = false;
			this->dataGridEnrollmentSection->AllowUserToResizeColumns = false;
			this->dataGridEnrollmentSection->AllowUserToResizeRows = false;
			this->dataGridEnrollmentSection->BackgroundColor = System::Drawing::SystemColors::Control;
			this->dataGridEnrollmentSection->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::SingleVertical;
			this->dataGridEnrollmentSection->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			this->dataGridEnrollmentSection->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridEnrollmentSection->Location = System::Drawing::Point(0, 46);
			this->dataGridEnrollmentSection->MultiSelect = false;
			this->dataGridEnrollmentSection->Name = L"dataGridEnrollmentSection";
			this->dataGridEnrollmentSection->ReadOnly = true;
			this->dataGridEnrollmentSection->RowHeadersVisible = false;
			this->dataGridEnrollmentSection->RowHeadersWidth = 51;
			this->dataGridEnrollmentSection->RowTemplate->Height = 24;
			this->dataGridEnrollmentSection->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridEnrollmentSection->Size = System::Drawing::Size(536, 464);
			this->dataGridEnrollmentSection->TabIndex = 1;
			// 
			// panel4
			// 
			this->panel4->Controls->Add(this->btnHideEnrollmentStudent);
			this->panel4->Controls->Add(this->btnEnrollmentAddStudent);
			this->panel4->Location = System::Drawing::Point(1, 1);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(535, 46);
			this->panel4->TabIndex = 0;
			// 
			// btnHideEnrollmentStudent
			// 
			this->btnHideEnrollmentStudent->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnHideEnrollmentStudent.BackgroundImage")));
			this->btnHideEnrollmentStudent->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->btnHideEnrollmentStudent->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnHideEnrollmentStudent->Location = System::Drawing::Point(495, 0);
			this->btnHideEnrollmentStudent->Name = L"btnHideEnrollmentStudent";
			this->btnHideEnrollmentStudent->Size = System::Drawing::Size(39, 40);
			this->btnHideEnrollmentStudent->TabIndex = 1;
			this->btnHideEnrollmentStudent->TabStop = false;
			this->btnHideEnrollmentStudent->Click += gcnew System::EventHandler(this, &enrollment::btnHideEnrollmentStudent_Click);
			// 
			// btnEnrollmentAddStudent
			// 
			this->btnEnrollmentAddStudent->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnEnrollmentAddStudent.BackgroundImage")));
			this->btnEnrollmentAddStudent->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->btnEnrollmentAddStudent->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnEnrollmentAddStudent->Location = System::Drawing::Point(0, 3);
			this->btnEnrollmentAddStudent->Name = L"btnEnrollmentAddStudent";
			this->btnEnrollmentAddStudent->Size = System::Drawing::Size(39, 40);
			this->btnEnrollmentAddStudent->TabIndex = 0;
			this->btnEnrollmentAddStudent->TabStop = false;
			this->btnEnrollmentAddStudent->Click += gcnew System::EventHandler(this, &enrollment::btnEnrollmentAddStudent_Click);
			// 
			// panelEnrollment
			// 
			this->panelEnrollment->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->panelEnrollment->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panelEnrollment->Controls->Add(this->flowLayoutPanel1);
			this->panelEnrollment->Controls->Add(this->btnShowEnrollmentStudent);
			this->panelEnrollment->Controls->Add(this->btnShowEnrollmentSection);
			this->panelEnrollment->Controls->Add(this->label10);
			this->panelEnrollment->Controls->Add(this->txtEnrollmentSectionID);
			this->panelEnrollment->Controls->Add(this->label9);
			this->panelEnrollment->Controls->Add(this->label8);
			this->panelEnrollment->Controls->Add(this->label7);
			this->panelEnrollment->Controls->Add(this->txtEnrollmentTeacher);
			this->panelEnrollment->Controls->Add(this->txtEnrollmentGrade);
			this->panelEnrollment->Controls->Add(this->txtEnrollmentSection);
			this->panelEnrollment->Controls->Add(this->label6);
			this->panelEnrollment->Controls->Add(this->txtEnrollmentLast);
			this->panelEnrollment->Controls->Add(this->txtEnrollmentMiddle);
			this->panelEnrollment->Controls->Add(this->label5);
			this->panelEnrollment->Controls->Add(this->txtEnrollmentName);
			this->panelEnrollment->Controls->Add(this->label4);
			this->panelEnrollment->Controls->Add(this->btnCancelAddEnrollment);
			this->panelEnrollment->Controls->Add(this->btnSaveEnrollment);
			this->panelEnrollment->Controls->Add(this->txtEnrollmentLrn);
			this->panelEnrollment->Controls->Add(this->label3);
			this->panelEnrollment->Controls->Add(this->panel3);
			this->panelEnrollment->Location = System::Drawing::Point(7, 57);
			this->panelEnrollment->Name = L"panelEnrollment";
			this->panelEnrollment->Size = System::Drawing::Size(615, 318);
			this->panelEnrollment->TabIndex = 2;
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->BackColor = System::Drawing::Color::Transparent;
			this->flowLayoutPanel1->Controls->Add(this->label1);
			this->flowLayoutPanel1->Controls->Add(this->txtActiveAy);
			this->flowLayoutPanel1->Location = System::Drawing::Point(0, 30);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(613, 25);
			this->flowLayoutPanel1->TabIndex = 27;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(3, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(136, 23);
			this->label1->TabIndex = 25;
			this->label1->Text = L"Academic Year :";
			// 
			// txtActiveAy
			// 
			this->txtActiveAy->AutoSize = true;
			this->txtActiveAy->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtActiveAy->Location = System::Drawing::Point(145, 0);
			this->txtActiveAy->Name = L"txtActiveAy";
			this->txtActiveAy->Size = System::Drawing::Size(50, 23);
			this->txtActiveAy->TabIndex = 26;
			this->txtActiveAy->Text = L"None";
			// 
			// btnShowEnrollmentStudent
			// 
			this->btnShowEnrollmentStudent->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnShowEnrollmentStudent.BackgroundImage")));
			this->btnShowEnrollmentStudent->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->btnShowEnrollmentStudent->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnShowEnrollmentStudent->Location = System::Drawing::Point(276, 96);
			this->btnShowEnrollmentStudent->Name = L"btnShowEnrollmentStudent";
			this->btnShowEnrollmentStudent->Size = System::Drawing::Size(25, 23);
			this->btnShowEnrollmentStudent->TabIndex = 24;
			this->btnShowEnrollmentStudent->TabStop = false;
			this->btnShowEnrollmentStudent->Click += gcnew System::EventHandler(this, &enrollment::btnShowEnrollmentStudent_Click);
			// 
			// btnShowEnrollmentSection
			// 
			this->btnShowEnrollmentSection->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnShowEnrollmentSection.BackgroundImage")));
			this->btnShowEnrollmentSection->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->btnShowEnrollmentSection->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnShowEnrollmentSection->Location = System::Drawing::Point(577, 96);
			this->btnShowEnrollmentSection->Name = L"btnShowEnrollmentSection";
			this->btnShowEnrollmentSection->Size = System::Drawing::Size(25, 23);
			this->btnShowEnrollmentSection->TabIndex = 23;
			this->btnShowEnrollmentSection->TabStop = false;
			this->btnShowEnrollmentSection->Click += gcnew System::EventHandler(this, &enrollment::btnShowEnrollmentSection_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(308, 77);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(78, 16);
			this->label10->TabIndex = 22;
			this->label10->Text = L"Section ID";
			// 
			// txtEnrollmentSectionID
			// 
			this->txtEnrollmentSectionID->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtEnrollmentSectionID->Enabled = false;
			this->txtEnrollmentSectionID->Location = System::Drawing::Point(307, 96);
			this->txtEnrollmentSectionID->Name = L"txtEnrollmentSectionID";
			this->txtEnrollmentSectionID->Size = System::Drawing::Size(264, 23);
			this->txtEnrollmentSectionID->TabIndex = 21;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(307, 227);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(60, 16);
			this->label9->TabIndex = 20;
			this->label9->Text = L"Adviser";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(308, 177);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(50, 16);
			this->label8->TabIndex = 19;
			this->label8->Text = L"Grade";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(308, 127);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(59, 16);
			this->label7->TabIndex = 18;
			this->label7->Text = L"Section";
			// 
			// txtEnrollmentTeacher
			// 
			this->txtEnrollmentTeacher->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtEnrollmentTeacher->Enabled = false;
			this->txtEnrollmentTeacher->Location = System::Drawing::Point(307, 246);
			this->txtEnrollmentTeacher->Name = L"txtEnrollmentTeacher";
			this->txtEnrollmentTeacher->Size = System::Drawing::Size(295, 23);
			this->txtEnrollmentTeacher->TabIndex = 17;
			// 
			// txtEnrollmentGrade
			// 
			this->txtEnrollmentGrade->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtEnrollmentGrade->Enabled = false;
			this->txtEnrollmentGrade->Location = System::Drawing::Point(307, 196);
			this->txtEnrollmentGrade->Name = L"txtEnrollmentGrade";
			this->txtEnrollmentGrade->Size = System::Drawing::Size(295, 23);
			this->txtEnrollmentGrade->TabIndex = 16;
			// 
			// txtEnrollmentSection
			// 
			this->txtEnrollmentSection->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtEnrollmentSection->Enabled = false;
			this->txtEnrollmentSection->Location = System::Drawing::Point(307, 146);
			this->txtEnrollmentSection->Name = L"txtEnrollmentSection";
			this->txtEnrollmentSection->Size = System::Drawing::Size(295, 23);
			this->txtEnrollmentSection->TabIndex = 15;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(3, 227);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(81, 16);
			this->label6->TabIndex = 14;
			this->label6->Text = L"Last Name";
			// 
			// txtEnrollmentLast
			// 
			this->txtEnrollmentLast->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtEnrollmentLast->Enabled = false;
			this->txtEnrollmentLast->Location = System::Drawing::Point(6, 246);
			this->txtEnrollmentLast->Name = L"txtEnrollmentLast";
			this->txtEnrollmentLast->Size = System::Drawing::Size(295, 23);
			this->txtEnrollmentLast->TabIndex = 13;
			// 
			// txtEnrollmentMiddle
			// 
			this->txtEnrollmentMiddle->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtEnrollmentMiddle->Enabled = false;
			this->txtEnrollmentMiddle->Location = System::Drawing::Point(6, 196);
			this->txtEnrollmentMiddle->Name = L"txtEnrollmentMiddle";
			this->txtEnrollmentMiddle->Size = System::Drawing::Size(295, 23);
			this->txtEnrollmentMiddle->TabIndex = 9;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(3, 177);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(99, 16);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Middle Name";
			// 
			// txtEnrollmentName
			// 
			this->txtEnrollmentName->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtEnrollmentName->Enabled = false;
			this->txtEnrollmentName->Location = System::Drawing::Point(6, 146);
			this->txtEnrollmentName->Name = L"txtEnrollmentName";
			this->txtEnrollmentName->Size = System::Drawing::Size(295, 23);
			this->txtEnrollmentName->TabIndex = 7;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(3, 127);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(82, 16);
			this->label4->TabIndex = 6;
			this->label4->Text = L"First Name";
			// 
			// btnCancelAddEnrollment
			// 
			this->btnCancelAddEnrollment->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->btnCancelAddEnrollment->FlatAppearance->BorderSize = 0;
			this->btnCancelAddEnrollment->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnCancelAddEnrollment->Location = System::Drawing::Point(531, 275);
			this->btnCancelAddEnrollment->Name = L"btnCancelAddEnrollment";
			this->btnCancelAddEnrollment->Size = System::Drawing::Size(71, 30);
			this->btnCancelAddEnrollment->TabIndex = 5;
			this->btnCancelAddEnrollment->Text = L"Cancel";
			this->btnCancelAddEnrollment->UseVisualStyleBackColor = false;
			this->btnCancelAddEnrollment->Click += gcnew System::EventHandler(this, &enrollment::btnCancelAddEnrollment_Click);
			// 
			// btnSaveEnrollment
			// 
			this->btnSaveEnrollment->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->btnSaveEnrollment->FlatAppearance->BorderSize = 0;
			this->btnSaveEnrollment->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSaveEnrollment->Location = System::Drawing::Point(470, 275);
			this->btnSaveEnrollment->Name = L"btnSaveEnrollment";
			this->btnSaveEnrollment->Size = System::Drawing::Size(55, 30);
			this->btnSaveEnrollment->TabIndex = 4;
			this->btnSaveEnrollment->Text = L"Save";
			this->btnSaveEnrollment->UseVisualStyleBackColor = false;
			this->btnSaveEnrollment->Click += gcnew System::EventHandler(this, &enrollment::btnSaveEnrollment_Click);
			// 
			// txtEnrollmentLrn
			// 
			this->txtEnrollmentLrn->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtEnrollmentLrn->Enabled = false;
			this->txtEnrollmentLrn->Location = System::Drawing::Point(6, 96);
			this->txtEnrollmentLrn->Name = L"txtEnrollmentLrn";
			this->txtEnrollmentLrn->Size = System::Drawing::Size(264, 23);
			this->txtEnrollmentLrn->TabIndex = 3;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(3, 76);
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
			this->panel3->Size = System::Drawing::Size(613, 30);
			this->panel3->TabIndex = 1;
			// 
			// dataGridEnrollment
			// 
			this->dataGridEnrollment->AllowUserToAddRows = false;
			this->dataGridEnrollment->AllowUserToDeleteRows = false;
			this->dataGridEnrollment->AllowUserToResizeColumns = false;
			this->dataGridEnrollment->AllowUserToResizeRows = false;
			this->dataGridEnrollment->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGridEnrollment->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridEnrollment->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::DisplayedCells;
			this->dataGridEnrollment->BackgroundColor = System::Drawing::SystemColors::Control;
			this->dataGridEnrollment->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			this->dataGridEnrollment->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridEnrollment->Location = System::Drawing::Point(0, 50);
			this->dataGridEnrollment->Margin = System::Windows::Forms::Padding(4);
			this->dataGridEnrollment->MultiSelect = false;
			this->dataGridEnrollment->Name = L"dataGridEnrollment";
			this->dataGridEnrollment->ReadOnly = true;
			this->dataGridEnrollment->RowHeadersVisible = false;
			this->dataGridEnrollment->RowHeadersWidth = 51;
			this->dataGridEnrollment->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridEnrollment->Size = System::Drawing::Size(1184, 557);
			this->dataGridEnrollment->TabIndex = 1;
			// 
			// panel1
			// 
			this->panel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->btnDeleteEnrollment);
			this->panel1->Controls->Add(this->btnExitEnrollment);
			this->panel1->Controls->Add(this->btnAddEnrollment);
			this->panel1->Location = System::Drawing::Point(0, 1);
			this->panel1->Margin = System::Windows::Forms::Padding(4);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1184, 49);
			this->panel1->TabIndex = 0;
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(1068, 17);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(43, 17);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Drop";
			// 
			// btnDeleteEnrollment
			// 
			this->btnDeleteEnrollment->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btnDeleteEnrollment->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnDeleteEnrollment.BackgroundImage")));
			this->btnDeleteEnrollment->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->btnDeleteEnrollment->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnDeleteEnrollment->Location = System::Drawing::Point(1009, 7);
			this->btnDeleteEnrollment->Margin = System::Windows::Forms::Padding(4);
			this->btnDeleteEnrollment->Name = L"btnDeleteEnrollment";
			this->btnDeleteEnrollment->Size = System::Drawing::Size(51, 39);
			this->btnDeleteEnrollment->TabIndex = 4;
			this->btnDeleteEnrollment->TabStop = false;
			this->btnDeleteEnrollment->Click += gcnew System::EventHandler(this, &enrollment::btnDeleteEnrollment_Click);
			// 
			// btnExitEnrollment
			// 
			this->btnExitEnrollment->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btnExitEnrollment->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnExitEnrollment.BackgroundImage")));
			this->btnExitEnrollment->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btnExitEnrollment->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnExitEnrollment->Location = System::Drawing::Point(1139, 0);
			this->btnExitEnrollment->Margin = System::Windows::Forms::Padding(4);
			this->btnExitEnrollment->Name = L"btnExitEnrollment";
			this->btnExitEnrollment->Size = System::Drawing::Size(47, 42);
			this->btnExitEnrollment->TabIndex = 1;
			this->btnExitEnrollment->TabStop = false;
			this->btnExitEnrollment->Click += gcnew System::EventHandler(this, &enrollment::btnExitEnrollment_Click);
			// 
			// btnAddEnrollment
			// 
			this->btnAddEnrollment->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->btnAddEnrollment->FlatAppearance->BorderSize = 0;
			this->btnAddEnrollment->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnAddEnrollment->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAddEnrollment->Location = System::Drawing::Point(0, 6);
			this->btnAddEnrollment->Margin = System::Windows::Forms::Padding(4);
			this->btnAddEnrollment->Name = L"btnAddEnrollment";
			this->btnAddEnrollment->Size = System::Drawing::Size(137, 36);
			this->btnAddEnrollment->TabIndex = 0;
			this->btnAddEnrollment->Text = L"New Enrollee";
			this->btnAddEnrollment->UseVisualStyleBackColor = false;
			this->btnAddEnrollment->Click += gcnew System::EventHandler(this, &enrollment::btnAddEnrollment_Click);
			// 
			// enrollment
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1200, 645);
			this->Controls->Add(this->tabControl1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"enrollment";
			this->Text = L"enrollment";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &enrollment::enrollment_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->panelEnrollmentAddStudent->ResumeLayout(false);
			this->tabControl3->ResumeLayout(false);
			this->tabPage3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridEnrollmentStudent))->EndInit();
			this->panel5->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnCancelEnrollmentAddStudent))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnEnrollmetAddStudent))->EndInit();
			this->panelEnrollmentAddSection->ResumeLayout(false);
			this->tabControl2->ResumeLayout(false);
			this->tabPage2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridEnrollmentSection))->EndInit();
			this->panel4->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnHideEnrollmentStudent))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnEnrollmentAddStudent))->EndInit();
			this->panelEnrollment->ResumeLayout(false);
			this->panelEnrollment->PerformLayout();
			this->flowLayoutPanel1->ResumeLayout(false);
			this->flowLayoutPanel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnShowEnrollmentStudent))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnShowEnrollmentSection))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridEnrollment))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnDeleteEnrollment))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnExitEnrollment))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

String^ connString = "Server = localhost; Port = 3306; Database = enrollment_db; UID = root; Password = root";
MySqlConnection^ conn = gcnew MySqlConnection(connString);

void activeAcademicYear() {

	try
	{
		conn->Open();

		MySqlDataAdapter^ adapterActiveAY = gcnew MySqlDataAdapter("SELECT academic_year_code FROM tblacademicyear WHERE academic_year_status = 'Active'", conn);
		DataTable^ tableActiveAY = gcnew DataTable();

		adapterActiveAY->Fill(tableActiveAY);

		txtActiveAy->Text = tableActiveAY->Rows[0]->ItemArray[0]->ToString();

		conn->Close();
	}

	catch (Exception^ e)
	{
		(void) e;
	}
}

void populateGridEnrollment() {

	try
	{
		conn->Open();

		MySqlDataAdapter^ adapterEnrollment = gcnew MySqlDataAdapter("SELECT * FROM venrollment", conn);
		DataTable^ tableEnrollment = gcnew DataTable();

		adapterEnrollment->Fill(tableEnrollment);

		dataGridEnrollment->DataSource = tableEnrollment;

		conn->Close();
	}

	catch (Exception^ e)
	{
		(void) e;
	}
}

void populateGridEnrollmentStudent() {

	try
	{
		conn->Open();

		MySqlDataAdapter^ adapterEStudent = gcnew MySqlDataAdapter("SELECT lrn, first_name, middle_name, last_name FROM tblstudent", conn);
		DataTable^ tableEStudent = gcnew DataTable();

		adapterEStudent->Fill(tableEStudent);

		dataGridEnrollmentStudent->DataSource = tableEStudent;

		conn->Close();
	}

	catch (Exception^ e)
	{
		(void)e;
	}
}

void populateGridEnrollmentSection() {

	try
	{
		conn->Open();

		MySqlDataAdapter^ adapterESection = gcnew MySqlDataAdapter("SELECT section_id, section_name, grade, adviser FROM vsection", conn);
		DataTable^ tableESection = gcnew DataTable();

		adapterESection->Fill(tableESection);

		dataGridEnrollmentSection->DataSource = tableESection;

		conn->Close();
	}

	catch (Exception^ e)
	{
		(void) e;
	}
}

private: System::Void enrollment_Load(System::Object^ sender, System::EventArgs^ e) {

	activeAcademicYear();
	populateGridEnrollment();
	populateGridEnrollmentStudent();
	populateGridEnrollmentSection();
}

private: System::Void btnAddEnrollment_Click(System::Object^ sender, System::EventArgs^ e) {

	panelEnrollment->Show();
}

private: System::Void btnCancelAddEnrollment_Click(System::Object^ sender, System::EventArgs^ e) {

	panelEnrollment->Hide();
}

private: System::Void btnSaveEnrollment_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ enrollmentLrn = txtEnrollmentLrn->Text;
	int enrollmentSectionID = Convert::ToInt16(txtEnrollmentSectionID->Text);
	String^ enrollmentAY = txtActiveAy->Text;

	try
	{
		conn->Open();

		String^ commStringEnrollmet = "INSERT INTO tblenrollment(lrn, section_id, academic_year_code, enrolled_date) VALUES(@lrn, @section_id, @academic_year_code, NOW())";
		MySqlCommand^ commEnrollment = gcnew MySqlCommand(commStringEnrollmet, conn);

		commEnrollment->Parameters->AddWithValue("@lrn", enrollmentLrn);
		commEnrollment->Parameters->AddWithValue("@section_id", enrollmentSectionID);
		commEnrollment->Parameters->AddWithValue("@academic_year_code", enrollmentAY);

		commEnrollment->ExecuteNonQuery();

		MessageBox::Show("New Enrollee Has Been Added", "Enrollment Management System", MessageBoxButtons::OK);

		conn->Close();

		txtEnrollmentLrn->Clear();
		txtEnrollmentName->Clear();
		txtEnrollmentMiddle->Clear();
		txtEnrollmentLast->Clear();
		txtEnrollmentSectionID->Clear();
		txtEnrollmentSection->Clear();
		txtEnrollmentGrade->Clear();
		txtEnrollmentTeacher->Clear();

		populateGridEnrollment();
	}

	catch (Exception^ e)
	{
		(void) e;
		MessageBox::Show("Error Has Occured While Adding New Enrollee", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}

private: System::Void btnShowEnrollmentSection_Click(System::Object^ sender, System::EventArgs^ e) {

	panelEnrollmentAddSection->Show();
}

private: System::Void btnHideEnrollmentStudent_Click(System::Object^ sender, System::EventArgs^ e) {

	panelEnrollmentAddSection->Hide();
}

private: System::Void btnEnrollmentAddStudent_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ currentESectionID = dataGridEnrollmentSection->Rows[dataGridEnrollmentSection->CurrentCell->RowIndex]->Cells[0]->Value->ToString();

	try
	{
		conn->Open();

		MySqlDataAdapter^ adapterEAddSection = gcnew MySqlDataAdapter("SELECT section_id, section_name, grade, adviser FROM vsection WHERE section_id = " + currentESectionID, conn);
		DataTable^ tableEAddSection = gcnew DataTable();

		adapterEAddSection->Fill(tableEAddSection);

		txtEnrollmentSectionID->Text = tableEAddSection->Rows[0]->ItemArray[0]->ToString();
		txtEnrollmentSection->Text = tableEAddSection->Rows[0]->ItemArray[1]->ToString();
		txtEnrollmentGrade->Text = tableEAddSection->Rows[0]->ItemArray[2]->ToString();
		txtEnrollmentTeacher->Text = tableEAddSection->Rows[0]->ItemArray[3]->ToString();

		conn->Close();

		panelEnrollmentAddSection->Hide();
	}

	catch (Exception^ e)
	{
		(void) e;
	}
} 

private: System::Void btnShowEnrollmentStudent_Click(System::Object^ sender, System::EventArgs^ e) {

	panelEnrollmentAddStudent->Show();
}

private: System::Void btnCancelEnrollmentAddStudent_Click(System::Object^ sender, System::EventArgs^ e) {

	panelEnrollmentAddStudent->Hide();
}

private: System::Void btnEnrollmetAddStudent_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ currentEStudentID = dataGridEnrollmentStudent->Rows[dataGridEnrollmentStudent->CurrentCell->RowIndex]->Cells[0]->Value->ToString();

	try
	{
		conn->Open();

		MySqlDataAdapter^ adapterEAddStudent = gcnew MySqlDataAdapter("SELECT lrn, first_name, middle_name, last_name FROM tblstudent WHERE lrn = " + currentEStudentID, conn);
		DataTable^ tableEAddStudent = gcnew DataTable();

		adapterEAddStudent->Fill(tableEAddStudent);

		txtEnrollmentLrn->Text = tableEAddStudent->Rows[0]->ItemArray[0]->ToString();
		txtEnrollmentName->Text = tableEAddStudent->Rows[0]->ItemArray[1]->ToString();
		txtEnrollmentMiddle->Text = tableEAddStudent->Rows[0]->ItemArray[2]->ToString();
		txtEnrollmentLast->Text = tableEAddStudent->Rows[0]->ItemArray[3]->ToString();

		conn->Close();

		panelEnrollmentAddStudent->Hide();
	}

	catch (Exception^ e)
	{
		(void) e;
	}
}

private: System::Void btnDeleteEnrollment_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ currentEStudentID = dataGridEnrollment->Rows[dataGridEnrollment->CurrentCell->RowIndex]->Cells[1]->Value->ToString();

	if (MessageBox::Show("Are You Sure You Want To Drop LRN '"+ currentEStudentID +"'?", "Question", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == Windows::Forms::DialogResult::Yes)
	{
		try
		{
			conn->Open();

			MySqlCommand^ commDeleteEnrollment = gcnew MySqlCommand("UPDATE tblstudent SET status = 'Dropped' WHERE lrn = " + currentEStudentID, conn);

			commDeleteEnrollment->ExecuteNonQuery();

			MessageBox::Show("LRN '" + currentEStudentID + "' Has Been Dropped", "Enrollment Management System", MessageBoxButtons::OK);

			conn->Close();

			populateGridEnrollment();
		}
		catch (Exception^ e)
		{
			(void)e;
			MessageBox::Show("Error Has Occured While Dropping LRN '" + currentEStudentID + "'", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
}

private: System::Void btnExitEnrollment_Click(System::Object^ sender, System::EventArgs^ e) {

	enrollment::Close();
}
};

}
