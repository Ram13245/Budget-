#pragma once
#include "Settings.h"
#include "AddExpense.h"

namespace BudgetPP {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Dashboard
	/// </summary>
	public ref class Dashboard : public System::Windows::Forms::Form
	{
	public:
		Dashboard(void)
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
		~Dashboard()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  toolbar_panel;
	protected:
	private: System::Windows::Forms::Button^  close_button;
	private: bool mouseDown;
	private: int mouseX = 0, mouseY = 0;
	private: System::Windows::Forms::Button^  max_button;
	private: System::Windows::Forms::Button^  min_button;
	private: System::Windows::Forms::TabControl^  main_tabs;
	private: System::Windows::Forms::TabPage^  habits_tab;





	private: System::Windows::Forms::TabPage^  dashboard_tab;
	private: System::Windows::Forms::TabPage^  expense_tab;
	private: System::Windows::Forms::Button^  settings_button;
	private: System::Windows::Forms::Button^  add_expense_button;




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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Dashboard::typeid));
			this->toolbar_panel = (gcnew System::Windows::Forms::Panel());
			this->settings_button = (gcnew System::Windows::Forms::Button());
			this->max_button = (gcnew System::Windows::Forms::Button());
			this->min_button = (gcnew System::Windows::Forms::Button());
			this->close_button = (gcnew System::Windows::Forms::Button());
			this->main_tabs = (gcnew System::Windows::Forms::TabControl());
			this->dashboard_tab = (gcnew System::Windows::Forms::TabPage());
			this->habits_tab = (gcnew System::Windows::Forms::TabPage());
			this->expense_tab = (gcnew System::Windows::Forms::TabPage());
			this->add_expense_button = (gcnew System::Windows::Forms::Button());
			this->toolbar_panel->SuspendLayout();
			this->main_tabs->SuspendLayout();
			this->expense_tab->SuspendLayout();
			this->SuspendLayout();
			// 
			// toolbar_panel
			// 
			this->toolbar_panel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->toolbar_panel->Controls->Add(this->settings_button);
			this->toolbar_panel->Controls->Add(this->max_button);
			this->toolbar_panel->Controls->Add(this->min_button);
			this->toolbar_panel->Controls->Add(this->close_button);
			this->toolbar_panel->Cursor = System::Windows::Forms::Cursors::Hand;
			this->toolbar_panel->Location = System::Drawing::Point(-9, -8);
			this->toolbar_panel->Name = L"toolbar_panel";
			this->toolbar_panel->Size = System::Drawing::Size(1346, 41);
			this->toolbar_panel->TabIndex = 10;
			this->toolbar_panel->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Dashboard::toolbar_panel_MouseDown);
			this->toolbar_panel->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Dashboard::toolbar_panel_MouseMove);
			this->toolbar_panel->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &Dashboard::toolbar_panel_MouseUp);
			// 
			// settings_button
			// 
			this->settings_button->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->settings_button->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"settings_button.BackgroundImage")));
			this->settings_button->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->settings_button->FlatAppearance->BorderSize = 0;
			this->settings_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->settings_button->Location = System::Drawing::Point(1183, 10);
			this->settings_button->Name = L"settings_button";
			this->settings_button->Size = System::Drawing::Size(30, 22);
			this->settings_button->TabIndex = 11;
			this->settings_button->UseVisualStyleBackColor = true;
			this->settings_button->Click += gcnew System::EventHandler(this, &Dashboard::settings_button_Click);
			// 
			// max_button
			// 
			this->max_button->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->max_button->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"max_button.BackgroundImage")));
			this->max_button->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->max_button->FlatAppearance->BorderSize = 0;
			this->max_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->max_button->Location = System::Drawing::Point(1257, 10);
			this->max_button->Name = L"max_button";
			this->max_button->Size = System::Drawing::Size(30, 22);
			this->max_button->TabIndex = 10;
			this->max_button->UseVisualStyleBackColor = true;
			this->max_button->Click += gcnew System::EventHandler(this, &Dashboard::max_button_Click);
			// 
			// min_button
			// 
			this->min_button->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->min_button->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"min_button.BackgroundImage")));
			this->min_button->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->min_button->FlatAppearance->BorderSize = 0;
			this->min_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->min_button->Location = System::Drawing::Point(1220, 10);
			this->min_button->Name = L"min_button";
			this->min_button->Size = System::Drawing::Size(30, 22);
			this->min_button->TabIndex = 9;
			this->min_button->UseVisualStyleBackColor = true;
			this->min_button->Click += gcnew System::EventHandler(this, &Dashboard::min_button_Click);
			// 
			// close_button
			// 
			this->close_button->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->close_button->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"close_button.BackgroundImage")));
			this->close_button->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->close_button->FlatAppearance->BorderSize = 0;
			this->close_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->close_button->Location = System::Drawing::Point(1295, 10);
			this->close_button->Name = L"close_button";
			this->close_button->Size = System::Drawing::Size(30, 22);
			this->close_button->TabIndex = 8;
			this->close_button->UseVisualStyleBackColor = true;
			this->close_button->Click += gcnew System::EventHandler(this, &Dashboard::close_button_Click);
			// 
			// main_tabs
			// 
			this->main_tabs->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->main_tabs->Controls->Add(this->dashboard_tab);
			this->main_tabs->Controls->Add(this->habits_tab);
			this->main_tabs->Controls->Add(this->expense_tab);
			this->main_tabs->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->main_tabs->Location = System::Drawing::Point(0, 30);
			this->main_tabs->Name = L"main_tabs";
			this->main_tabs->SelectedIndex = 0;
			this->main_tabs->Size = System::Drawing::Size(1337, 612);
			this->main_tabs->TabIndex = 11;
			// 
			// dashboard_tab
			// 
			this->dashboard_tab->BackColor = System::Drawing::Color::White;
			this->dashboard_tab->Location = System::Drawing::Point(4, 22);
			this->dashboard_tab->Name = L"dashboard_tab";
			this->dashboard_tab->Padding = System::Windows::Forms::Padding(3);
			this->dashboard_tab->Size = System::Drawing::Size(1329, 586);
			this->dashboard_tab->TabIndex = 0;
			this->dashboard_tab->Text = L"Dashboard";
			// 
			// habits_tab
			// 
			this->habits_tab->BackColor = System::Drawing::Color::White;
			this->habits_tab->Location = System::Drawing::Point(4, 22);
			this->habits_tab->Name = L"habits_tab";
			this->habits_tab->Padding = System::Windows::Forms::Padding(3);
			this->habits_tab->Size = System::Drawing::Size(1329, 586);
			this->habits_tab->TabIndex = 1;
			this->habits_tab->Text = L"Habits";
			// 
			// expense_tab
			// 
			this->expense_tab->BackColor = System::Drawing::Color::White;
			this->expense_tab->Controls->Add(this->add_expense_button);
			this->expense_tab->Location = System::Drawing::Point(4, 22);
			this->expense_tab->Name = L"expense_tab";
			this->expense_tab->Padding = System::Windows::Forms::Padding(3);
			this->expense_tab->Size = System::Drawing::Size(1329, 586);
			this->expense_tab->TabIndex = 2;
			this->expense_tab->Text = L"Expenses";
			// 
			// add_expense_button
			// 
			this->add_expense_button->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->add_expense_button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(195)), static_cast<System::Int32>(static_cast<System::Byte>(179)));
			this->add_expense_button->FlatAppearance->BorderSize = 0;
			this->add_expense_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->add_expense_button->Font = (gcnew System::Drawing::Font(L"Verdana", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->add_expense_button->ForeColor = System::Drawing::Color::White;
			this->add_expense_button->Location = System::Drawing::Point(1121, 58);
			this->add_expense_button->Name = L"add_expense_button";
			this->add_expense_button->Size = System::Drawing::Size(85, 32);
			this->add_expense_button->TabIndex = 1;
			this->add_expense_button->Text = L"add";
			this->add_expense_button->UseVisualStyleBackColor = false;
			this->add_expense_button->Click += gcnew System::EventHandler(this, &Dashboard::add_expense_button_Click);
			// 
			// Dashboard
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1337, 642);
			this->ControlBox = false;
			this->Controls->Add(this->main_tabs);
			this->Controls->Add(this->toolbar_panel);
			this->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->MinimumSize = System::Drawing::Size(1341, 648);
			this->Name = L"Dashboard";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->toolbar_panel->ResumeLayout(false);
			this->main_tabs->ResumeLayout(false);
			this->expense_tab->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void toolbar_panel_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		mouseDown = true;
	}
	private: System::Void toolbar_panel_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		if (mouseDown) {
			mouseX = MousePosition.X;
			mouseY = MousePosition.Y;
			this->SetDesktopLocation(mouseX, mouseY);
		}
	}
	private: System::Void toolbar_panel_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		mouseDown = false;
	}

	private: System::Void min_button_Click(System::Object^  sender, System::EventArgs^  e) {
		this->WindowState = FormWindowState::Minimized;
	}
	private: System::Void max_button_Click(System::Object^  sender, System::EventArgs^  e) {
		//this->MaximizedBounds = Screen::FromHandle(this->Handle)->WorkingArea;
		//this->Left = -10;
		//this->Top = 0;
		//this->Width = Screen::PrimaryScreen->WorkingArea.Width + 20;
		//this->Height = Screen::PrimaryScreen->WorkingArea.Height + 10;
		if (this->WindowState == FormWindowState::Maximized) {
			this->Width = 1000;
		}
		else {
			this->WindowState = FormWindowState::Maximized;
		}
	}
	private: System::Void close_button_Click(System::Object^  sender, System::EventArgs^  e) {
		Application::Exit();
	}

	private: System::Void settings_button_Click(System::Object^  sender, System::EventArgs^  e) {
		Settings^ settingsScreen = gcnew Settings();
		settingsScreen->ShowDialog();
	}
	private: System::Void add_expense_button_Click(System::Object^  sender, System::EventArgs^  e) {
		AddExpense^ addExpenseScreen = gcnew AddExpense();
		addExpenseScreen->ShowDialog();
	}
};
}
