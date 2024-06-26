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
	/// Summary for billing
	/// </summary>
	public ref class billing : public System::Windows::Forms::Form
	{
	public:
		billing(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			panelBill->Hide();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~billing()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::Panel^ panelBill;

















	private: System::Windows::Forms::TextBox^ txtBillLevel;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ txtBillStudentName;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ btnCancelAddBill;

	private: System::Windows::Forms::Button^ btnSaveBill;

	private: System::Windows::Forms::TextBox^ txtBillEnrollmentID;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::DataGridView^ dataGridBill;

	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::PictureBox^ btnExitBill;



	private: System::Windows::Forms::Button^ btnAddBill;

	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TabControl^ tabControl2;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::DataGridView^ dataGridBillHistory;

	private: System::Windows::Forms::ComboBox^ cbBillFeeDesc;
	private: System::Windows::Forms::TextBox^ txtBillAmount;


	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txtBillAY;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ txtBillSection;
	private: System::Windows::Forms::Label^ lblEFeesID;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(billing::typeid));
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->panelBill = (gcnew System::Windows::Forms::Panel());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->txtBillSection = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtBillAY = (gcnew System::Windows::Forms::TextBox());
			this->tabControl2 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->dataGridBillHistory = (gcnew System::Windows::Forms::DataGridView());
			this->cbBillFeeDesc = (gcnew System::Windows::Forms::ComboBox());
			this->txtBillAmount = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtBillLevel = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txtBillStudentName = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->btnCancelAddBill = (gcnew System::Windows::Forms::Button());
			this->btnSaveBill = (gcnew System::Windows::Forms::Button());
			this->txtBillEnrollmentID = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->lblEFeesID = (gcnew System::Windows::Forms::Label());
			this->dataGridBill = (gcnew System::Windows::Forms::DataGridView());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->btnExitBill = (gcnew System::Windows::Forms::PictureBox());
			this->btnAddBill = (gcnew System::Windows::Forms::Button());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->panelBill->SuspendLayout();
			this->tabControl2->SuspendLayout();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridBillHistory))->BeginInit();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridBill))->BeginInit();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnExitBill))->BeginInit();
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
			this->tabControl1->Location = System::Drawing::Point(3, 5);
			this->tabControl1->Margin = System::Windows::Forms::Padding(4);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1095, 640);
			this->tabControl1->TabIndex = 6;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->panelBill);
			this->tabPage1->Controls->Add(this->dataGridBill);
			this->tabPage1->Controls->Add(this->panel1);
			this->tabPage1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tabPage1->Location = System::Drawing::Point(4, 26);
			this->tabPage1->Margin = System::Windows::Forms::Padding(4);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(4);
			this->tabPage1->Size = System::Drawing::Size(1087, 610);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Payment";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// panelBill
			// 
			this->panelBill->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->panelBill->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panelBill->Controls->Add(this->label6);
			this->panelBill->Controls->Add(this->txtBillSection);
			this->panelBill->Controls->Add(this->label2);
			this->panelBill->Controls->Add(this->txtBillAY);
			this->panelBill->Controls->Add(this->tabControl2);
			this->panelBill->Controls->Add(this->cbBillFeeDesc);
			this->panelBill->Controls->Add(this->txtBillAmount);
			this->panelBill->Controls->Add(this->label7);
			this->panelBill->Controls->Add(this->label1);
			this->panelBill->Controls->Add(this->txtBillLevel);
			this->panelBill->Controls->Add(this->label5);
			this->panelBill->Controls->Add(this->txtBillStudentName);
			this->panelBill->Controls->Add(this->label4);
			this->panelBill->Controls->Add(this->btnCancelAddBill);
			this->panelBill->Controls->Add(this->btnSaveBill);
			this->panelBill->Controls->Add(this->txtBillEnrollmentID);
			this->panelBill->Controls->Add(this->label3);
			this->panelBill->Controls->Add(this->panel3);
			this->panelBill->Location = System::Drawing::Point(7, 57);
			this->panelBill->Name = L"panelBill";
			this->panelBill->Size = System::Drawing::Size(921, 458);
			this->panelBill->TabIndex = 2;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(3, 133);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(59, 16);
			this->label6->TabIndex = 25;
			this->label6->Text = L"Section";
			// 
			// txtBillSection
			// 
			this->txtBillSection->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtBillSection->Enabled = false;
			this->txtBillSection->Location = System::Drawing::Point(6, 152);
			this->txtBillSection->Name = L"txtBillSection";
			this->txtBillSection->Size = System::Drawing::Size(295, 23);
			this->txtBillSection->TabIndex = 24;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(3, 365);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(58, 16);
			this->label2->TabIndex = 23;
			this->label2->Text = L"Amount";
			// 
			// txtBillAY
			// 
			this->txtBillAY->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtBillAY->Enabled = false;
			this->txtBillAY->Location = System::Drawing::Point(6, 252);
			this->txtBillAY->Name = L"txtBillAY";
			this->txtBillAY->Size = System::Drawing::Size(295, 23);
			this->txtBillAY->TabIndex = 22;
			// 
			// tabControl2
			// 
			this->tabControl2->Controls->Add(this->tabPage2);
			this->tabControl2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tabControl2->Location = System::Drawing::Point(307, 36);
			this->tabControl2->Name = L"tabControl2";
			this->tabControl2->SelectedIndex = 0;
			this->tabControl2->Size = System::Drawing::Size(609, 407);
			this->tabControl2->TabIndex = 21;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->dataGridBillHistory);
			this->tabPage2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(601, 378);
			this->tabPage2->TabIndex = 0;
			this->tabPage2->Text = L"Payment History";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// dataGridBillHistory
			// 
			this->dataGridBillHistory->AllowUserToAddRows = false;
			this->dataGridBillHistory->AllowUserToDeleteRows = false;
			this->dataGridBillHistory->AllowUserToResizeColumns = false;
			this->dataGridBillHistory->AllowUserToResizeRows = false;
			this->dataGridBillHistory->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridBillHistory->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::DisplayedCells;
			this->dataGridBillHistory->BackgroundColor = System::Drawing::SystemColors::Control;
			this->dataGridBillHistory->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridBillHistory->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::SingleVertical;
			this->dataGridBillHistory->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			this->dataGridBillHistory->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridBillHistory->Location = System::Drawing::Point(0, 0);
			this->dataGridBillHistory->MultiSelect = false;
			this->dataGridBillHistory->Name = L"dataGridBillHistory";
			this->dataGridBillHistory->ReadOnly = true;
			this->dataGridBillHistory->RowHeadersVisible = false;
			this->dataGridBillHistory->RowHeadersWidth = 51;
			this->dataGridBillHistory->RowTemplate->Height = 24;
			this->dataGridBillHistory->Size = System::Drawing::Size(601, 378);
			this->dataGridBillHistory->TabIndex = 0;
			// 
			// cbBillFeeDesc
			// 
			this->cbBillFeeDesc->FormattingEnabled = true;
			this->cbBillFeeDesc->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Tuition Fee - 25000", L"Registration Fee - 1500" });
			this->cbBillFeeDesc->Location = System::Drawing::Point(6, 332);
			this->cbBillFeeDesc->Name = L"cbBillFeeDesc";
			this->cbBillFeeDesc->Size = System::Drawing::Size(295, 25);
			this->cbBillFeeDesc->TabIndex = 20;
			this->cbBillFeeDesc->SelectedIndexChanged += gcnew System::EventHandler(this, &billing::cbBillFeeDesc_SelectedIndexChanged);
			// 
			// txtBillAmount
			// 
			this->txtBillAmount->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtBillAmount->Enabled = false;
			this->txtBillAmount->Location = System::Drawing::Point(6, 384);
			this->txtBillAmount->Name = L"txtBillAmount";
			this->txtBillAmount->Size = System::Drawing::Size(295, 23);
			this->txtBillAmount->TabIndex = 19;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(3, 313);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(117, 16);
			this->label7->TabIndex = 18;
			this->label7->Text = L"Fee Description";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(3, 233);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(113, 16);
			this->label1->TabIndex = 16;
			this->label1->Text = L"Academic Year";
			// 
			// txtBillLevel
			// 
			this->txtBillLevel->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtBillLevel->Enabled = false;
			this->txtBillLevel->Location = System::Drawing::Point(6, 202);
			this->txtBillLevel->Name = L"txtBillLevel";
			this->txtBillLevel->Size = System::Drawing::Size(295, 23);
			this->txtBillLevel->TabIndex = 9;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(3, 183);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(45, 16);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Level";
			// 
			// txtBillStudentName
			// 
			this->txtBillStudentName->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtBillStudentName->Enabled = false;
			this->txtBillStudentName->Location = System::Drawing::Point(6, 102);
			this->txtBillStudentName->Name = L"txtBillStudentName";
			this->txtBillStudentName->Size = System::Drawing::Size(295, 23);
			this->txtBillStudentName->TabIndex = 7;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(3, 83);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(104, 16);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Student Name";
			// 
			// btnCancelAddBill
			// 
			this->btnCancelAddBill->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->btnCancelAddBill->FlatAppearance->BorderSize = 0;
			this->btnCancelAddBill->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnCancelAddBill->Location = System::Drawing::Point(230, 413);
			this->btnCancelAddBill->Name = L"btnCancelAddBill";
			this->btnCancelAddBill->Size = System::Drawing::Size(71, 30);
			this->btnCancelAddBill->TabIndex = 5;
			this->btnCancelAddBill->Text = L"Cancel";
			this->btnCancelAddBill->UseVisualStyleBackColor = false;
			this->btnCancelAddBill->Click += gcnew System::EventHandler(this, &billing::btnCancelAddBill_Click);
			// 
			// btnSaveBill
			// 
			this->btnSaveBill->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->btnSaveBill->FlatAppearance->BorderSize = 0;
			this->btnSaveBill->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSaveBill->Location = System::Drawing::Point(169, 413);
			this->btnSaveBill->Name = L"btnSaveBill";
			this->btnSaveBill->Size = System::Drawing::Size(55, 30);
			this->btnSaveBill->TabIndex = 4;
			this->btnSaveBill->Text = L"Save";
			this->btnSaveBill->UseVisualStyleBackColor = false;
			this->btnSaveBill->Click += gcnew System::EventHandler(this, &billing::btnSaveBill_Click);
			// 
			// txtBillEnrollmentID
			// 
			this->txtBillEnrollmentID->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtBillEnrollmentID->Enabled = false;
			this->txtBillEnrollmentID->Location = System::Drawing::Point(6, 52);
			this->txtBillEnrollmentID->Name = L"txtBillEnrollmentID";
			this->txtBillEnrollmentID->Size = System::Drawing::Size(295, 23);
			this->txtBillEnrollmentID->TabIndex = 3;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(3, 33);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(99, 16);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Enrollment ID";
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::Gray;
			this->panel3->Controls->Add(this->lblEFeesID);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel3->Location = System::Drawing::Point(0, 0);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(919, 30);
			this->panel3->TabIndex = 1;
			// 
			// lblEFeesID
			// 
			this->lblEFeesID->AutoSize = true;
			this->lblEFeesID->ForeColor = System::Drawing::Color::Gray;
			this->lblEFeesID->Location = System::Drawing::Point(256, 4);
			this->lblEFeesID->Name = L"lblEFeesID";
			this->lblEFeesID->Size = System::Drawing::Size(0, 17);
			this->lblEFeesID->TabIndex = 0;
			// 
			// dataGridBill
			// 
			this->dataGridBill->AllowUserToAddRows = false;
			this->dataGridBill->AllowUserToDeleteRows = false;
			this->dataGridBill->AllowUserToResizeColumns = false;
			this->dataGridBill->AllowUserToResizeRows = false;
			this->dataGridBill->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGridBill->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridBill->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::DisplayedCells;
			this->dataGridBill->BackgroundColor = System::Drawing::SystemColors::Control;
			this->dataGridBill->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			this->dataGridBill->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridBill->Location = System::Drawing::Point(0, 50);
			this->dataGridBill->Margin = System::Windows::Forms::Padding(4);
			this->dataGridBill->MultiSelect = false;
			this->dataGridBill->Name = L"dataGridBill";
			this->dataGridBill->ReadOnly = true;
			this->dataGridBill->RowHeadersVisible = false;
			this->dataGridBill->RowHeadersWidth = 51;
			this->dataGridBill->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridBill->Size = System::Drawing::Size(1084, 557);
			this->dataGridBill->TabIndex = 1;
			// 
			// panel1
			// 
			this->panel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel1->Controls->Add(this->label11);
			this->panel1->Controls->Add(this->btnExitBill);
			this->panel1->Controls->Add(this->btnAddBill);
			this->panel1->Location = System::Drawing::Point(0, 1);
			this->panel1->Margin = System::Windows::Forms::Padding(4);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1084, 49);
			this->panel1->TabIndex = 0;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(56, 17);
			this->label11->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(41, 17);
			this->label11->TabIndex = 6;
			this->label11->Text = L"View";
			// 
			// btnExitBill
			// 
			this->btnExitBill->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btnExitBill->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnExitBill.BackgroundImage")));
			this->btnExitBill->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btnExitBill->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnExitBill->Location = System::Drawing::Point(1039, 0);
			this->btnExitBill->Margin = System::Windows::Forms::Padding(4);
			this->btnExitBill->Name = L"btnExitBill";
			this->btnExitBill->Size = System::Drawing::Size(47, 42);
			this->btnExitBill->TabIndex = 1;
			this->btnExitBill->TabStop = false;
			this->btnExitBill->Click += gcnew System::EventHandler(this, &billing::btnExitBill_Click);
			// 
			// btnAddBill
			// 
			this->btnAddBill->BackColor = System::Drawing::SystemColors::Control;
			this->btnAddBill->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnAddBill.BackgroundImage")));
			this->btnAddBill->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->btnAddBill->FlatAppearance->BorderSize = 0;
			this->btnAddBill->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnAddBill->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAddBill->Location = System::Drawing::Point(0, 6);
			this->btnAddBill->Margin = System::Windows::Forms::Padding(4);
			this->btnAddBill->Name = L"btnAddBill";
			this->btnAddBill->Size = System::Drawing::Size(48, 36);
			this->btnAddBill->TabIndex = 0;
			this->btnAddBill->UseVisualStyleBackColor = false;
			this->btnAddBill->Click += gcnew System::EventHandler(this, &billing::btnAddBill_Click);
			// 
			// billing
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1100, 650);
			this->Controls->Add(this->tabControl1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"billing";
			this->Text = L"billing";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &billing::billing_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->panelBill->ResumeLayout(false);
			this->panelBill->PerformLayout();
			this->tabControl2->ResumeLayout(false);
			this->tabPage2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridBillHistory))->EndInit();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridBill))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnExitBill))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

String^ connString = "Server = localhost; Port = 3306; Database = enrollment_db; UID = root; Password = root";
MySqlConnection^ conn = gcnew MySqlConnection(connString);

void populateGridBill() {

	try
	{
		conn->Open();

		MySqlDataAdapter^ adapterBill = gcnew MySqlDataAdapter("SELECT DISTINCT * FROM vbilling", conn);
		DataTable^ tableBill = gcnew DataTable();

		adapterBill->Fill(tableBill);

		dataGridBill->DataSource = tableBill;

		conn->Close();
	}

	catch (Exception^ e)
	{
		(void) e;
	}
}

void populateGridBillHistory() {

	String^ currentBillEID = dataGridBill->Rows[dataGridBill->CurrentCell->RowIndex]->Cells[0]->Value->ToString();

	try
	{
		conn->Open();

		MySqlDataAdapter^ adapterBillHistory = gcnew MySqlDataAdapter("SELECT fees_id, fees_desc, amount FROM vtuition WHERE enrollment_id = " + currentBillEID, conn);
		DataTable^ tableBillHistory = gcnew DataTable();

		adapterBillHistory->Fill(tableBillHistory);

		dataGridBillHistory->DataSource = tableBillHistory;

		conn->Close();
	}

	catch (Exception^ e)
	{
		(void) e;
	}
}

private: System::Void billing_Load(System::Object^ sender, System::EventArgs^ e) {

	populateGridBill();
	populateGridBillHistory();
}
private: System::Void btnAddBill_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ currentBillEID = dataGridBill->Rows[dataGridBill->CurrentCell->RowIndex]->Cells[0]->Value->ToString();

	try
	{
		conn->Open();

		MySqlDataAdapter^ adapterEnrollInfo = gcnew MySqlDataAdapter("SELECT enrollment_id, student_name, section_name, grade, academic_year_code FROM venrollment WHERE enrollment_id = " + currentBillEID, conn);
		DataTable^ tableEnrollInfo = gcnew DataTable();

		adapterEnrollInfo->Fill(tableEnrollInfo);

		txtBillEnrollmentID->Text = tableEnrollInfo->Rows[0]->ItemArray[0]->ToString();
		txtBillStudentName->Text = tableEnrollInfo->Rows[0]->ItemArray[1]->ToString();
		txtBillSection->Text = tableEnrollInfo->Rows[0]->ItemArray[2]->ToString();
		txtBillLevel->Text = tableEnrollInfo->Rows[0]->ItemArray[3]->ToString();
		txtBillAY->Text = tableEnrollInfo->Rows[0]->ItemArray[4]->ToString();

		conn->Close();
		
		populateGridBillHistory();
		panelBill->Show();
	}

	catch (Exception^ e)
	{
		(void) e;
	}
}
private: System::Void btnCancelAddBill_Click(System::Object^ sender, System::EventArgs^ e) {

	panelBill->Hide();
}
private: System::Void cbBillFeeDesc_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {

	if (cbBillFeeDesc->SelectedIndex == 0)
	{
		txtBillAmount->Clear();
		txtBillAmount->Text += 25000;
	}

	else
	{
		txtBillAmount->Clear();
		txtBillAmount->Text += 1500;
	}
}
private: System::Void btnSaveBill_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ billFeesDesc{};
	int billAmount = Convert::ToInt32(txtBillAmount->Text);

	int billEID = Convert::ToInt16(txtBillEnrollmentID->Text);
	int billFeesID{};

	if (cbBillFeeDesc->SelectedIndex == 0)
	{
		billFeesDesc += "Tuition Fee";
	}

	else
	{
		billFeesDesc += "Registration Fee";
	}

	try
	{
		conn->Open();

		String^ commStringBillFees = "INSERT INTO tblfees(fees_desc, amount) VALUES(@fees_desc, @amount)";
		MySqlCommand^ commBillFees = gcnew MySqlCommand(commStringBillFees, conn);

		commBillFees->Parameters->AddWithValue("@fees_desc", billFeesDesc);
		commBillFees->Parameters->AddWithValue("@amount", billAmount);

		commBillFees->ExecuteNonQuery();

		conn->Close();

		MySqlDataAdapter^ adapterGetFeesID = gcnew MySqlDataAdapter("SELECT fees_id FROM tblfees", conn);
		DataTable^ tableGetFeesID = gcnew DataTable();

		adapterGetFeesID->Fill(tableGetFeesID);

		DataTableReader^ tableGetFeesIDReader = gcnew DataTableReader(tableGetFeesID);
		
		while (tableGetFeesIDReader->Read())
		{
			billFeesID += Convert::ToInt16(tableGetFeesID->Rows[0]->ItemArray[0]->ToString());
		}

		conn->Close();

		conn->Open();

		String^ commStringBill = "INSERT INTO tblbilling(enrollment_id, fees_id) VALUES(@enrollment_id, @fees_id)";
		MySqlCommand^ commBill = gcnew MySqlCommand(commStringBill, conn);

		commBill->Parameters->AddWithValue("@enrollment_id", billEID);
		commBill->Parameters->AddWithValue("@fees_id", billFeesID);

		commBill->ExecuteNonQuery();

		MessageBox::Show("New Bill Has Been Added", "Enrollment Management System", MessageBoxButtons::OK);

		conn->Close();

		cbBillFeeDesc->Text = "";
		txtBillAmount->Text = "";

		populateGridBillHistory();
	}

	catch (Exception^ e)
	{
		(void) e;
		MessageBox::Show("Error Has Occured While Adding Bill In Student History", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void btnExitBill_Click(System::Object^ sender, System::EventArgs^ e) {

	billing::Close();
}
};
}
