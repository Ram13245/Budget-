#pragma once

namespace BudgetPP {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Settings
	/// </summary>
	public ref class Settings : public System::Windows::Forms::Form
	{
		static int i = 2;
	public:
		Settings(void)
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
		~Settings()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  ok_button;
	private: System::Windows::Forms::TextBox^  total_text;
	private: bool mouseDown;
	private: int mouseX = 0, mouseY = 0;
	protected:

	private: System::Windows::Forms::Label^  total_label;
	private: System::Windows::Forms::Panel^  toolbar_panel;
	private: System::Windows::Forms::Button^  close_button;

	private: System::Windows::Forms::Label^  dollar;
	private: System::Windows::Forms::TextBox^  dollar_text;
	private: System::Windows::Forms::Button^  add_category;
	private: System::Windows::Forms::TextBox^  percent_text;
	private: System::Windows::Forms::TrackBar^  categoryBar;
	private: System::Windows::Forms::TextBox^  category;























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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Settings::typeid));
			this->ok_button = (gcnew System::Windows::Forms::Button());
			this->total_text = (gcnew System::Windows::Forms::TextBox());
			this->total_label = (gcnew System::Windows::Forms::Label());
			this->toolbar_panel = (gcnew System::Windows::Forms::Panel());
			this->close_button = (gcnew System::Windows::Forms::Button());
			this->dollar = (gcnew System::Windows::Forms::Label());
			this->dollar_text = (gcnew System::Windows::Forms::TextBox());
			this->add_category = (gcnew System::Windows::Forms::Button());
			this->percent_text = (gcnew System::Windows::Forms::TextBox());
			this->categoryBar = (gcnew System::Windows::Forms::TrackBar());
			this->category = (gcnew System::Windows::Forms::TextBox());
			this->toolbar_panel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->categoryBar))->BeginInit();
			this->SuspendLayout();
			// 
			// ok_button
			// 
			this->ok_button->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->ok_button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(195)),
				static_cast<System::Int32>(static_cast<System::Byte>(179)));
			this->ok_button->FlatAppearance->BorderSize = 0;
			this->ok_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ok_button->Font = (gcnew System::Drawing::Font(L"Verdana", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ok_button->ForeColor = System::Drawing::Color::White;
			this->ok_button->Location = System::Drawing::Point(150, 374);
			this->ok_button->Name = L"ok_button";
			this->ok_button->Size = System::Drawing::Size(81, 39);
			this->ok_button->TabIndex = 0;
			this->ok_button->Text = L"ok";
			this->ok_button->UseVisualStyleBackColor = false;
			this->ok_button->Click += gcnew System::EventHandler(this, &Settings::ok_button_Click);
			// 
			// total_text
			// 
			this->total_text->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->total_text->BackColor = System::Drawing::Color::Silver;
			this->total_text->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->total_text->Font = (gcnew System::Drawing::Font(L"Verdana", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->total_text->Location = System::Drawing::Point(217, 60);
			this->total_text->Name = L"total_text";
			this->total_text->Size = System::Drawing::Size(109, 19);
			this->total_text->TabIndex = 1;
			this->total_text->Text = L"0";
			// 
			// total_label
			// 
			this->total_label->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->total_label->AutoSize = true;
			this->total_label->Font = (gcnew System::Drawing::Font(L"Verdana", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->total_label->Location = System::Drawing::Point(81, 60);
			this->total_label->Name = L"total_label";
			this->total_label->Size = System::Drawing::Size(129, 18);
			this->total_label->TabIndex = 2;
			this->total_label->Text = L"total budget  $";
			// 
			// toolbar_panel
			// 
			this->toolbar_panel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->toolbar_panel->Controls->Add(this->close_button);
			this->toolbar_panel->Cursor = System::Windows::Forms::Cursors::Hand;
			this->toolbar_panel->Location = System::Drawing::Point(2, 3);
			this->toolbar_panel->Name = L"toolbar_panel";
			this->toolbar_panel->Size = System::Drawing::Size(401, 27);
			this->toolbar_panel->TabIndex = 10;
			this->toolbar_panel->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Settings::toolbar_panel_MouseDown);
			this->toolbar_panel->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Settings::toolbar_panel_MouseMove);
			this->toolbar_panel->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &Settings::toolbar_panel_MouseUp);
			// 
			// close_button
			// 
			this->close_button->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->close_button->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"close_button.BackgroundImage")));
			this->close_button->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->close_button->FlatAppearance->BorderSize = 0;
			this->close_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->close_button->Location = System::Drawing::Point(372, 2);
			this->close_button->Name = L"close_button";
			this->close_button->Size = System::Drawing::Size(26, 22);
			this->close_button->TabIndex = 8;
			this->close_button->UseVisualStyleBackColor = true;
			this->close_button->Click += gcnew System::EventHandler(this, &Settings::close_button_Click);
			// 
			// dollar
			// 
			this->dollar->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->dollar->AutoSize = true;
			this->dollar->Font = (gcnew System::Drawing::Font(L"Verdana", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dollar->Location = System::Drawing::Point(273, 186);
			this->dollar->Name = L"dollar";
			this->dollar->Size = System::Drawing::Size(19, 18);
			this->dollar->TabIndex = 6;
			this->dollar->Text = L"$";
			// 
			// dollar_text
			// 
			this->dollar_text->Location = System::Drawing::Point(300, 185);
			this->dollar_text->Name = L"dollar_text";
			this->dollar_text->Size = System::Drawing::Size(53, 20);
			this->dollar_text->TabIndex = 5;
			this->dollar_text->Text = L"0";
			// 
			// add_category
			// 
			this->add_category->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->add_category->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(195)),
				static_cast<System::Int32>(static_cast<System::Byte>(179)));
			this->add_category->FlatAppearance->BorderSize = 0;
			this->add_category->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->add_category->Font = (gcnew System::Drawing::Font(L"Verdana", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->add_category->ForeColor = System::Drawing::Color::White;
			this->add_category->Location = System::Drawing::Point(300, 85);
			this->add_category->Name = L"add_category";
			this->add_category->Size = System::Drawing::Size(46, 27);
			this->add_category->TabIndex = 4;
			this->add_category->Text = L"add";
			this->add_category->UseVisualStyleBackColor = false;
			this->add_category->Click += gcnew System::EventHandler(this, &Settings::add_category_Click);
			// 
			// percent_text
			// 
			this->percent_text->Location = System::Drawing::Point(300, 160);
			this->percent_text->Name = L"percent_text";
			this->percent_text->Size = System::Drawing::Size(53, 20);
			this->percent_text->TabIndex = 3;
			this->percent_text->Text = L"0";
			// 
			// categoryBar
			// 
			this->categoryBar->Location = System::Drawing::Point(130, 160);
			this->categoryBar->Maximum = 100;
			this->categoryBar->Name = L"categoryBar";
			this->categoryBar->Size = System::Drawing::Size(164, 45);
			this->categoryBar->TabIndex = 2;
			this->categoryBar->TickStyle = System::Windows::Forms::TickStyle::None;
			this->categoryBar->Scroll += gcnew System::EventHandler(this, &Settings::categoryBar_Scroll);
			// 
			// category
			// 
			this->category->Location = System::Drawing::Point(63, 160);
			this->category->Name = L"category";
			this->category->Size = System::Drawing::Size(61, 20);
			this->category->TabIndex = 0;
			this->category->Text = L"Category 1";
			// 
			// Settings
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(404, 461);
			this->ControlBox = false;
			this->Controls->Add(this->dollar);
			this->Controls->Add(this->toolbar_panel);
			this->Controls->Add(this->dollar_text);
			this->Controls->Add(this->total_label);
			this->Controls->Add(this->percent_text);
			this->Controls->Add(this->add_category);
			this->Controls->Add(this->categoryBar);
			this->Controls->Add(this->total_text);
			this->Controls->Add(this->category);
			this->Controls->Add(this->ok_button);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Settings";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Settings";
			this->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Settings::Settings_Paint);
			this->toolbar_panel->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->categoryBar))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	private: System::Void ok_button_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}
	private: System::Void close_button_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}
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
	private: System::Void Settings_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
		e->Graphics->DrawRectangle(gcnew Pen(Color::Black, 3), this->DisplayRectangle);
	}

	private: System::Void categoryBar_Scroll(System::Object^  sender, System::EventArgs^  e) {
		percent_text->Text = System::Convert::ToString(categoryBar->Value);
		int totalAmount = Int32::Parse(total_text->Text);
		int percentAmount = categoryBar->Value;
		dollar_text->Text = System::Convert::ToString((totalAmount*percentAmount)/100);
	}
	private: System::Void add_category_Click(System::Object^  sender, System::EventArgs^  e) {
		TextBox^ tb = gcnew TextBox();
		tb->Text = "Category" + i;
		Point p = Point(category->Location.X + i, category->Location.Y * i);
		tb->Location = p;
		this->Controls->Add(tb);
		i++;

	}
};
}
