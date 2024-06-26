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
	/// Summary for fees
	/// </summary>
	public ref class fees : public System::Windows::Forms::Form
	{
	public:
		fees(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			panelAddFees->Hide();
			panelUpdateFees->Hide();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~fees()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::Panel^ panelAddFees;

	private: System::Windows::Forms::Button^ btnCancelAddFees;

	private: System::Windows::Forms::Button^ btnSaveAddFees;

	private: System::Windows::Forms::TextBox^ txtFeesDesc;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::DataGridView^ dataGridFees;

	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::PictureBox^ btnDeleteFees;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ btnEditFees;
	private: System::Windows::Forms::PictureBox^ btnExitFees;


	private: System::Windows::Forms::Button^ btnAddFees;
	private: System::Windows::Forms::TextBox^ txtFeesAmount;


	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Panel^ panelUpdateFees;

	private: System::Windows::Forms::TextBox^ txtUpdateFeesAmount;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ btnCancelUpdateFees;

	private: System::Windows::Forms::Button^ btnUpdateFees;

	private: System::Windows::Forms::TextBox^ txtUpdateFeesDesc;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Panel^ panel4;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(fees::typeid));
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->panelUpdateFees = (gcnew System::Windows::Forms::Panel());
			this->txtUpdateFeesAmount = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->btnCancelUpdateFees = (gcnew System::Windows::Forms::Button());
			this->btnUpdateFees = (gcnew System::Windows::Forms::Button());
			this->txtUpdateFeesDesc = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panelAddFees = (gcnew System::Windows::Forms::Panel());
			this->txtFeesAmount = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->btnCancelAddFees = (gcnew System::Windows::Forms::Button());
			this->btnSaveAddFees = (gcnew System::Windows::Forms::Button());
			this->txtFeesDesc = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->dataGridFees = (gcnew System::Windows::Forms::DataGridView());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->btnDeleteFees = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnEditFees = (gcnew System::Windows::Forms::PictureBox());
			this->btnExitFees = (gcnew System::Windows::Forms::PictureBox());
			this->btnAddFees = (gcnew System::Windows::Forms::Button());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->panelUpdateFees->SuspendLayout();
			this->panelAddFees->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridFees))->BeginInit();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnDeleteFees))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnEditFees))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnExitFees))->BeginInit();
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
			this->tabControl1->TabIndex = 1;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->panelUpdateFees);
			this->tabPage1->Controls->Add(this->panelAddFees);
			this->tabPage1->Controls->Add(this->dataGridFees);
			this->tabPage1->Controls->Add(this->panel1);
			this->tabPage1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tabPage1->Location = System::Drawing::Point(4, 26);
			this->tabPage1->Margin = System::Windows::Forms::Padding(4);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(4);
			this->tabPage1->Size = System::Drawing::Size(987, 515);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Fees";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// panelUpdateFees
			// 
			this->panelUpdateFees->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->panelUpdateFees->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panelUpdateFees->Controls->Add(this->txtUpdateFeesAmount);
			this->panelUpdateFees->Controls->Add(this->label5);
			this->panelUpdateFees->Controls->Add(this->btnCancelUpdateFees);
			this->panelUpdateFees->Controls->Add(this->btnUpdateFees);
			this->panelUpdateFees->Controls->Add(this->txtUpdateFeesDesc);
			this->panelUpdateFees->Controls->Add(this->label6);
			this->panelUpdateFees->Controls->Add(this->panel4);
			this->panelUpdateFees->Location = System::Drawing::Point(280, 58);
			this->panelUpdateFees->Name = L"panelUpdateFees";
			this->panelUpdateFees->Size = System::Drawing::Size(267, 187);
			this->panelUpdateFees->TabIndex = 3;
			// 
			// txtUpdateFeesAmount
			// 
			this->txtUpdateFeesAmount->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtUpdateFeesAmount->Location = System::Drawing::Point(7, 110);
			this->txtUpdateFeesAmount->Name = L"txtUpdateFeesAmount";
			this->txtUpdateFeesAmount->Size = System::Drawing::Size(248, 23);
			this->txtUpdateFeesAmount->TabIndex = 7;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(4, 91);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(58, 16);
			this->label5->TabIndex = 6;
			this->label5->Text = L"Amount";
			// 
			// btnCancelUpdateFees
			// 
			this->btnCancelUpdateFees->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->btnCancelUpdateFees->FlatAppearance->BorderSize = 0;
			this->btnCancelUpdateFees->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnCancelUpdateFees->Location = System::Drawing::Point(185, 143);
			this->btnCancelUpdateFees->Name = L"btnCancelUpdateFees";
			this->btnCancelUpdateFees->Size = System::Drawing::Size(70, 30);
			this->btnCancelUpdateFees->TabIndex = 5;
			this->btnCancelUpdateFees->Text = L"Cancel";
			this->btnCancelUpdateFees->UseVisualStyleBackColor = false;
			this->btnCancelUpdateFees->Click += gcnew System::EventHandler(this, &fees::btnCancelUpdateFees_Click);
			// 
			// btnUpdateFees
			// 
			this->btnUpdateFees->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->btnUpdateFees->FlatAppearance->BorderSize = 0;
			this->btnUpdateFees->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnUpdateFees->Location = System::Drawing::Point(111, 142);
			this->btnUpdateFees->Name = L"btnUpdateFees";
			this->btnUpdateFees->Size = System::Drawing::Size(68, 30);
			this->btnUpdateFees->TabIndex = 4;
			this->btnUpdateFees->Text = L"Update";
			this->btnUpdateFees->UseVisualStyleBackColor = false;
			this->btnUpdateFees->Click += gcnew System::EventHandler(this, &fees::btnUpdateFees_Click);
			// 
			// txtUpdateFeesDesc
			// 
			this->txtUpdateFeesDesc->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtUpdateFeesDesc->Location = System::Drawing::Point(7, 57);
			this->txtUpdateFeesDesc->Name = L"txtUpdateFeesDesc";
			this->txtUpdateFeesDesc->Size = System::Drawing::Size(248, 23);
			this->txtUpdateFeesDesc->TabIndex = 3;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(4, 37);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(125, 16);
			this->label6->TabIndex = 2;
			this->label6->Text = L"Fees Description";
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::Gray;
			this->panel4->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel4->Location = System::Drawing::Point(0, 0);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(265, 30);
			this->panel4->TabIndex = 1;
			// 
			// panelAddFees
			// 
			this->panelAddFees->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->panelAddFees->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panelAddFees->Controls->Add(this->txtFeesAmount);
			this->panelAddFees->Controls->Add(this->label4);
			this->panelAddFees->Controls->Add(this->btnCancelAddFees);
			this->panelAddFees->Controls->Add(this->btnSaveAddFees);
			this->panelAddFees->Controls->Add(this->txtFeesDesc);
			this->panelAddFees->Controls->Add(this->label3);
			this->panelAddFees->Controls->Add(this->panel3);
			this->panelAddFees->Location = System::Drawing::Point(7, 57);
			this->panelAddFees->Name = L"panelAddFees";
			this->panelAddFees->Size = System::Drawing::Size(267, 187);
			this->panelAddFees->TabIndex = 2;
			// 
			// txtFeesAmount
			// 
			this->txtFeesAmount->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtFeesAmount->Location = System::Drawing::Point(7, 110);
			this->txtFeesAmount->Name = L"txtFeesAmount";
			this->txtFeesAmount->Size = System::Drawing::Size(248, 23);
			this->txtFeesAmount->TabIndex = 7;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(4, 91);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(58, 16);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Amount";
			// 
			// btnCancelAddFees
			// 
			this->btnCancelAddFees->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->btnCancelAddFees->FlatAppearance->BorderSize = 0;
			this->btnCancelAddFees->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnCancelAddFees->Location = System::Drawing::Point(184, 143);
			this->btnCancelAddFees->Name = L"btnCancelAddFees";
			this->btnCancelAddFees->Size = System::Drawing::Size(71, 30);
			this->btnCancelAddFees->TabIndex = 5;
			this->btnCancelAddFees->Text = L"Cancel";
			this->btnCancelAddFees->UseVisualStyleBackColor = false;
			this->btnCancelAddFees->Click += gcnew System::EventHandler(this, &fees::btnCancelAddFees_Click);
			// 
			// btnSaveAddFees
			// 
			this->btnSaveAddFees->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->btnSaveAddFees->FlatAppearance->BorderSize = 0;
			this->btnSaveAddFees->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSaveAddFees->Location = System::Drawing::Point(123, 143);
			this->btnSaveAddFees->Name = L"btnSaveAddFees";
			this->btnSaveAddFees->Size = System::Drawing::Size(55, 30);
			this->btnSaveAddFees->TabIndex = 4;
			this->btnSaveAddFees->Text = L"Save";
			this->btnSaveAddFees->UseVisualStyleBackColor = false;
			this->btnSaveAddFees->Click += gcnew System::EventHandler(this, &fees::btnSaveAddFees_Click);
			// 
			// txtFeesDesc
			// 
			this->txtFeesDesc->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtFeesDesc->Location = System::Drawing::Point(7, 57);
			this->txtFeesDesc->Name = L"txtFeesDesc";
			this->txtFeesDesc->Size = System::Drawing::Size(248, 23);
			this->txtFeesDesc->TabIndex = 3;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(4, 37);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(125, 16);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Fees Description";
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::Gray;
			this->panel3->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel3->Location = System::Drawing::Point(0, 0);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(265, 30);
			this->panel3->TabIndex = 1;
			// 
			// dataGridFees
			// 
			this->dataGridFees->AllowUserToAddRows = false;
			this->dataGridFees->AllowUserToDeleteRows = false;
			this->dataGridFees->AllowUserToResizeColumns = false;
			this->dataGridFees->AllowUserToResizeRows = false;
			this->dataGridFees->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGridFees->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridFees->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::DisplayedCells;
			this->dataGridFees->BackgroundColor = System::Drawing::SystemColors::Control;
			this->dataGridFees->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			this->dataGridFees->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridFees->Location = System::Drawing::Point(0, 50);
			this->dataGridFees->Margin = System::Windows::Forms::Padding(4);
			this->dataGridFees->MultiSelect = false;
			this->dataGridFees->Name = L"dataGridFees";
			this->dataGridFees->ReadOnly = true;
			this->dataGridFees->RowHeadersVisible = false;
			this->dataGridFees->RowHeadersWidth = 51;
			this->dataGridFees->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridFees->Size = System::Drawing::Size(984, 462);
			this->dataGridFees->TabIndex = 1;
			// 
			// panel1
			// 
			this->panel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->btnDeleteFees);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->btnEditFees);
			this->panel1->Controls->Add(this->btnExitFees);
			this->panel1->Controls->Add(this->btnAddFees);
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
			// btnDeleteFees
			// 
			this->btnDeleteFees->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btnDeleteFees->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnDeleteFees.BackgroundImage")));
			this->btnDeleteFees->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->btnDeleteFees->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnDeleteFees->Location = System::Drawing::Point(809, 6);
			this->btnDeleteFees->Margin = System::Windows::Forms::Padding(4);
			this->btnDeleteFees->Name = L"btnDeleteFees";
			this->btnDeleteFees->Size = System::Drawing::Size(51, 39);
			this->btnDeleteFees->TabIndex = 4;
			this->btnDeleteFees->TabStop = false;
			this->btnDeleteFees->Click += gcnew System::EventHandler(this, &fees::btnDeleteFees_Click);
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
			// btnEditFees
			// 
			this->btnEditFees->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btnEditFees->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnEditFees.BackgroundImage")));
			this->btnEditFees->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->btnEditFees->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnEditFees->Location = System::Drawing::Point(706, 6);
			this->btnEditFees->Margin = System::Windows::Forms::Padding(4);
			this->btnEditFees->Name = L"btnEditFees";
			this->btnEditFees->Size = System::Drawing::Size(51, 39);
			this->btnEditFees->TabIndex = 2;
			this->btnEditFees->TabStop = false;
			this->btnEditFees->Click += gcnew System::EventHandler(this, &fees::btnEditFees_Click);
			// 
			// btnExitFees
			// 
			this->btnExitFees->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btnExitFees->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnExitFees.BackgroundImage")));
			this->btnExitFees->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btnExitFees->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnExitFees->Location = System::Drawing::Point(939, 0);
			this->btnExitFees->Margin = System::Windows::Forms::Padding(4);
			this->btnExitFees->Name = L"btnExitFees";
			this->btnExitFees->Size = System::Drawing::Size(47, 42);
			this->btnExitFees->TabIndex = 1;
			this->btnExitFees->TabStop = false;
			this->btnExitFees->Click += gcnew System::EventHandler(this, &fees::btnExitFees_Click);
			// 
			// btnAddFees
			// 
			this->btnAddFees->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->btnAddFees->FlatAppearance->BorderSize = 0;
			this->btnAddFees->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnAddFees->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAddFees->Location = System::Drawing::Point(0, 6);
			this->btnAddFees->Margin = System::Windows::Forms::Padding(4);
			this->btnAddFees->Name = L"btnAddFees";
			this->btnAddFees->Size = System::Drawing::Size(110, 36);
			this->btnAddFees->TabIndex = 0;
			this->btnAddFees->Text = L"New Fees";
			this->btnAddFees->UseVisualStyleBackColor = false;
			this->btnAddFees->Click += gcnew System::EventHandler(this, &fees::btnAddFees_Click);
			// 
			// fees
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1000, 550);
			this->Controls->Add(this->tabControl1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"fees";
			this->Text = L"fees";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &fees::fees_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->panelUpdateFees->ResumeLayout(false);
			this->panelUpdateFees->PerformLayout();
			this->panelAddFees->ResumeLayout(false);
			this->panelAddFees->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridFees))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnDeleteFees))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnEditFees))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnExitFees))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

String^ connString = "Server = localhost; Port = 3306; Database = enrollment_db; UID = root; Password = root";
MySqlConnection^ conn = gcnew MySqlConnection(connString);

void populateGridFees() {

	try
	{
		conn->Open();

		MySqlDataAdapter^ adapterFees = gcnew MySqlDataAdapter("SELECT * FROM tblfees", conn);
		DataTable^ tableFees = gcnew DataTable();

		adapterFees->Fill(tableFees);

		dataGridFees->DataSource = tableFees;

		conn->Close();
	}

	catch (Exception^ e)
	{
		(void) e;
	}
}

private: System::Void fees_Load(System::Object^ sender, System::EventArgs^ e) {
	
	populateGridFees();
}

private: System::Void btnAddFees_Click(System::Object^ sender, System::EventArgs^ e) {

	panelAddFees->Show();
}
private: System::Void btnCancelAddFees_Click(System::Object^ sender, System::EventArgs^ e) {

	panelAddFees->Hide();
}
private: System::Void btnSaveAddFees_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ feesDesc = txtFeesDesc->Text;
	int amount = Convert::ToInt32(txtFeesAmount->Text);

	try
	{
		conn->Open();

		String^ commStringFees = "INSERT INTO tblfees(fees_desc, amount) VALUES(@fees_desc, @amount)";
		MySqlCommand^ commFees = gcnew MySqlCommand(commStringFees, conn);

		commFees->Parameters->AddWithValue("@fees_desc", feesDesc);
		commFees->Parameters->AddWithValue("@amount", amount);

		commFees->ExecuteNonQuery();

		MessageBox::Show("New Fees Has Been Added", "Enrollment Management System", MessageBoxButtons::OK);

		conn->Close();

		txtFeesDesc->Clear();
		txtFeesAmount->Clear();
		
		populateGridFees();
	}

	catch (Exception^ e)
	{
		(void) e;
		MessageBox::Show("Error Has Occured While Adding New Fees", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}

private: System::Void btnEditFees_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ currentFeesID = dataGridFees->Rows[dataGridFees->CurrentCell->RowIndex]->Cells[0]->Value->ToString();

	try
	{
		MySqlDataAdapter^ adapterUpdateFees = gcnew MySqlDataAdapter("SELECT fees_desc, amount FROM tblfees WHERE fees_id = " + currentFeesID, conn);
		DataTable^ tableUpdateFees = gcnew DataTable();

		adapterUpdateFees->Fill(tableUpdateFees);

		txtUpdateFeesDesc->Text = tableUpdateFees->Rows[0]->ItemArray[0]->ToString();
		txtUpdateFeesAmount->Text = tableUpdateFees->Rows[0]->ItemArray[1]->ToString();

		conn->Close();

		panelUpdateFees->Show();
	}

	catch (Exception^ e)
	{
		(void)e;
	}

}
private: System::Void btnCancelUpdateFees_Click(System::Object^ sender, System::EventArgs^ e) {

	panelUpdateFees->Hide();
}

private: System::Void btnUpdateFees_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ currentFeesID = dataGridFees->Rows[dataGridFees->CurrentCell->RowIndex]->Cells[0]->Value->ToString();

	String^ updateFeesDesc = txtUpdateFeesDesc->Text;
	int updateFeesAmount = Convert::ToInt32(txtUpdateFeesAmount->Text);

	if (MessageBox::Show("Are You Sure You Want To Update Fees ID '"+ currentFeesID +"'?", "Question", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == Windows::Forms::DialogResult::Yes)
	{
		try
		{
			conn->Open();

			MySqlCommand^ commUpdateFees = gcnew MySqlCommand("UPDATE tblfees SET fees_desc = @fees_desc, amount = @amount WHERE fees_id = " + currentFeesID, conn);

			commUpdateFees->Parameters->AddWithValue("@fees_desc", updateFeesDesc);
			commUpdateFees->Parameters->AddWithValue("@amount", updateFeesAmount);

			commUpdateFees->ExecuteNonQuery();

			MessageBox::Show("Fees ID '" + currentFeesID + "' Has Been Updated", "Enrollment Management System", MessageBoxButtons::OK);

			conn->Close();

			panelUpdateFees->Hide();

			populateGridFees();
		}

		catch (Exception^ e)
		{
			(void)e;
			MessageBox::Show("Error Has Occured While Updating Fees ID '" + currentFeesID + "'", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
}

private: System::Void btnDeleteFees_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ currentFeesID = dataGridFees->Rows[dataGridFees->CurrentCell->RowIndex]->Cells[0]->Value->ToString();

	if (MessageBox::Show("Are You Sure You Want To Delete Fees ID '"+ currentFeesID +"'?", "Question", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == Windows::Forms::DialogResult::Yes)
	{
		try
		{
			conn->Open();

			MySqlCommand^ commDeleteFees = gcnew MySqlCommand("DELETE FROM tblfees WHERE fees_id = " + currentFeesID, conn);

			commDeleteFees->ExecuteNonQuery();

			MessageBox::Show("Fees ID '" + currentFeesID + "' Has Been Deleted", "Enrollment Management System", MessageBoxButtons::OK);

			conn->Close();

			populateGridFees();
		}

		catch (Exception^ e)
		{
			(void)e;
			MessageBox::Show("Error Has Been Occured While Deleting Fees ID '" + currentFeesID + "'", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
}
private: System::Void btnExitFees_Click(System::Object^ sender, System::EventArgs^ e) {

	fees::Close();
}

};
}
