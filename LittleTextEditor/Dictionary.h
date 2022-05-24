#pragma once
#include "Header.h"

namespace LittleTextEditor {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Сводка для Dictionary
	/// </summary>
	public ref class Dictionary : public System::Windows::Forms::Form
	{
	private:
		My_Dictionary^ Dic;
		String^ W;
	private: System::Windows::Forms::Button^ button3;
		   String^ File_name;
	public:
		Dictionary(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
			File_name = gcnew String("Vocabulary.txt");
			Dic = gcnew My_Dictionary();
			Dic->Load(File_name);
			Dic->View(this->listBox1);

		}
		Dictionary(String^ myWord)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
			File_name = gcnew String("Vocabulary.txt");
			Dic = gcnew My_Dictionary();
			Dic->Load(File_name);
			Dic->View(this->listBox1);
			W = gcnew String(myWord);
			this->textBox1->Text = W;
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Dictionary()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;

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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(11, 13);
			this->textBox1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(261, 27);
			this->textBox1->TabIndex = 0;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Dictionary::textBox1_TextChanged);
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 20;
			this->listBox1->Location = System::Drawing::Point(11, 48);
			this->listBox1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(261, 444);
			this->listBox1->TabIndex = 1;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Dictionary::listBox1_SelectedIndexChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(278, 12);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(759, 251);
			this->textBox2->TabIndex = 2;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(278, 301);
			this->textBox3->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(209, 27);
			this->textBox3->TabIndex = 3;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &Dictionary::textBox3_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(278, 273);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(261, 24);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Редактирование словаря";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(278, 335);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(759, 157);
			this->textBox4->TabIndex = 5;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(493, 300);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(161, 28);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Добавить слово";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Dictionary::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(660, 300);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(154, 28);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Удалить слово";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Dictionary::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(820, 300);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(217, 28);
			this->button3->TabIndex = 8;
			this->button3->Text = L"Изменить определение";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Dictionary::button3_Click);
			// 
			// Dictionary
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1050, 515);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->textBox1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Name = L"Dictionary";
			this->Text = L"Dictionary";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		if (Dic->Find(this->textBox1->Text) != -1)
			this->listBox1->SelectedIndex = Dic->Find(this->textBox1->Text);
	}
private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	Dic->Mean(this->listBox1->SelectedIndex, this->textBox2);
}


private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	Pair^ pair = gcnew Pair();
	pair->wo = this->textBox3->Text + " ";
	pair->def = this->textBox4->Text;
	Dic->Add_New(pair);
	this->listBox1->Items->Clear();
	Dic->View(listBox1);
	Dic->Unload(File_name);	
	if (Dic->Find(this->textBox3->Text) != -1)
		this->listBox1->SelectedIndex = Dic->Find(this->textBox3->Text);
}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ Word = gcnew String("");
	Word = this->textBox3->Text;
	Dic->Del(Word);
	this->listBox1->Items->Clear();
	Dic->View(listBox1);
	Dic->Unload("Vocabulary.txt");
	this->textBox2->Text = "";
}
private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (Dic->Find(this->textBox3->Text) != -1)
		this->listBox1->SelectedIndex = Dic->Find(this->textBox3->Text);
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	Pair^ pair = gcnew Pair();
	pair->wo = this->textBox3->Text;
	pair->def = this->textBox4->Text;
	Dic->Change(pair);
	this->listBox1->Items->Clear();
	Dic->View(listBox1);
	Dic->Unload(File_name);
	if (Dic->Find(this->textBox3->Text) != -1)
		this->listBox1->SelectedIndex = Dic->Find(this->textBox3->Text);
}

};
}
