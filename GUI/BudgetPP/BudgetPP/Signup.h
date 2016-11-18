#pragma once

namespace BudgetPP {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for Signup
	/// </summary>
	public ref class Signup : public System::Windows::Forms::Form
	{
	public:
		Signup(System::Windows::Forms::Form ^ loginForm)
		{
			InitializeComponent();
			returnLogin = loginForm;
			//
			//TODO: Add the constructor code here
			//
			password_text->PasswordChar = '*';
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Signup()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Form ^ returnLogin;
	private: System::Windows::Forms::Panel^  toolbar_panel;
	private: System::Windows::Forms::Button^  close_button;
	private: bool mouseDown;
	private: int mouseX = 0, mouseY = 0;
	private: System::Windows::Forms::Button^  min_button;
	private: System::Windows::Forms::Button^  create_button;
	private: System::Windows::Forms::TextBox^  password_text;
	private: System::Windows::Forms::TextBox^  username_text;
	private: System::Windows::Forms::Label^  password_label;
	private: System::Windows::Forms::Label^  username_label;
	protected:


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Signup::typeid));
			this->toolbar_panel = (gcnew System::Windows::Forms::Panel());
			this->min_button = (gcnew System::Windows::Forms::Button());
			this->close_button = (gcnew System::Windows::Forms::Button());
			this->create_button = (gcnew System::Windows::Forms::Button());
			this->password_text = (gcnew System::Windows::Forms::TextBox());
			this->username_text = (gcnew System::Windows::Forms::TextBox());
			this->password_label = (gcnew System::Windows::Forms::Label());
			this->username_label = (gcnew System::Windows::Forms::Label());
			this->toolbar_panel->SuspendLayout();
			this->SuspendLayout();
			// 
			// toolbar_panel
			// 
			this->toolbar_panel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->toolbar_panel->Controls->Add(this->min_button);
			this->toolbar_panel->Controls->Add(this->close_button);
			this->toolbar_panel->Cursor = System::Windows::Forms::Cursors::Hand;
			this->toolbar_panel->Location = System::Drawing::Point(-6, -5);
			this->toolbar_panel->Name = L"toolbar_panel";
			this->toolbar_panel->Size = System::Drawing::Size(423, 37);
			this->toolbar_panel->TabIndex = 10;
			this->toolbar_panel->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Signup::toolbar_panel_MouseDown);
			this->toolbar_panel->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Signup::toolbar_panel_MouseMove);
			this->toolbar_panel->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &Signup::toolbar_panel_MouseUp);
			// 
			// min_button
			// 
			this->min_button->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->min_button->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"min_button.BackgroundImage")));
			this->min_button->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->min_button->FlatAppearance->BorderSize = 0;
			this->min_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->min_button->Location = System::Drawing::Point(357, 7);
			this->min_button->Name = L"min_button";
			this->min_button->Size = System::Drawing::Size(26, 22);
			this->min_button->TabIndex = 11;
			this->min_button->UseVisualStyleBackColor = true;
			this->min_button->Click += gcnew System::EventHandler(this, &Signup::min_button_Click);
			// 
			// close_button
			// 
			this->close_button->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->close_button->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"close_button.BackgroundImage")));
			this->close_button->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->close_button->FlatAppearance->BorderSize = 0;
			this->close_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->close_button->Location = System::Drawing::Point(389, 7);
			this->close_button->Name = L"close_button";
			this->close_button->Size = System::Drawing::Size(26, 22);
			this->close_button->TabIndex = 9;
			this->close_button->UseVisualStyleBackColor = true;
			this->close_button->Click += gcnew System::EventHandler(this, &Signup::close_button_Click);
			// 
			// create_button
			// 
			this->create_button->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->create_button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(195)),
				static_cast<System::Int32>(static_cast<System::Byte>(179)));
			this->create_button->FlatAppearance->BorderSize = 0;
			this->create_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->create_button->Font = (gcnew System::Drawing::Font(L"Verdana", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->create_button->ForeColor = System::Drawing::Color::White;
			this->create_button->Location = System::Drawing::Point(157, 406);
			this->create_button->Name = L"create_button";
			this->create_button->Size = System::Drawing::Size(81, 39);
			this->create_button->TabIndex = 11;
			this->create_button->Text = L"create";
			this->create_button->UseVisualStyleBackColor = false;
			this->create_button->Click += gcnew System::EventHandler(this, &Signup::create_button_Click);
			// 
			// password_text
			// 
			this->password_text->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->password_text->BackColor = System::Drawing::Color::Silver;
			this->password_text->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->password_text->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->password_text->ForeColor = System::Drawing::Color::White;
			this->password_text->Location = System::Drawing::Point(194, 118);
			this->password_text->Name = L"password_text";
			this->password_text->Size = System::Drawing::Size(139, 20);
			this->password_text->TabIndex = 15;
			// 
			// username_text
			// 
			this->username_text->BackColor = System::Drawing::Color::Silver;
			this->username_text->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->username_text->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->username_text->ForeColor = System::Drawing::Color::White;
			this->username_text->Location = System::Drawing::Point(194, 76);
			this->username_text->Name = L"username_text";
			this->username_text->Size = System::Drawing::Size(139, 20);
			this->username_text->TabIndex = 14;
			// 
			// password_label
			// 
			this->password_label->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->password_label->AutoSize = true;
			this->password_label->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->password_label->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(152)),
				static_cast<System::Int32>(static_cast<System::Byte>(172)));
			this->password_label->Location = System::Drawing::Point(94, 120);
			this->password_label->Name = L"password_label";
			this->password_label->Size = System::Drawing::Size(94, 18);
			this->password_label->TabIndex = 13;
			this->password_label->Text = L"password";
			// 
			// username_label
			// 
			this->username_label->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->username_label->AutoSize = true;
			this->username_label->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->username_label->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(152)),
				static_cast<System::Int32>(static_cast<System::Byte>(172)));
			this->username_label->Location = System::Drawing::Point(92, 76);
			this->username_label->Name = L"username_label";
			this->username_label->Size = System::Drawing::Size(96, 18);
			this->username_label->TabIndex = 12;
			this->username_label->Text = L"username";
			// 
			// Signup
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(414, 494);
			this->ControlBox = false;
			this->Controls->Add(this->password_text);
			this->Controls->Add(this->username_text);
			this->Controls->Add(this->password_label);
			this->Controls->Add(this->username_label);
			this->Controls->Add(this->create_button);
			this->Controls->Add(this->toolbar_panel);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Signup";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->toolbar_panel->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void toolbar_panel_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		mouseDown = true;
	}
	private: System::Void toolbar_panel_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		if (mouseDown) {
			mouseX = MousePosition.X - 200;
			mouseY = MousePosition.Y - 40;
			this->SetDesktopLocation(mouseX, mouseY);
		}
	}
	private: System::Void toolbar_panel_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		mouseDown = false;
	}

	private: System::Void min_button_Click(System::Object^  sender, System::EventArgs^  e) {
		this->WindowState = FormWindowState::Minimized;
	}
	private: System::Void close_button_Click(System::Object^  sender, System::EventArgs^  e) {
		Application::Exit();
	}

	private: System::Void create_button_Click(System::Object^  sender, System::EventArgs^  e) {
		String^ constring = L"datasource = localhost; port = 3306; username = root; password = eniac";
		MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
		MySqlCommand^ cmdDataBase = gcnew MySqlCommand("insert into bplusplus.user_information (iduser_information,username,password) values('" + this->password_text->Text + "','" + this->username_text->Text + "','" + this->password_text->Text + "');", conDataBase);
		MySqlDataReader^ myReader;
		try {
			conDataBase->Open();
			myReader = cmdDataBase->ExecuteReader();
			this->Hide();
			returnLogin->Show();
			while (myReader->Read()) {
			}
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
	}
};
}
