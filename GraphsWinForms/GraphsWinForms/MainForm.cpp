#include "MainForm.h"
#include "functions.h"

System::Windows::Forms::DataVisualization::Charting::Series^ AddSeries(System::Drawing::Color color, System::String^ name) {
    System::Windows::Forms::DataVisualization::Charting::Series^ series = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
    series->BorderWidth = 3;
    series->ChartArea = L"ChartArea1";
    series->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
    series->Color = color;
    series->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(204)));
    series->Legend = L"Legend";
    series->Name = name;
    return series;
}

System::Void GraphsWinForms::MainForm::exitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (MessageBox::Show("Do You want exit?", "Warning!", MessageBoxButtons::YesNo) == Windows::Forms::DialogResult::Yes) {
        Application::Exit();
    }
}

System::Void GraphsWinForms::MainForm::generateGraphsToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    a = -3;
    b = 8;
    h = 0.1;
    x = a;

    auto series = AddSeries(System::Drawing::Color::Red, L"main");
    this->chart->Series->Add(series);
    while (x <= b)
    {
        y = f(x);
        this->chart->Series[0]->Points->AddXY(x, y);
        x += h;
    }
}

System::Void GraphsWinForms::MainForm::clearGraphToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{

}

System::Void GraphsWinForms::MainForm::add_graph_btn_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (this->fileNameBox->Text == "")
    {
        MessageBox::Show("Enter a file name in the field!", "Warning!");
        return;
    }
}



