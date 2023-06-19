#pragma once

namespace GraphsWinForms {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
			this->lineColor = this->colorLinePanel->BackColor;
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart;









	private: System::Windows::Forms::OpenFileDialog^ openFileDialog;
	private: System::Windows::Forms::ColorDialog^ colorLineDialog;

	private: System::Windows::Forms::Panel^ colorLinePanel;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ListBox^ GraphsList;
	private: System::ServiceProcess::ServiceController^ serviceController1;
	private: System::Windows::Forms::Button^ add_main_graph_btn;
	private: System::Windows::Forms::Button^ add_graph_btn;
	private: System::Windows::Forms::Button^ remove_graph_btn;







	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea3 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			this->chart = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->openFileDialog = (gcnew System::Windows::Forms::OpenFileDialog());
			this->colorLineDialog = (gcnew System::Windows::Forms::ColorDialog());
			this->colorLinePanel = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->GraphsList = (gcnew System::Windows::Forms::ListBox());
			this->serviceController1 = (gcnew System::ServiceProcess::ServiceController());
			this->add_main_graph_btn = (gcnew System::Windows::Forms::Button());
			this->add_graph_btn = (gcnew System::Windows::Forms::Button());
			this->remove_graph_btn = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart))->BeginInit();
			this->SuspendLayout();
			// 
			// chart
			// 
			chartArea3->AxisX->IntervalAutoMode = System::Windows::Forms::DataVisualization::Charting::IntervalAutoMode::VariableCount;
			chartArea3->AxisX->IsInterlaced = true;
			chartArea3->AxisX->LineDashStyle = System::Windows::Forms::DataVisualization::Charting::ChartDashStyle::Dash;
			chartArea3->AxisX->Maximum = 100;
			chartArea3->AxisX->Minimum = -100;
			chartArea3->Name = L"ChartArea1";
			this->chart->ChartAreas->Add(chartArea3);
			legend3->Name = L"Legend";
			this->chart->Legends->Add(legend3);
			this->chart->Location = System::Drawing::Point(12, 53);
			this->chart->Name = L"chart";
			this->chart->Size = System::Drawing::Size(628, 354);
			this->chart->TabIndex = 0;
			this->chart->Text = L"chart1";
			// 
			// openFileDialog
			// 
			this->openFileDialog->Filter = L"Text files(*.txt)|*.txt|All files(*.*)|*.*";
			// 
			// colorLinePanel
			// 
			this->colorLinePanel->BackColor = System::Drawing::Color::Red;
			this->colorLinePanel->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->colorLinePanel->Cursor = System::Windows::Forms::Cursors::Hand;
			this->colorLinePanel->Location = System::Drawing::Point(661, 53);
			this->colorLinePanel->Name = L"colorLinePanel";
			this->colorLinePanel->Size = System::Drawing::Size(59, 64);
			this->colorLinePanel->TabIndex = 5;
			this->colorLinePanel->Click += gcnew System::EventHandler(this, &MainForm::colorLinePanel_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(726, 64);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(205, 42);
			this->label1->TabIndex = 6;
			this->label1->Text = L"graph color";
			// 
			// GraphsList
			// 
			this->GraphsList->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->GraphsList->FormattingEnabled = true;
			this->GraphsList->ItemHeight = 42;
			this->GraphsList->Location = System::Drawing::Point(661, 459);
			this->GraphsList->Name = L"GraphsList";
			this->GraphsList->ScrollAlwaysVisible = true;
			this->GraphsList->Size = System::Drawing::Size(331, 46);
			this->GraphsList->TabIndex = 7;
			// 
			// add_main_graph_btn
			// 
			this->add_main_graph_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->add_main_graph_btn->Location = System::Drawing::Point(12, 486);
			this->add_main_graph_btn->Name = L"add_main_graph_btn";
			this->add_main_graph_btn->Size = System::Drawing::Size(331, 146);
			this->add_main_graph_btn->TabIndex = 8;
			this->add_main_graph_btn->Text = L"Add main graph";
			this->add_main_graph_btn->UseVisualStyleBackColor = true;
			this->add_main_graph_btn->Click += gcnew System::EventHandler(this, &MainForm::add_main_graph_btn_Click);
			// 
			// add_graph_btn
			// 
			this->add_graph_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->add_graph_btn->Location = System::Drawing::Point(661, 143);
			this->add_graph_btn->Name = L"add_graph_btn";
			this->add_graph_btn->Size = System::Drawing::Size(331, 90);
			this->add_graph_btn->TabIndex = 4;
			this->add_graph_btn->Text = L"Add graph";
			this->add_graph_btn->UseVisualStyleBackColor = true;
			this->add_graph_btn->Click += gcnew System::EventHandler(this, &MainForm::add_graph_btn_Click);
			// 
			// remove_graph_btn
			// 
			this->remove_graph_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->remove_graph_btn->Location = System::Drawing::Point(661, 542);
			this->remove_graph_btn->Name = L"remove_graph_btn";
			this->remove_graph_btn->Size = System::Drawing::Size(331, 90);
			this->remove_graph_btn->TabIndex = 9;
			this->remove_graph_btn->Text = L"Remove selected";
			this->remove_graph_btn->UseVisualStyleBackColor = true;
			this->remove_graph_btn->Click += gcnew System::EventHandler(this, &MainForm::remove_graph_btn_Click);
			// 
			// MainForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->ClientSize = System::Drawing::Size(1052, 680);
			this->Controls->Add(this->remove_graph_btn);
			this->Controls->Add(this->add_main_graph_btn);
			this->Controls->Add(this->GraphsList);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->colorLinePanel);
			this->Controls->Add(this->add_graph_btn);
			this->Controls->Add(this->chart);
			this->Name = L"MainForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MainForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: double a, b, h;
	private: double x, y;
	private: System::Drawing::Color lineColor;


	private: System::Void add_graph_btn_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void colorLinePanel_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void addGraph(System::Windows::Forms::DataVisualization::Charting::Series^ series);
	private: System::Void removeGraph();
	private: System::Void add_main_graph_btn_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void remove_graph_btn_Click(System::Object^ sender, System::EventArgs^ e);
};
}
