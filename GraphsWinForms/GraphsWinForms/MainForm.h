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
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ menuToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ generateGraphsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ clearGraphToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ exitToolStripMenuItem;
	private: System::Windows::Forms::TextBox^ fileNameBox;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ add_graph_btn;

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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			this->chart = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->menuToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->generateGraphsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->clearGraphToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->fileNameBox = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->add_graph_btn = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// chart
			// 
			chartArea2->Name = L"ChartArea1";
			this->chart->ChartAreas->Add(chartArea2);
			legend2->Name = L"Legend";
			this->chart->Legends->Add(legend2);
			this->chart->Location = System::Drawing::Point(12, 53);
			this->chart->Name = L"chart";
			this->chart->Size = System::Drawing::Size(628, 354);
			this->chart->TabIndex = 0;
			this->chart->Text = L"chart1";
			// 
			// menuStrip1
			// 
			this->menuStrip1->GripMargin = System::Windows::Forms::Padding(2, 2, 0, 2);
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(32, 32);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->menuToolStripMenuItem,
					this->exitToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1053, 40);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// menuToolStripMenuItem
			// 
			this->menuToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->generateGraphsToolStripMenuItem,
					this->clearGraphToolStripMenuItem
			});
			this->menuToolStripMenuItem->Name = L"menuToolStripMenuItem";
			this->menuToolStripMenuItem->Size = System::Drawing::Size(97, 36);
			this->menuToolStripMenuItem->Text = L"Menu";
			// 
			// generateGraphsToolStripMenuItem
			// 
			this->generateGraphsToolStripMenuItem->Name = L"generateGraphsToolStripMenuItem";
			this->generateGraphsToolStripMenuItem->Size = System::Drawing::Size(323, 44);
			this->generateGraphsToolStripMenuItem->Text = L"Generate graphs";
			this->generateGraphsToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::generateGraphsToolStripMenuItem_Click);
			// 
			// clearGraphToolStripMenuItem
			// 
			this->clearGraphToolStripMenuItem->Name = L"clearGraphToolStripMenuItem";
			this->clearGraphToolStripMenuItem->Size = System::Drawing::Size(323, 44);
			this->clearGraphToolStripMenuItem->Text = L"Clear graph";
			this->clearGraphToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::clearGraphToolStripMenuItem_Click);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(71, 36);
			this->exitToolStripMenuItem->Text = L"Exit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::exitToolStripMenuItem_Click);
			// 
			// fileNameBox
			// 
			this->fileNameBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->fileNameBox->Location = System::Drawing::Point(673, 135);
			this->fileNameBox->Name = L"fileNameBox";
			this->fileNameBox->Size = System::Drawing::Size(331, 49);
			this->fileNameBox->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(666, 65);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(191, 42);
			this->label1->TabIndex = 3;
			this->label1->Text = L"File name:";
			// 
			// add_graph_btn
			// 
			this->add_graph_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->add_graph_btn->Location = System::Drawing::Point(673, 317);
			this->add_graph_btn->Name = L"add_graph_btn";
			this->add_graph_btn->Size = System::Drawing::Size(331, 90);
			this->add_graph_btn->TabIndex = 4;
			this->add_graph_btn->Text = L"Add graph";
			this->add_graph_btn->UseVisualStyleBackColor = true;
			this->add_graph_btn->Click += gcnew System::EventHandler(this, &MainForm::add_graph_btn_Click);
			// 
			// MainForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->ClientSize = System::Drawing::Size(1053, 529);
			this->Controls->Add(this->add_graph_btn);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->fileNameBox);
			this->Controls->Add(this->chart);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MainForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MainForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: double a, b, h;
	private: double x, y;

	private: System::Void exitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void generateGraphsToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void clearGraphToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void add_graph_btn_Click(System::Object^ sender, System::EventArgs^ e);
	};
}
