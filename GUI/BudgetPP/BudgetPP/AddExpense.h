#pragma once

namespace BudgetPP {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AddExpense
	/// </summary>
	public ref class AddExpense : public System::Windows::Forms::Form
	{
	public:
		AddExpense(void)
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
		~AddExpense()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  toolbar_panel;
	private: bool mouseDown;
	private: int mouseX = 0, mouseY = 0;
	protected:
	private: System::Windows::Forms::Button^  close_button;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(AddExpense::typeid));
			this->toolbar_panel = (gcnew System::Windows::Forms::Panel());
			this->close_button = (gcnew System::Windows::Forms::Button());
			this->toolbar_panel->SuspendLayout();
			this->SuspendLayout();
			// 
			// toolbar_panel
			// 
			this->toolbar_panel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->toolbar_panel->Controls->Add(this->close_button);
			this->toolbar_panel->Cursor = System::Windows::Forms::Cursors::Hand;
			this->toolbar_panel->Location = System::Drawing::Point(1, 2);
			this->toolbar_panel->Name = L"toolbar_panel";
			this->toolbar_panel->Size = System::Drawing::Size(698, 33);
			this->toolbar_panel->TabIndex = 11;
			this->toolbar_panel->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &AddExpense::toolbar_panel_MouseDown);
			this->toolbar_panel->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &AddExpense::toolbar_panel_MouseMove);
			this->toolbar_panel->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &AddExpense::toolbar_panel_MouseUp);
			// 
			// close_button
			// 
			this->close_button->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->close_button->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"close_button.BackgroundImage")));
			this->close_button->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->close_button->FlatAppearance->BorderSize = 0;
			this->close_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->close_button->Location = System::Drawing::Point(665, 3);
			this->close_button->Name = L"close_button";
			this->close_button->Size = System::Drawing::Size(30, 22);
			this->close_button->TabIndex = 8;
			this->close_button->UseVisualStyleBackColor = true;
			this->close_button->Click += gcnew System::EventHandler(this, &AddExpense::close_button_Click);
			// 
			// AddExpense
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(700, 600);
			this->ControlBox = false;
			this->Controls->Add(this->toolbar_panel);
			this->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"AddExpense";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"AddExpense";
			this->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &AddExpense::AddExpense_Paint);
			this->toolbar_panel->ResumeLayout(false);
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
	private: System::Void close_button_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}
	private: System::Void AddExpense_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
		e->Graphics->DrawRectangle(gcnew Pen(Color::Black, 3), this->DisplayRectangle);
	}
};
}
