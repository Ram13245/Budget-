#pragma once
#include "Dashboard.h"
#include "Signup.h"

namespace BudgetPP {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for Login
	/// </summary>
	public ref class Login : public System::Windows::Forms::Form
	{
	public:
		Login(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			password_text->PasswordChar = '*';
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Login()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  login_button;
	protected:


	private: System::Windows::Forms::TextBox^  username_text;
	private: System::Windows::Forms::TextBox^  password_text;

	private: System::Windows::Forms::LinkLabel^  signup_button;


	private: System::Windows::Forms::Button^  close_button;
	private: System::Windows::Forms::Panel^  toolbar_panel;
	private: bool mouseDown;
	private: int mouseX = 0, mouseY = 0;
	private: System::Windows::Forms::Button^  min_button;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Login::typeid));
			this->login_button = (gcnew System::Windows::Forms::Button());
			this->username_text = (gcnew System::Windows::Forms::TextBox());
			this->password_text = (gcnew System::Windows::Forms::TextBox());
			this->signup_button = (gcnew System::Windows::Forms::LinkLabel());
			this->close_button = (gcnew System::Windows::Forms::Button());
			this->toolbar_panel = (gcnew System::Windows::Forms::Panel());
			this->min_button = (gcnew System::Windows::Forms::Button());
			this->toolbar_panel->SuspendLayout();
			this->SuspendLayout();
			// 
			// login_button
			// 
			this->login_button->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->login_button->BackColor = System::Drawing::Color::Transparent;
			this->login_button->Cursor = System::Windows::Forms::Cursors::Hand;
			this->login_button->FlatAppearance->BorderSize = 0;
			this->login_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->login_button->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->login_button->ForeColor = System::Drawing::Color::White;
			this->login_button->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"login_button.Image")));
			this->login_button->Location = System::Drawing::Point(269, 314);
			this->login_button->Name = L"login_button";
			this->login_button->Size = System::Drawing::Size(92, 37);
			this->login_button->TabIndex = 0;
			this->login_button->UseVisualStyleBackColor = false;
			this->login_button->Click += gcnew System::EventHandler(this, &Login::login_button_Click);
			// 
			// username_text
			// 
			this->username_text->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)), static_cast<System::Int32>(static_cast<System::Byte>(54)),
				static_cast<System::Int32>(static_cast<System::Byte>(54)));
			this->username_text->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->username_text->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->username_text->ForeColor = System::Drawing::Color::White;
			this->username_text->Location = System::Drawing::Point(224, 204);
			this->username_text->Name = L"username_text";
			this->username_text->Size = System::Drawing::Size(185, 18);
			this->username_text->TabIndex = 3;
			// 
			// password_text
			// 
			this->password_text->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->password_text->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)), static_cast<System::Int32>(static_cast<System::Byte>(54)),
				static_cast<System::Int32>(static_cast<System::Byte>(54)));
			this->password_text->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->password_text->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->password_text->ForeColor = System::Drawing::Color::White;
			this->password_text->Location = System::Drawing::Point(224, 260);
			this->password_text->Name = L"password_text";
			this->password_text->Size = System::Drawing::Size(185, 18);
			this->password_text->TabIndex = 4;
			// 
			// signup_button
			// 
			this->signup_button->AutoSize = true;
			this->signup_button->BackColor = System::Drawing::Color::Transparent;
			this->signup_button->LinkBehavior = System::Windows::Forms::LinkBehavior::HoverUnderline;
			this->signup_button->LinkColor = System::Drawing::Color::White;
			this->signup_button->Location = System::Drawing::Point(290, 395);
			this->signup_button->Name = L"signup_button";
			this->signup_button->Size = System::Drawing::Size(56, 13);
			this->signup_button->TabIndex = 6;
			this->signup_button->TabStop = true;
			this->signup_button->Text = L"SIGN UP";
			this->signup_button->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Login::signup_button_LinkClicked);
			// 
			// close_button
			// 
			this->close_button->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->close_button->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"close_button.BackgroundImage")));
			this->close_button->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->close_button->FlatAppearance->BorderSize = 0;
			this->close_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->close_button->Location = System::Drawing::Point(574, 10);
			this->close_button->Name = L"close_button";
			this->close_button->Size = System::Drawing::Size(26, 22);
			this->close_button->TabIndex = 8;
			this->close_button->UseVisualStyleBackColor = true;
			this->close_button->Click += gcnew System::EventHandler(this, &Login::close_button_Click);
			// 
			// toolbar_panel
			// 
			this->toolbar_panel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->toolbar_panel->BackColor = System::Drawing::Color::Transparent;
			this->toolbar_panel->Controls->Add(this->min_button);
			this->toolbar_panel->Controls->Add(this->close_button);
			this->toolbar_panel->Cursor = System::Windows::Forms::Cursors::Hand;
			this->toolbar_panel->Location = System::Drawing::Point(-3, -9);
			this->toolbar_panel->Name = L"toolbar_panel";
			this->toolbar_panel->Size = System::Drawing::Size(603, 40);
			this->toolbar_panel->TabIndex = 9;
			this->toolbar_panel->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Login::toolbar_panel_MouseDown);
			this->toolbar_panel->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Login::toolbar_panel_MouseMove);
			this->toolbar_panel->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &Login::toolbar_panel_MouseUp);
			// 
			// min_button
			// 
			this->min_button->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->min_button->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"min_button.BackgroundImage")));
			this->min_button->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->min_button->FlatAppearance->BorderSize = 0;
			this->min_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->min_button->Location = System::Drawing::Point(542, 10);
			this->min_button->Name = L"min_button";
			this->min_button->Size = System::Drawing::Size(26, 22);
			this->min_button->TabIndex = 12;
			this->min_button->UseVisualStyleBackColor = true;
			this->min_button->Click += gcnew System::EventHandler(this, &Login::min_button_Click);
			// 
			// Login
			// 
			this->AcceptButton = this->login_button;
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(600, 450);
			this->ControlBox = false;
			this->Controls->Add(this->signup_button);
			this->Controls->Add(this->password_text);
			this->Controls->Add(this->username_text);
			this->Controls->Add(this->login_button);
			this->Controls->Add(this->toolbar_panel);
			this->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->MaximizeBox = false;
			this->Name = L"Login";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->toolbar_panel->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void login_button_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Hide();
		Dashboard^ dashboardScreen = gcnew Dashboard();
		dashboardScreen->ShowDialog();
		//String^ constring = L"datasource = localhost; port = 3306; username = root; password = eniac";
		//MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
		//MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select * from bplusplus.user_information where username = '" + this->username_text->Text + "' and password = '" + this->password_text->Text + "';", conDataBase);
		//MySqlDataReader^ myReader;
		//try {
		//	conDataBase->Open();
		//	myReader = cmdDataBase->ExecuteReader();
		//	int count = 0;
		//	while (myReader->Read()) {
		//		count = count + 1;
		//	}
		//	if (count == 1) {
		//		//MessageBox::Show("Username and password are correct!");
		//		this->Hide();
		//		Dashboard^ dashboardScreen = gcnew Dashboard();
		//		dashboardScreen->ShowDialog();
		//	}
		//	else if (count>1) {
		//		MessageBox::Show("Duplicate username and password ...Access denied.");
		//	}
		//	else {
		//		MessageBox::Show("Username and password are not correct ...Please try again.");
		//	}
		/*}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}*/
	}
	private: System::Void signup_button_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
		this->Hide();
		Signup^ signupScreen = gcnew Signup(this);
		signupScreen->Show();
	}
	
	private: System::Void toolbar_panel_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		mouseDown = true;
	}
	private: System::Void toolbar_panel_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		if (mouseDown) {
			mouseX = MousePosition.X - 200;
			mouseY = MousePosition.Y - 40;
			this->SetDesktopLocation(mouseX,mouseY);
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
	

};
}
