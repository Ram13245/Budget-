#pragma once
#include "Dashboard.h"

namespace BudgetPP {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	private: System::Windows::Forms::Label^  username_label;
	private: System::Windows::Forms::Label^  password_label;
	private: System::Windows::Forms::TextBox^  username_text;
	private: System::Windows::Forms::TextBox^  password_text;
	private: System::Windows::Forms::PictureBox^  logo_picture;
	private: System::Windows::Forms::LinkLabel^  linkLabel1;
	private: System::Windows::Forms::Label^  name_label;

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
			this->username_label = (gcnew System::Windows::Forms::Label());
			this->password_label = (gcnew System::Windows::Forms::Label());
			this->username_text = (gcnew System::Windows::Forms::TextBox());
			this->password_text = (gcnew System::Windows::Forms::TextBox());
			this->logo_picture = (gcnew System::Windows::Forms::PictureBox());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->name_label = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->logo_picture))->BeginInit();
			this->SuspendLayout();
			// 
			// login_button
			// 
			this->login_button->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->login_button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(195)),
				static_cast<System::Int32>(static_cast<System::Byte>(179)));
			this->login_button->FlatAppearance->BorderSize = 0;
			this->login_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->login_button->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->login_button->ForeColor = System::Drawing::Color::White;
			this->login_button->Location = System::Drawing::Point(290, 221);
			this->login_button->Name = L"login_button";
			this->login_button->Size = System::Drawing::Size(139, 35);
			this->login_button->TabIndex = 0;
			this->login_button->Text = L"login";
			this->login_button->UseVisualStyleBackColor = false;
			this->login_button->Click += gcnew System::EventHandler(this, &Login::login_button_Click);
			// 
			// username_label
			// 
			this->username_label->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->username_label->AutoSize = true;
			this->username_label->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->username_label->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(152)),
				static_cast<System::Int32>(static_cast<System::Byte>(172)));
			this->username_label->Location = System::Drawing::Point(188, 133);
			this->username_label->Name = L"username_label";
			this->username_label->Size = System::Drawing::Size(96, 18);
			this->username_label->TabIndex = 1;
			this->username_label->Text = L"username";
			// 
			// password_label
			// 
			this->password_label->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->password_label->AutoSize = true;
			this->password_label->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->password_label->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(152)),
				static_cast<System::Int32>(static_cast<System::Byte>(172)));
			this->password_label->Location = System::Drawing::Point(190, 177);
			this->password_label->Name = L"password_label";
			this->password_label->Size = System::Drawing::Size(94, 18);
			this->password_label->TabIndex = 2;
			this->password_label->Text = L"password";
			// 
			// username_text
			// 
			this->username_text->BackColor = System::Drawing::Color::Silver;
			this->username_text->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->username_text->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->username_text->ForeColor = System::Drawing::Color::White;
			this->username_text->Location = System::Drawing::Point(290, 133);
			this->username_text->Name = L"username_text";
			this->username_text->Size = System::Drawing::Size(139, 20);
			this->username_text->TabIndex = 3;
			// 
			// password_text
			// 
			this->password_text->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->password_text->BackColor = System::Drawing::Color::Silver;
			this->password_text->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->password_text->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->password_text->ForeColor = System::Drawing::Color::White;
			this->password_text->Location = System::Drawing::Point(290, 175);
			this->password_text->Name = L"password_text";
			this->password_text->Size = System::Drawing::Size(139, 20);
			this->password_text->TabIndex = 4;
			// 
			// logo_picture
			// 
			this->logo_picture->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"logo_picture.Image")));
			this->logo_picture->Location = System::Drawing::Point(43, 119);
			this->logo_picture->Name = L"logo_picture";
			this->logo_picture->Size = System::Drawing::Size(118, 105);
			this->logo_picture->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->logo_picture->TabIndex = 5;
			this->logo_picture->TabStop = false;
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->LinkBehavior = System::Windows::Forms::LinkBehavior::HoverUnderline;
			this->linkLabel1->LinkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(152)),
				static_cast<System::Int32>(static_cast<System::Byte>(172)));
			this->linkLabel1->Location = System::Drawing::Point(378, 264);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(48, 13);
			this->linkLabel1->TabIndex = 6;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"sign up";
			// 
			// name_label
			// 
			this->name_label->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->name_label->AutoSize = true;
			this->name_label->Font = (gcnew System::Drawing::Font(L"Verdana", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->name_label->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(195)),
				static_cast<System::Int32>(static_cast<System::Byte>(179)));
			this->name_label->Location = System::Drawing::Point(38, 227);
			this->name_label->Name = L"name_label";
			this->name_label->Size = System::Drawing::Size(132, 25);
			this->name_label->TabIndex = 7;
			this->name_label->Text = L"budget++";
			// 
			// Login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(471, 381);
			this->Controls->Add(this->name_label);
			this->Controls->Add(this->linkLabel1);
			this->Controls->Add(this->logo_picture);
			this->Controls->Add(this->password_text);
			this->Controls->Add(this->username_text);
			this->Controls->Add(this->password_label);
			this->Controls->Add(this->username_label);
			this->Controls->Add(this->login_button);
			this->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->MaximizeBox = false;
			this->Name = L"Login";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Budget++";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->logo_picture))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void login_button_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Hide();
		Dashboard^ dashboardScreen = gcnew Dashboard();
		dashboardScreen->Show();
	}
	
};
}
