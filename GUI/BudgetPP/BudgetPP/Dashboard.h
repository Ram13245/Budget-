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
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  burn_chart;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  budget_chartDB;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  budget_chartH;

	private: System::Windows::Forms::DataVisualization::Charting::Chart^  habits_chart;
	private: System::Windows::Forms::Label^  habit_chart_label;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  bar_chart;
	private: System::Windows::Forms::Label^  bar_chart_label;
	private: System::Windows::Forms::Label^  budget_chartH_label;
	private: System::Windows::Forms::Label^  you_label;


	private: System::Windows::Forms::Label^  habits_title_label;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  burn_chart_label;
	private: System::Windows::Forms::Label^  budget_chartDB_label;











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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Series^  series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Series^  series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea3 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Series^  series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea4 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Series^  series4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea5 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Series^  series5 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->toolbar_panel = (gcnew System::Windows::Forms::Panel());
			this->settings_button = (gcnew System::Windows::Forms::Button());
			this->max_button = (gcnew System::Windows::Forms::Button());
			this->min_button = (gcnew System::Windows::Forms::Button());
			this->close_button = (gcnew System::Windows::Forms::Button());
			this->main_tabs = (gcnew System::Windows::Forms::TabControl());
			this->dashboard_tab = (gcnew System::Windows::Forms::TabPage());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->burn_chart_label = (gcnew System::Windows::Forms::Label());
			this->budget_chartDB_label = (gcnew System::Windows::Forms::Label());
			this->burn_chart = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->budget_chartDB = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->habits_tab = (gcnew System::Windows::Forms::TabPage());
			this->you_label = (gcnew System::Windows::Forms::Label());
			this->habits_title_label = (gcnew System::Windows::Forms::Label());
			this->bar_chart_label = (gcnew System::Windows::Forms::Label());
			this->budget_chartH_label = (gcnew System::Windows::Forms::Label());
			this->habit_chart_label = (gcnew System::Windows::Forms::Label());
			this->bar_chart = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->budget_chartH = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->habits_chart = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->expense_tab = (gcnew System::Windows::Forms::TabPage());
			this->add_expense_button = (gcnew System::Windows::Forms::Button());
			this->toolbar_panel->SuspendLayout();
			this->main_tabs->SuspendLayout();
			this->dashboard_tab->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->burn_chart))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->budget_chartDB))->BeginInit();
			this->habits_tab->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bar_chart))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->budget_chartH))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->habits_chart))->BeginInit();
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
			this->toolbar_panel->Size = System::Drawing::Size(1146, 32);
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
			this->settings_button->Location = System::Drawing::Point(1055, 9);
			this->settings_button->Name = L"settings_button";
			this->settings_button->Size = System::Drawing::Size(19, 19);
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
			this->max_button->Location = System::Drawing::Point(1100, 9);
			this->max_button->Name = L"max_button";
			this->max_button->Size = System::Drawing::Size(19, 19);
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
			this->min_button->Location = System::Drawing::Point(1078, 10);
			this->min_button->Name = L"min_button";
			this->min_button->Size = System::Drawing::Size(19, 19);
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
			this->close_button->Location = System::Drawing::Point(1121, 10);
			this->close_button->Name = L"close_button";
			this->close_button->Size = System::Drawing::Size(19, 19);
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
			this->main_tabs->Location = System::Drawing::Point(0, 26);
			this->main_tabs->Name = L"main_tabs";
			this->main_tabs->SelectedIndex = 0;
			this->main_tabs->Size = System::Drawing::Size(1136, 606);
			this->main_tabs->TabIndex = 11;
			// 
			// dashboard_tab
			// 
			this->dashboard_tab->BackColor = System::Drawing::Color::White;
			this->dashboard_tab->Controls->Add(this->label1);
			this->dashboard_tab->Controls->Add(this->burn_chart_label);
			this->dashboard_tab->Controls->Add(this->budget_chartDB_label);
			this->dashboard_tab->Controls->Add(this->burn_chart);
			this->dashboard_tab->Controls->Add(this->budget_chartDB);
			this->dashboard_tab->Location = System::Drawing::Point(4, 22);
			this->dashboard_tab->Name = L"dashboard_tab";
			this->dashboard_tab->Padding = System::Windows::Forms::Padding(3);
			this->dashboard_tab->Size = System::Drawing::Size(1128, 580);
			this->dashboard_tab->TabIndex = 0;
			this->dashboard_tab->Text = L"dashboard";
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Kelson Sans", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(152)),
				static_cast<System::Int32>(static_cast<System::Byte>(172)));
			this->label1->Location = System::Drawing::Point(455, 39);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(179, 48);
			this->label1->TabIndex = 8;
			this->label1->Text = L"budget++";
			// 
			// burn_chart_label
			// 
			this->burn_chart_label->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->burn_chart_label->AutoSize = true;
			this->burn_chart_label->Font = (gcnew System::Drawing::Font(L"Verdana", 12));
			this->burn_chart_label->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(152)),
				static_cast<System::Int32>(static_cast<System::Byte>(172)));
			this->burn_chart_label->Location = System::Drawing::Point(636, 431);
			this->burn_chart_label->Name = L"burn_chart_label";
			this->burn_chart_label->Size = System::Drawing::Size(236, 18);
			this->burn_chart_label->TabIndex = 7;
			this->burn_chart_label->Text = L"current allocation of budget";
			// 
			// budget_chartDB_label
			// 
			this->budget_chartDB_label->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->budget_chartDB_label->AutoSize = true;
			this->budget_chartDB_label->Font = (gcnew System::Drawing::Font(L"Verdana", 12));
			this->budget_chartDB_label->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)),
				static_cast<System::Int32>(static_cast<System::Byte>(152)), static_cast<System::Int32>(static_cast<System::Byte>(172)));
			this->budget_chartDB_label->Location = System::Drawing::Point(247, 431);
			this->budget_chartDB_label->Name = L"budget_chartDB_label";
			this->budget_chartDB_label->Size = System::Drawing::Size(236, 18);
			this->budget_chartDB_label->TabIndex = 6;
			this->budget_chartDB_label->Text = L"current allocation of budget";
			// 
			// burn_chart
			// 
			this->burn_chart->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->burn_chart->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(195)),
				static_cast<System::Int32>(static_cast<System::Byte>(179)));
			chartArea1->AxisX->LabelStyle->ForeColor = System::Drawing::Color::White;
			chartArea1->AxisX2->LabelStyle->ForeColor = System::Drawing::Color::White;
			chartArea1->AxisY->LabelStyle->ForeColor = System::Drawing::Color::White;
			chartArea1->AxisY2->LabelStyle->ForeColor = System::Drawing::Color::White;
			chartArea1->Name = L"ChartArea1";
			this->burn_chart->ChartAreas->Add(chartArea1);
			this->burn_chart->Location = System::Drawing::Point(601, 128);
			this->burn_chart->Name = L"burn_chart";
			this->burn_chart->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::EarthTones;
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series1->Name = L"burnSeries";
			this->burn_chart->Series->Add(series1);
			this->burn_chart->Size = System::Drawing::Size(300, 300);
			this->burn_chart->TabIndex = 1;
			this->burn_chart->Text = L"chart2";
			// 
			// budget_chartDB
			// 
			this->budget_chartDB->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->budget_chartDB->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(195)),
				static_cast<System::Int32>(static_cast<System::Byte>(179)));
			chartArea2->Name = L"ChartArea1";
			this->budget_chartDB->ChartAreas->Add(chartArea2);
			this->budget_chartDB->Location = System::Drawing::Point(204, 128);
			this->budget_chartDB->Name = L"budget_chartDB";
			this->budget_chartDB->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::SeaGreen;
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Pie;
			series2->Name = L"budgetSeries";
			this->budget_chartDB->Series->Add(series2);
			this->budget_chartDB->Size = System::Drawing::Size(300, 300);
			this->budget_chartDB->TabIndex = 0;
			this->budget_chartDB->Text = L"chart1";
			// 
			// habits_tab
			// 
			this->habits_tab->BackColor = System::Drawing::Color::White;
			this->habits_tab->Controls->Add(this->you_label);
			this->habits_tab->Controls->Add(this->habits_title_label);
			this->habits_tab->Controls->Add(this->bar_chart_label);
			this->habits_tab->Controls->Add(this->budget_chartH_label);
			this->habits_tab->Controls->Add(this->habit_chart_label);
			this->habits_tab->Controls->Add(this->bar_chart);
			this->habits_tab->Controls->Add(this->budget_chartH);
			this->habits_tab->Controls->Add(this->habits_chart);
			this->habits_tab->Location = System::Drawing::Point(4, 22);
			this->habits_tab->Name = L"habits_tab";
			this->habits_tab->Padding = System::Windows::Forms::Padding(3);
			this->habits_tab->Size = System::Drawing::Size(1128, 580);
			this->habits_tab->TabIndex = 1;
			this->habits_tab->Text = L"habits";
			// 
			// you_label
			// 
			this->you_label->AutoSize = true;
			this->you_label->Font = (gcnew System::Drawing::Font(L"Verdana", 9, System::Drawing::FontStyle::Bold));
			this->you_label->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(152)),
				static_cast<System::Int32>(static_cast<System::Byte>(172)));
			this->you_label->Location = System::Drawing::Point(339, 497);
			this->you_label->Name = L"you_label";
			this->you_label->Size = System::Drawing::Size(438, 14);
			this->you_label->TabIndex = 8;
			this->you_label->Text = L"you have spent $0.00 of your $100 overall budget for this period";
			// 
			// habits_title_label
			// 
			this->habits_title_label->AutoSize = true;
			this->habits_title_label->Font = (gcnew System::Drawing::Font(L"Verdana", 20));
			this->habits_title_label->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)),
				static_cast<System::Int32>(static_cast<System::Byte>(152)), static_cast<System::Int32>(static_cast<System::Byte>(172)));
			this->habits_title_label->Location = System::Drawing::Point(434, 49);
			this->habits_title_label->Name = L"habits_title_label";
			this->habits_title_label->Size = System::Drawing::Size(262, 32);
			this->habits_title_label->TabIndex = 7;
			this->habits_title_label->Text = L"Habitual Spending";
			// 
			// bar_chart_label
			// 
			this->bar_chart_label->AutoSize = true;
			this->bar_chart_label->Font = (gcnew System::Drawing::Font(L"Verdana", 12));
			this->bar_chart_label->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(152)),
				static_cast<System::Int32>(static_cast<System::Byte>(172)));
			this->bar_chart_label->Location = System::Drawing::Point(785, 424);
			this->bar_chart_label->Name = L"bar_chart_label";
			this->bar_chart_label->Size = System::Drawing::Size(198, 36);
			this->bar_chart_label->TabIndex = 6;
			this->bar_chart_label->Text = L"% of predicted budget \r\nalready spent";
			this->bar_chart_label->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// budget_chartH_label
			// 
			this->budget_chartH_label->AutoSize = true;
			this->budget_chartH_label->Font = (gcnew System::Drawing::Font(L"Verdana", 12));
			this->budget_chartH_label->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)),
				static_cast<System::Int32>(static_cast<System::Byte>(152)), static_cast<System::Int32>(static_cast<System::Byte>(172)));
			this->budget_chartH_label->Location = System::Drawing::Point(437, 424);
			this->budget_chartH_label->Name = L"budget_chartH_label";
			this->budget_chartH_label->Size = System::Drawing::Size(236, 18);
			this->budget_chartH_label->TabIndex = 5;
			this->budget_chartH_label->Text = L"current allocation of budget";
			// 
			// habit_chart_label
			// 
			this->habit_chart_label->AutoSize = true;
			this->habit_chart_label->Font = (gcnew System::Drawing::Font(L"Verdana", 12));
			this->habit_chart_label->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)),
				static_cast<System::Int32>(static_cast<System::Byte>(152)), static_cast<System::Int32>(static_cast<System::Byte>(172)));
			this->habit_chart_label->Location = System::Drawing::Point(122, 424);
			this->habit_chart_label->Name = L"habit_chart_label";
			this->habit_chart_label->Size = System::Drawing::Size(202, 18);
			this->habit_chart_label->TabIndex = 4;
			this->habit_chart_label->Text = L"what you usually spend";
			// 
			// bar_chart
			// 
			this->bar_chart->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(195)),
				static_cast<System::Int32>(static_cast<System::Byte>(179)));
			chartArea3->AxisX->LabelStyle->ForeColor = System::Drawing::Color::White;
			chartArea3->AxisX2->LabelStyle->ForeColor = System::Drawing::Color::White;
			chartArea3->AxisY->LabelStyle->ForeColor = System::Drawing::Color::White;
			chartArea3->AxisY2->LabelStyle->ForeColor = System::Drawing::Color::White;
			chartArea3->Name = L"ChartArea1";
			this->bar_chart->ChartAreas->Add(chartArea3);
			this->bar_chart->Location = System::Drawing::Point(733, 121);
			this->bar_chart->Name = L"bar_chart";
			series3->ChartArea = L"ChartArea1";
			series3->Name = L"barSeries";
			this->bar_chart->Series->Add(series3);
			this->bar_chart->Size = System::Drawing::Size(300, 300);
			this->bar_chart->TabIndex = 3;
			this->bar_chart->Text = L"chart1";
			// 
			// budget_chartH
			// 
			this->budget_chartH->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(195)),
				static_cast<System::Int32>(static_cast<System::Byte>(179)));
			chartArea4->Name = L"ChartArea1";
			this->budget_chartH->ChartAreas->Add(chartArea4);
			this->budget_chartH->Location = System::Drawing::Point(407, 121);
			this->budget_chartH->Name = L"budget_chartH";
			this->budget_chartH->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::SeaGreen;
			series4->ChartArea = L"ChartArea1";
			series4->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Pie;
			series4->Name = L"budgetSeries";
			this->budget_chartH->Series->Add(series4);
			this->budget_chartH->Size = System::Drawing::Size(300, 300);
			this->budget_chartH->TabIndex = 2;
			this->budget_chartH->Text = L"chart1";
			// 
			// habits_chart
			// 
			this->habits_chart->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(195)),
				static_cast<System::Int32>(static_cast<System::Byte>(179)));
			chartArea5->Name = L"ChartArea1";
			this->habits_chart->ChartAreas->Add(chartArea5);
			this->habits_chart->Location = System::Drawing::Point(79, 121);
			this->habits_chart->Name = L"habits_chart";
			this->habits_chart->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::EarthTones;
			series5->ChartArea = L"ChartArea1";
			series5->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Pie;
			series5->Name = L"habitSeries";
			this->habits_chart->Series->Add(series5);
			this->habits_chart->Size = System::Drawing::Size(300, 300);
			this->habits_chart->TabIndex = 1;
			this->habits_chart->Text = L"chart1";
			// 
			// expense_tab
			// 
			this->expense_tab->BackColor = System::Drawing::Color::White;
			this->expense_tab->Controls->Add(this->add_expense_button);
			this->expense_tab->Location = System::Drawing::Point(4, 22);
			this->expense_tab->Name = L"expense_tab";
			this->expense_tab->Padding = System::Windows::Forms::Padding(3);
			this->expense_tab->Size = System::Drawing::Size(1128, 580);
			this->expense_tab->TabIndex = 2;
			this->expense_tab->Text = L"expenses";
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
			this->add_expense_button->Location = System::Drawing::Point(932, 58);
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
			this->ClientSize = System::Drawing::Size(1136, 632);
			this->ControlBox = false;
			this->Controls->Add(this->main_tabs);
			this->Controls->Add(this->toolbar_panel);
			this->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->MinimumSize = System::Drawing::Size(1152, 648);
			this->Name = L"Dashboard";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Load += gcnew System::EventHandler(this, &Dashboard::Dashboard_Load);
			this->toolbar_panel->ResumeLayout(false);
			this->main_tabs->ResumeLayout(false);
			this->dashboard_tab->ResumeLayout(false);
			this->dashboard_tab->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->burn_chart))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->budget_chartDB))->EndInit();
			this->habits_tab->ResumeLayout(false);
			this->habits_tab->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bar_chart))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->budget_chartH))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->habits_chart))->EndInit();
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
			this->SetDesktopLocation(mouseX - 676, mouseY - 20);
		}
	}
	private: System::Void toolbar_panel_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		mouseDown = false;
	}

	private: System::Void min_button_Click(System::Object^  sender, System::EventArgs^  e) {
		this->WindowState = FormWindowState::Minimized;
	}
	private: System::Void max_button_Click(System::Object^  sender, System::EventArgs^  e) {
		if (this->WindowState == FormWindowState::Maximized) {
			this->WindowState = FormWindowState::Normal;
			this->Size = System::Drawing::Size(1152, 648);
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


private: System::Void Dashboard_Load(System::Object^  sender, System::EventArgs^  e) {

	for (int i = 0; i < 4; i++) {
		budget_chartDB->Series["budgetSeries"]->Points->AddXY("Test " + i, 500);
	}

	for (int i = 4; i > 0; i--) {
		burn_chart->Series["burnSeries"]->Points->AddXY("Test " + i, i);
	}

	for (int i = 0; i < 4; i++) {
		budget_chartH->Series["budgetSeries"]->Points->AddXY("Test " + i, 5);
	}

	for (int i = 0; i < 4; i++) {
		habits_chart->Series["habitSeries"]->Points->AddXY("Test " + i, 500);
	}

	for (int i = 0; i < 4; i++) {
		bar_chart->Series["barSeries"]->Points->AddXY("Test " + i, 500);
	}
}
};
}
