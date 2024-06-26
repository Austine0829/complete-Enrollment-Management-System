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
	/// Summary for academicyear
	/// </summary>
	public ref class academicyear : public System::Windows::Forms::Form
	{
	public:
		academicyear(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//

			panelAddAY->Hide();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~academicyear()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabPage^ tabPage1;
	protected:
	private: System::Windows::Forms::Panel^ panelAddAY;
	private: System::Windows::Forms::Button^ btnCancelAddAY;
	private: System::Windows::Forms::Button^ btnSaveAddAY;
	private: System::Windows::Forms::TextBox^ txtAY;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::DataGridView^ dataGridAY;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::PictureBox^ btnCloseAY;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ btnOpenAY;
	private: System::Windows::Forms::PictureBox^ btnExitAY;
	private: System::Windows::Forms::Button^ btnAddAY;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(academicyear::typeid));
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->btnAddAY = (gcnew System::Windows::Forms::Button());
			this->btnExitAY = (gcnew System::Windows::Forms::PictureBox());
			this->btnOpenAY = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnCloseAY = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->dataGridAY = (gcnew System::Windows::Forms::DataGridView());
			this->panelAddAY = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtAY = (gcnew System::Windows::Forms::TextBox());
			this->btnSaveAddAY = (gcnew System::Windows::Forms::Button());
			this->btnCancelAddAY = (gcnew System::Windows::Forms::Button());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1->SuspendLayout();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnExitAY))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnOpenAY))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnCloseAY))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridAY))->BeginInit();
			this->panelAddAY->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->panelAddAY);
			this->tabPage1->Controls->Add(this->dataGridAY);
			this->tabPage1->Controls->Add(this->panel1);
			this->tabPage1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tabPage1->Location = System::Drawing::Point(4, 26);
			this->tabPage1->Margin = System::Windows::Forms::Padding(4);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(4);
			this->tabPage1->Size = System::Drawing::Size(987, 515);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Academic Year";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// panel1
			// 
			this->panel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->btnCloseAY);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->btnOpenAY);
			this->panel1->Controls->Add(this->btnExitAY);
			this->panel1->Controls->Add(this->btnAddAY);
			this->panel1->Location = System::Drawing::Point(0, 1);
			this->panel1->Margin = System::Windows::Forms::Padding(4);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(984, 49);
			this->panel1->TabIndex = 0;
			// 
			// btnAddAY
			// 
			this->btnAddAY->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->btnAddAY->FlatAppearance->BorderSize = 0;
			this->btnAddAY->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnAddAY->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAddAY->Location = System::Drawing::Point(0, 6);
			this->btnAddAY->Margin = System::Windows::Forms::Padding(4);
			this->btnAddAY->Name = L"btnAddAY";
			this->btnAddAY->Size = System::Drawing::Size(177, 36);
			this->btnAddAY->TabIndex = 0;
			this->btnAddAY->Text = L"New Academic Year";
			this->btnAddAY->UseVisualStyleBackColor = false;
			this->btnAddAY->Click += gcnew System::EventHandler(this, &academicyear::btnAddAY_Click);
			// 
			// btnExitAY
			// 
			this->btnExitAY->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btnExitAY->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnExitAY.BackgroundImage")));
			this->btnExitAY->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btnExitAY->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnExitAY->Location = System::Drawing::Point(939, 0);
			this->btnExitAY->Margin = System::Windows::Forms::Padding(4);
			this->btnExitAY->Name = L"btnExitAY";
			this->btnExitAY->Size = System::Drawing::Size(47, 42);
			this->btnExitAY->TabIndex = 1;
			this->btnExitAY->TabStop = false;
			this->btnExitAY->Click += gcnew System::EventHandler(this, &academicyear::btnExitAY_Click);
			// 
			// btnOpenAY
			// 
			this->btnOpenAY->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btnOpenAY->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnOpenAY.BackgroundImage")));
			this->btnOpenAY->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->btnOpenAY->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnOpenAY->Location = System::Drawing::Point(694, 6);
			this->btnOpenAY->Margin = System::Windows::Forms::Padding(4);
			this->btnOpenAY->Name = L"btnOpenAY";
			this->btnOpenAY->Size = System::Drawing::Size(51, 39);
			this->btnOpenAY->TabIndex = 2;
			this->btnOpenAY->TabStop = false;
			this->btnOpenAY->Click += gcnew System::EventHandler(this, &academicyear::btnOpenAY_Click);
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(752, 17);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(47, 17);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Open";
			// 
			// btnCloseAY
			// 
			this->btnCloseAY->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btnCloseAY->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnCloseAY.BackgroundImage")));
			this->btnCloseAY->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->btnCloseAY->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnCloseAY->Location = System::Drawing::Point(810, 6);
			this->btnCloseAY->Margin = System::Windows::Forms::Padding(4);
			this->btnCloseAY->Name = L"btnCloseAY";
			this->btnCloseAY->Size = System::Drawing::Size(51, 39);
			this->btnCloseAY->TabIndex = 4;
			this->btnCloseAY->TabStop = false;
			this->btnCloseAY->Click += gcnew System::EventHandler(this, &academicyear::btnCloseAY_Click);
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
			this->label2->Size = System::Drawing::Size(48, 17);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Close";
			// 
			// dataGridAY
			// 
			this->dataGridAY->AllowUserToAddRows = false;
			this->dataGridAY->AllowUserToDeleteRows = false;
			this->dataGridAY->AllowUserToResizeColumns = false;
			this->dataGridAY->AllowUserToResizeRows = false;
			this->dataGridAY->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGridAY->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridAY->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::DisplayedCells;
			this->dataGridAY->BackgroundColor = System::Drawing::SystemColors::Control;
			this->dataGridAY->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			this->dataGridAY->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridAY->Location = System::Drawing::Point(0, 50);
			this->dataGridAY->Margin = System::Windows::Forms::Padding(4);
			this->dataGridAY->MultiSelect = false;
			this->dataGridAY->Name = L"dataGridAY";
			this->dataGridAY->ReadOnly = true;
			this->dataGridAY->RowHeadersVisible = false;
			this->dataGridAY->RowHeadersWidth = 51;
			this->dataGridAY->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridAY->Size = System::Drawing::Size(984, 462);
			this->dataGridAY->TabIndex = 1;
			// 
			// panelAddAY
			// 
			this->panelAddAY->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->panelAddAY->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panelAddAY->Controls->Add(this->btnCancelAddAY);
			this->panelAddAY->Controls->Add(this->btnSaveAddAY);
			this->panelAddAY->Controls->Add(this->txtAY);
			this->panelAddAY->Controls->Add(this->label3);
			this->panelAddAY->Controls->Add(this->panel3);
			this->panelAddAY->Location = System::Drawing::Point(7, 57);
			this->panelAddAY->Name = L"panelAddAY";
			this->panelAddAY->Size = System::Drawing::Size(267, 128);
			this->panelAddAY->TabIndex = 2;
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
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(4, 37);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(113, 16);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Academic Year";
			// 
			// txtAY
			// 
			this->txtAY->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtAY->Location = System::Drawing::Point(7, 57);
			this->txtAY->Name = L"txtAY";
			this->txtAY->Size = System::Drawing::Size(248, 23);
			this->txtAY->TabIndex = 3;
			// 
			// btnSaveAddAY
			// 
			this->btnSaveAddAY->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->btnSaveAddAY->FlatAppearance->BorderSize = 0;
			this->btnSaveAddAY->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSaveAddAY->Location = System::Drawing::Point(133, 86);
			this->btnSaveAddAY->Name = L"btnSaveAddAY";
			this->btnSaveAddAY->Size = System::Drawing::Size(55, 30);
			this->btnSaveAddAY->TabIndex = 4;
			this->btnSaveAddAY->Text = L"Save";
			this->btnSaveAddAY->UseVisualStyleBackColor = false;
			this->btnSaveAddAY->Click += gcnew System::EventHandler(this, &academicyear::btnSaveAddAY_Click);
			// 
			// btnCancelAddAY
			// 
			this->btnCancelAddAY->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->btnCancelAddAY->FlatAppearance->BorderSize = 0;
			this->btnCancelAddAY->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnCancelAddAY->Location = System::Drawing::Point(194, 86);
			this->btnCancelAddAY->Name = L"btnCancelAddAY";
			this->btnCancelAddAY->Size = System::Drawing::Size(61, 30);
			this->btnCancelAddAY->TabIndex = 5;
			this->btnCancelAddAY->Text = L"Cancel";
			this->btnCancelAddAY->UseVisualStyleBackColor = false;
			this->btnCancelAddAY->Click += gcnew System::EventHandler(this, &academicyear::btnCancelAddAY_Click);
			// 
			// tabControl1
			// 
			this->tabControl1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tabControl1->Location = System::Drawing::Point(3, 2);
			this->tabControl1->Margin = System::Windows::Forms::Padding(4);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(995, 545);
			this->tabControl1->TabIndex = 0;
			// 
			// academicyear
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1000, 550);
			this->Controls->Add(this->tabControl1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"academicyear";
			this->Text = L"academicyear";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &academicyear::academicyear_Load);
			this->tabPage1->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnExitAY))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnOpenAY))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnCloseAY))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridAY))->EndInit();
			this->panelAddAY->ResumeLayout(false);
			this->panelAddAY->PerformLayout();
			this->tabControl1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion

String^ connString = "Server = localhost; Port = 3306; Database = enrollment_db; UID = root; Password = root";
MySqlConnection^ conn = gcnew MySqlConnection(connString);

void populateGridAY() {

	try
	{
		conn->Open();

		MySqlDataAdapter^ adapterAY = gcnew MySqlDataAdapter("SELECT * FROM tblacademicyear", conn);
		DataTable^ tableAY = gcnew DataTable();

		adapterAY->Fill(tableAY);

		dataGridAY->DataSource = tableAY;

		conn->Close();
	}

	catch (Exception^ e)
	{
		(void) e;
	}
}

private: System::Void academicyear_Load(System::Object^ sender, System::EventArgs^ e) {

	populateGridAY();
}

private: System::Void btnAddAY_Click(System::Object^ sender, System::EventArgs^ e) {

	panelAddAY->Show();
}
private: System::Void btnCancelAddAY_Click(System::Object^ sender, System::EventArgs^ e) {

	panelAddAY->Hide();
}
private: System::Void btnSaveAddAY_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ academicYear = txtAY->Text;

	try
	{
		conn->Open();

		MySqlCommand^ commUpdateAddAY = gcnew MySqlCommand("UPDATE tblacademicyear SET academic_year_status = 'Inactive'", conn);

		commUpdateAddAY->ExecuteNonQuery();

		conn->Close();

		conn->Open();

		String^ commStringAddAY = "INSERT INTO tblacademicyear(academic_year_code) VALUES(@academic_year_code)";
		MySqlCommand^ commAddAY = gcnew MySqlCommand(commStringAddAY, conn);

		commAddAY->Parameters->AddWithValue("@academic_year_code", academicYear);

		commAddAY->ExecuteNonQuery();

		MessageBox::Show("New Academic Year Has Been Added", "Enrollment Management System", MessageBoxButtons::OK);

		conn->Close();

		txtAY->Clear();

		populateGridAY();
	}

	catch (Exception^ e)
	{
		(void) e;
		MessageBox::Show("Error Has Occured While Adding New Academic Year", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void btnOpenAY_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ currentAYCode = dataGridAY->Rows[dataGridAY->CurrentCell->RowIndex]->Cells[0]->Value->ToString();

	if (MessageBox::Show("Are You Sure You Want To Open '"+ currentAYCode +"' Academic Year?", "Question", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == Windows::Forms::DialogResult::Yes)
	{
		try
		{
			conn->Open();

			MySqlCommand^ commUpdateOpAY = gcnew MySqlCommand("UPDATE tblacademicyear SET academic_year_status = 'Inactive'", conn);

			commUpdateOpAY->ExecuteNonQuery();

			conn->Close();

			conn->Open();

			MySqlCommand^ commOpAY = gcnew MySqlCommand("UPDATE tblacademicyear SET academic_year_status = 'Active' WHERE academic_year_code = '" + currentAYCode + "' ", conn);

			commOpAY->ExecuteNonQuery();

			conn->Close();

			populateGridAY();
		}

		catch (Exception^ e)
		{
			(void)e;
			MessageBox::Show("Error Has Occured While Opening The Academic Year", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
}
private: System::Void btnCloseAY_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ currentAYCode = dataGridAY->Rows[dataGridAY->CurrentCell->RowIndex]->Cells[0]->Value->ToString();

	if (MessageBox::Show("Are You Sure You Want To Close '"+ currentAYCode +"' Academic Year?", "Question", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == Windows::Forms::DialogResult::Yes)
	{
		try
		{
			conn->Open();

			MySqlCommand^ commCloseAY = gcnew MySqlCommand("UPDATE tblacademicyear SET academic_year_status = 'Inactive' WHERE academic_year_code = '" + currentAYCode + "'", conn);

			commCloseAY->ExecuteNonQuery();

			conn->Close();

			populateGridAY();
		}

		catch (Exception^ e)
		{
			(void)e;
			MessageBox::Show("Error Has Occured While Closing '" + currentAYCode + " Academic Year'", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
}  

private: System::Void btnExitAY_Click(System::Object^ sender, System::EventArgs^ e) {

	academicyear::Close();
}

};
}
