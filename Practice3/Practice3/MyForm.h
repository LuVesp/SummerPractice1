#pragma once
#include "Header.h"
#include <cmath>


namespace Practice3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
		String^ My_Str;
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//

			My_Str = gcnew String("");
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox4;


	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(21, 19);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(432, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"1. Преобразование количества копеек в колво рублей и копеек";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(21, 114);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(151, 17);
			this->label2->TabIndex = 1;
			this->label2->Text = L"2.3 Найти и заменить";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(21, 49);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(116, 17);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Поле для ввода ";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(21, 144);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(336, 17);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Поле RichTextBox для работы с большим текстом";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(24, 69);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(290, 22);
			this->textBox1->TabIndex = 4;
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(24, 164);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::ForcedBoth;
			this->richTextBox1->Size = System::Drawing::Size(333, 242);
			this->richTextBox1->TabIndex = 6;
			this->richTextBox1->Text = L"";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(320, 66);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(95, 25);
			this->button1->TabIndex = 7;
			this->button1->Text = L"Применить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(363, 163);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(95, 25);
			this->button2->TabIndex = 8;
			this->button2->Text = L"Прочитать";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(363, 253);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(194, 25);
			this->button3->TabIndex = 9;
			this->button3->Text = L"Найти и заменить";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(464, 163);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(93, 25);
			this->button4->TabIndex = 10;
			this->button4->Text = L"Сохранить";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(410, 197);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(147, 22);
			this->textBox2->TabIndex = 11;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(410, 225);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(147, 22);
			this->textBox3->TabIndex = 12;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(363, 200);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(41, 17);
			this->label5->TabIndex = 13;
			this->label5->Text = L"Что\?";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(363, 228);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(43, 17);
			this->label6->TabIndex = 14;
			this->label6->Text = L"Чем\?";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(366, 289);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(190, 117);
			this->textBox4->TabIndex = 15;
			this->textBox4->Text = L"Рекомендую заменять слово \"кот\" любым другим названием жиаотного мужского рода. Т"
				L"ак же можно заменить слово \"стол\" названием предмета мебели. Так интереснее)";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(582, 425);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"Practice3";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->textBox1->Text = Transform(Convert::ToInt32(this->textBox1->Text));
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		// Объявить поток и связать с файлом.
		String^ File_Name;
		// Получить имя файла.
		File_Name = Directory::GetCurrentDirectory() + "\\" + "Text.txt";
		StreamReader^ My_SR = File::OpenText(File_Name);
		// Куда читать. Нужен массив строк.
		String^ My_Str = gcnew String("");
		int count = 0;
		System::Object^ Line;
		while (1)
		{
			My_Str = My_SR->ReadLine();
			if (My_Str == nullptr) break;
			else
			{
				count++;
				this->richTextBox1->AppendText(My_Str->ToString() + "\n");
			}
		}
	};

private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ Where = gcnew String(this->richTextBox1->Text);
	String^ What = gcnew String(this->textBox2->Text);
	String^ Change = gcnew String(this->textBox3->Text);
	this->richTextBox1->Clear(); // очищаем от текста rtb 
	this->richTextBox1->AppendText(findReplace(Where, What, Change)); // вставляем новый текст

}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ File_Name;
	// Имя файла - TextFile_new, создается в текущем директории.
	File_Name = gcnew String(Directory::GetCurrentDirectory() + "\\" + "Text2.txt");
	StreamWriter^ My_SW = gcnew StreamWriter(File_Name);
	// Запись всего текста.
	My_Str = this->richTextBox1->Text;
	My_SW->Write(My_Str);
	// Поток закрыть.
	My_SW->Close();
}
};
}