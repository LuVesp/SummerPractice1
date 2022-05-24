#pragma once
#include "Functiouns.h"
#include "Sounds.h"
#include "Comparison.h"
#include "Materials.h"

namespace AnimalWorld {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для AppWindow
	/// </summary>
	public ref class AppWindow : public System::Windows::Forms::Form
	{
		Sounds^ sounds;
		Comparison^ comparison;
	private: System::Windows::Forms::Button^ button1;


	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button10;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label1;

		Materials^ materials;

	public:
		AppWindow(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
			sounds = gcnew Sounds;

		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~AppWindow()
		{
			if (components)
			{
				delete components;
			}
		}
	protected:
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button11;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::Label^ label2;
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AppWindow::typeid));
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label2
			// 
			label2->AutoSize = true;
			label2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			label2->Location = System::Drawing::Point(303, 185);
			label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			label2->Name = L"label2";
			label2->Size = System::Drawing::Size(310, 55);
			label2->TabIndex = 9;
			label2->Text = L"Видео-уроки";
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button9->Location = System::Drawing::Point(794, 315);
			this->button9->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(412, 49);
			this->button9->TabIndex = 4;
			this->button9->Text = L"Кто что ест\?";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &AppWindow::Button9_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button6->Location = System::Drawing::Point(794, 478);
			this->button6->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(412, 49);
			this->button6->TabIndex = 2;
			this->button6->Text = L"Чей след\?";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &AppWindow::Button6_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button8->Location = System::Drawing::Point(794, 396);
			this->button8->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(412, 49);
			this->button8->TabIndex = 0;
			this->button8->Text = L"Кто где живёт\?";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &AppWindow::Button8_Click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button11->Location = System::Drawing::Point(794, 557);
			this->button11->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(412, 49);
			this->button11->TabIndex = 8;
			this->button11->Text = L"Звуки";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &AppWindow::Button11_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(234, 283);
			this->button1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(412, 49);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Внешний вид";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &AppWindow::Button1_Click_1);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(234, 364);
			this->button2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(412, 49);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Тип питания";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &AppWindow::Button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(234, 445);
			this->button3->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(412, 49);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Дикие и домашние";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &AppWindow::Button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(234, 605);
			this->button4->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(412, 49);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Зоны обитания";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &AppWindow::Button4_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button10->Location = System::Drawing::Point(234, 526);
			this->button10->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(412, 49);
			this->button10->TabIndex = 4;
			this->button10->Text = L"Следы";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &AppWindow::Button10_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(929, 185);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(138, 55);
			this->label3->TabIndex = 10;
			this->label3->Text = L"Игры";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(458, 46);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(573, 73);
			this->label1->TabIndex = 11;
			this->label1->Text = L"МИР ЖИВОТНЫХ";
			// 
			// AppWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1443, 804);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label3);
			this->Controls->Add(label2);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button2);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"AppWindow";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"AppWindow";
			this->Load += gcnew System::EventHandler(this, &AppWindow::AppWindow_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void AppWindow_Load(System::Object^ sender, System::EventArgs^ e) {
	}

private: System::Void Button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	try
	{
		materials = gcnew Materials(0);
		materials->ShowDialog();
	}
	catch (System::OutOfMemoryException ^ e)
	{
		GC::Collect();
		GC::WaitForPendingFinalizers();
		materials = gcnew Materials(0);
		materials->ShowDialog();
	}
	this->Show();
}
private: System::Void Button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	try
	{
		materials = gcnew Materials(1);
		materials->ShowDialog();
	}
	catch (System::OutOfMemoryException ^ e)
	{
		GC::Collect();
		GC::WaitForPendingFinalizers();
		materials = gcnew Materials(1);
		materials->ShowDialog();
	}
	this->Show();
}
private: System::Void Button3_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	try
	{
		materials = gcnew Materials(2);
		materials->ShowDialog();
	}
	catch (System::OutOfMemoryException ^ e)
	{
		GC::Collect();
		GC::WaitForPendingFinalizers();
		materials = gcnew Materials(2);
		materials->ShowDialog();
	}
	this->Show();
}
private: System::Void Button10_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	try
	{
		materials = gcnew Materials(3);
		materials->ShowDialog();
	}
	catch (System::OutOfMemoryException ^ e)
	{
		GC::Collect();
		GC::WaitForPendingFinalizers();
		materials = gcnew Materials(3);
		materials->ShowDialog();
	}
	this->Show();
}
private: System::Void Button4_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
\
	try
	{
	materials = gcnew Materials(4);
	materials->ShowDialog();
	}
	catch (System::OutOfMemoryException ^ e)
	{
		GC::Collect();
		GC::WaitForPendingFinalizers();
		materials = gcnew Materials(4);
		materials->ShowDialog();
	}
	this->Show();
}
private: System::Void Button9_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	try
	{
		comparison = gcnew Comparison(0);
		comparison->ShowDialog();
	}
	catch (System::OutOfMemoryException ^ e)
	{
		GC::Collect();
		GC::WaitForPendingFinalizers();
		comparison = gcnew Comparison(0);
		comparison->ShowDialog();
	}
	this->Show();
}
private: System::Void Button8_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	try
	{
		comparison = gcnew Comparison(1);
		comparison->ShowDialog();
	}
	catch (System::OutOfMemoryException ^ e)
	{
		GC::Collect();
		GC::WaitForPendingFinalizers();
		comparison = gcnew Comparison(1);
		comparison->ShowDialog();
	}
	this->Show();
}
private: System::Void Button6_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	try
	{
		comparison = gcnew Comparison(2);
		comparison->ShowDialog();
	}
	catch (System::OutOfMemoryException ^ e)
	{
		GC::Collect();
		GC::WaitForPendingFinalizers();
		comparison = gcnew Comparison(2);
		comparison->ShowDialog();
	}
	this->Show();
}
private: System::Void Button11_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	try
	{
		sounds->ShowDialog();
	}
	catch (System::OutOfMemoryException ^ e)
	{
		GC::Collect();
		GC::WaitForPendingFinalizers();
		sounds->ShowDialog();
	}
	this->Show();
}
private: System::Void GroupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
}
};
}
