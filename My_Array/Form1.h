#pragma once
#include "One.h"
#include "Form_Two.h"
namespace My_Array {
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

public ref class Form1 : public System::Windows::Forms::Form
{
	// Объявление массива базового типа.
	array <int> ^Int_array;
	// Объявление массива ссылочного типа объектов One.
	array <One ^>  ^One_array;


	// Объявление массива native типа значений.
	array <Native *> ^Nat_array;
	// Объявление массива ссылочного типа объектов Person. 
	array <Person^> ^ P_array;
	// Статическая переменная.
	static int Count;

private: System::Windows::Forms::Label^  label1;
private: System::Windows::Forms::Button^  button4;
private: System::Windows::Forms::Button^  button5;
private: System::Windows::Forms::TextBox^  textBox2;
private: System::Windows::Forms::Label^  label2;
private: System::Windows::Forms::DataGridView^  dataGridView1;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
private: System::Windows::Forms::Button^  button7;
private: System::Windows::Forms::Button^  button8;
private: System::Windows::Forms::Button^  button9;
private: System::Windows::Forms::Label^  label3;
private: System::Windows::Forms::Button^  button10;
private: System::Windows::Forms::Button^  button11;
private: System::Windows::Forms::Button^  button12;
private: System::Windows::Forms::DataGridView^  dataGridView2;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column2;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column3;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column4;
private: System::Windows::Forms::Button^  button13;
private: System::Windows::Forms::TextBox^  textBox3;
private: System::Windows::Forms::TextBox^  textBox4;
private: System::Windows::Forms::TextBox^  textBox5;
private: System::Windows::Forms::Label^  label4;
private: System::Windows::Forms::Label^  label5;
private: System::Windows::Forms::Label^  label6;
private: System::Windows::Forms::ContextMenuStrip^  contextMenuStrip1;
private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem1;
private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem2;
private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem3;
private: System::Windows::Forms::ListBox^  listBox1;
private: System::Windows::Forms::Button^  button6;
private: System::Windows::Forms::TextBox^  textBox1;
private: System::Windows::Forms::Button^  button1;
private: System::Windows::Forms::Button^  button2;
private: System::Windows::Forms::Button^  button3;
private: System::Windows::Forms::Button^  button14;
private: System::ComponentModel::IContainer^  components;
public:
	Form1(void)
	{
		InitializeComponent();
		// Порождение объектов.
	 Int_array = gcnew array <int> (SIZE);
     One_array = gcnew array <One^> (SIZE);
	  // распределить память каждому: .


	 Nat_array = gcnew array <Native *> (SIZE);
     P_array   = gcnew array <Person ^> (SIZE);
     Count=0;
	}
protected:
	~Form1()
	{
		if (components)
		{
			delete components;
		}
	}

#pragma region Windows Form Designer generated code
	/// <summary>
	/// Обязательный метод для поддержки конструктора - не изменяйте
	/// содержимое данного метода при помощи редактора кода.
	/// </summary>
	void InitializeComponent(void)
	{
		this->components = (gcnew System::ComponentModel::Container());
		this->textBox1 = (gcnew System::Windows::Forms::TextBox());
		this->button1 = (gcnew System::Windows::Forms::Button());
		this->button2 = (gcnew System::Windows::Forms::Button());
		this->button3 = (gcnew System::Windows::Forms::Button());
		this->label1 = (gcnew System::Windows::Forms::Label());
		this->button4 = (gcnew System::Windows::Forms::Button());
		this->button5 = (gcnew System::Windows::Forms::Button());
		this->button6 = (gcnew System::Windows::Forms::Button());
		this->textBox2 = (gcnew System::Windows::Forms::TextBox());
		this->label2 = (gcnew System::Windows::Forms::Label());
		this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
		this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
		this->button7 = (gcnew System::Windows::Forms::Button());
		this->button8 = (gcnew System::Windows::Forms::Button());
		this->button9 = (gcnew System::Windows::Forms::Button());
		this->label3 = (gcnew System::Windows::Forms::Label());
		this->button10 = (gcnew System::Windows::Forms::Button());
		this->button11 = (gcnew System::Windows::Forms::Button());
		this->button12 = (gcnew System::Windows::Forms::Button());
		this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
		this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
		this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
		this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
		this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
		this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
		this->toolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
		this->toolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
		this->button13 = (gcnew System::Windows::Forms::Button());
		this->textBox3 = (gcnew System::Windows::Forms::TextBox());
		this->textBox4 = (gcnew System::Windows::Forms::TextBox());
		this->textBox5 = (gcnew System::Windows::Forms::TextBox());
		this->label4 = (gcnew System::Windows::Forms::Label());
		this->label5 = (gcnew System::Windows::Forms::Label());
		this->label6 = (gcnew System::Windows::Forms::Label());
		this->listBox1 = (gcnew System::Windows::Forms::ListBox());
		this->button14 = (gcnew System::Windows::Forms::Button());
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
		this->contextMenuStrip1->SuspendLayout();
		this->SuspendLayout();
		// 
		// textBox1
		// 
		this->textBox1->Location = System::Drawing::Point(157, 25);
		this->textBox1->Multiline = true;
		this->textBox1->Name = L"textBox1";
		this->textBox1->Size = System::Drawing::Size(190, 80);
		this->textBox1->TabIndex = 0;
		this->textBox1->Text = L"один\r\nдва\r\nтри\r\n";
		// 
		// button1
		// 
		this->button1->Location = System::Drawing::Point(9, 23);
		this->button1->Name = L"button1";
		this->button1->Size = System::Drawing::Size(142, 23);
		this->button1->TabIndex = 1;
		this->button1->Text = L"Массив целых";
		this->button1->UseVisualStyleBackColor = true;
		this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
		// 
		// button2
		// 
		this->button2->Location = System::Drawing::Point(9, 52);
		this->button2->Name = L"button2";
		this->button2->Size = System::Drawing::Size(142, 23);
		this->button2->TabIndex = 2;
		this->button2->Text = L"Массив объектов";
		this->button2->UseVisualStyleBackColor = true;
		this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
		// 
		// button3
		// 
		this->button3->Location = System::Drawing::Point(8, 80);
		this->button3->Name = L"button3";
		this->button3->Size = System::Drawing::Size(142, 23);
		this->button3->TabIndex = 3;
		this->button3->Text = L"Массив значений";
		this->button3->UseVisualStyleBackColor = true;
		this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
		// 
		// label1
		// 
		this->label1->AutoSize = true;
		this->label1->Location = System::Drawing::Point(6, 330);
		this->label1->Name = L"label1";
		this->label1->Size = System::Drawing::Size(134, 13);
		this->label1->TabIndex = 4;
		this->label1->Text = L"Инициализация массива";
		// 
		// button4
		// 
		this->button4->Location = System::Drawing::Point(9, 353);
		this->button4->Name = L"button4";
		this->button4->Size = System::Drawing::Size(142, 23);
		this->button4->TabIndex = 5;
		this->button4->Text = L"Массив строк";
		this->button4->UseVisualStyleBackColor = true;
		this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
		// 
		// button5
		// 
		this->button5->Location = System::Drawing::Point(9, 382);
		this->button5->Name = L"button5";
		this->button5->Size = System::Drawing::Size(142, 23);
		this->button5->TabIndex = 6;
		this->button5->Text = L"Массив целых";
		this->button5->UseVisualStyleBackColor = true;
		this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
		// 
		// button6
		// 
		this->button6->Location = System::Drawing::Point(9, 413);
		this->button6->Name = L"button6";
		this->button6->Size = System::Drawing::Size(142, 23);
		this->button6->TabIndex = 7;
		this->button6->Text = L"Массив объектов";
		this->button6->UseVisualStyleBackColor = true;
		this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
		// 
		// textBox2
		// 
		this->textBox2->Location = System::Drawing::Point(157, 355);
		this->textBox2->Multiline = true;
		this->textBox2->Name = L"textBox2";
		this->textBox2->Size = System::Drawing::Size(190, 80);
		this->textBox2->TabIndex = 8;
		// 
		// label2
		// 
		this->label2->AutoSize = true;
		this->label2->Location = System::Drawing::Point(211, 9);
		this->label2->Name = L"label2";
		this->label2->Size = System::Drawing::Size(64, 13);
		this->label2->TabIndex = 9;
		this->label2->Text = L"Интерфейс";
		// 
		// dataGridView1
		// 
		this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::DisplayedCells;
		this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
		this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) { this->Column1 });
		this->dataGridView1->Location = System::Drawing::Point(9, 111);
		this->dataGridView1->Name = L"dataGridView1";
		this->dataGridView1->Size = System::Drawing::Size(665, 50);
		this->dataGridView1->TabIndex = 10;
		// 
		// Column1
		// 
		this->Column1->HeaderText = L"Один";
		this->Column1->Name = L"Column1";
		this->Column1->Width = 58;
		// 
		// button7
		// 
		this->button7->Location = System::Drawing::Point(353, 25);
		this->button7->Name = L"button7";
		this->button7->Size = System::Drawing::Size(107, 24);
		this->button7->TabIndex = 11;
		this->button7->Text = L"Вывести";
		this->button7->UseVisualStyleBackColor = true;
		this->button7->Click += gcnew System::EventHandler(this, &Form1::button7_Click);
		// 
		// button8
		// 
		this->button8->Location = System::Drawing::Point(353, 54);
		this->button8->Name = L"button8";
		this->button8->Size = System::Drawing::Size(107, 24);
		this->button8->TabIndex = 12;
		this->button8->Text = L"Вывести";
		this->button8->UseVisualStyleBackColor = true;
		this->button8->Click += gcnew System::EventHandler(this, &Form1::button8_Click);
		// 
		// button9
		// 
		this->button9->Location = System::Drawing::Point(353, 82);
		this->button9->Name = L"button9";
		this->button9->Size = System::Drawing::Size(107, 24);
		this->button9->TabIndex = 13;
		this->button9->Text = L"Вывести";
		this->button9->UseVisualStyleBackColor = true;
		this->button9->Click += gcnew System::EventHandler(this, &Form1::button9_Click);
		// 
		// label3
		// 
		this->label3->AutoSize = true;
		this->label3->Location = System::Drawing::Point(12, 177);
		this->label3->Name = L"label3";
		this->label3->Size = System::Drawing::Size(79, 13);
		this->label3->TabIndex = 14;
		this->label3->Text = L"Ввод из грида";
		// 
		// button10
		// 
		this->button10->Location = System::Drawing::Point(8, 193);
		this->button10->Name = L"button10";
		this->button10->Size = System::Drawing::Size(171, 24);
		this->button10->TabIndex = 15;
		this->button10->Text = L"Ввести массив целых ";
		this->button10->UseVisualStyleBackColor = true;
		this->button10->Click += gcnew System::EventHandler(this, &Form1::button10_Click);
		// 
		// button11
		// 
		this->button11->Location = System::Drawing::Point(466, 54);
		this->button11->Name = L"button11";
		this->button11->Size = System::Drawing::Size(144, 24);
		this->button11->TabIndex = 16;
		this->button11->Text = L"Очистить грид";
		this->button11->UseVisualStyleBackColor = true;
		this->button11->Click += gcnew System::EventHandler(this, &Form1::button11_Click);
		// 
		// button12
		// 
		this->button12->Location = System::Drawing::Point(202, 193);
		this->button12->Name = L"button12";
		this->button12->Size = System::Drawing::Size(192, 25);
		this->button12->TabIndex = 17;
		this->button12->Text = L"Добавление строк";
		this->button12->UseVisualStyleBackColor = true;
		this->button12->Click += gcnew System::EventHandler(this, &Form1::button12_Click);
		// 
		// dataGridView2
		// 
		this->dataGridView2->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::DisplayedCells;
		this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
		this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
			this->Column2,
				this->Column3, this->Column4
		});
		this->dataGridView2->ContextMenuStrip = this->contextMenuStrip1;
		this->dataGridView2->Location = System::Drawing::Point(400, 193);
		this->dataGridView2->Name = L"dataGridView2";
		this->dataGridView2->Size = System::Drawing::Size(264, 224);
		this->dataGridView2->TabIndex = 18;
		// 
		// Column2
		// 
		this->Column2->HeaderText = L"Имя";
		this->Column2->Name = L"Column2";
		this->Column2->Width = 54;
		// 
		// Column3
		// 
		this->Column3->HeaderText = L"Фамилия";
		this->Column3->Name = L"Column3";
		this->Column3->Width = 81;
		// 
		// Column4
		// 
		this->Column4->HeaderText = L"Возраст";
		this->Column4->Name = L"Column4";
		this->Column4->Width = 74;
		// 
		// contextMenuStrip1
		// 
		this->contextMenuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
			this->toolStripMenuItem1,
				this->toolStripMenuItem2, this->toolStripMenuItem3
		});
		this->contextMenuStrip1->Name = L"contextMenuStrip1";
		this->contextMenuStrip1->Size = System::Drawing::Size(155, 70);
		this->contextMenuStrip1->Opening += gcnew System::ComponentModel::CancelEventHandler(this, &Form1::contextMenuStrip1_Opening);
		// 
		// toolStripMenuItem1
		// 
		this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
		this->toolStripMenuItem1->Size = System::Drawing::Size(154, 22);
		this->toolStripMenuItem1->Text = L"Очистить грид";
		this->toolStripMenuItem1->Click += gcnew System::EventHandler(this, &Form1::toolStripMenuItem1_Click);
		// 
		// toolStripMenuItem2
		// 
		this->toolStripMenuItem2->Name = L"toolStripMenuItem2";
		this->toolStripMenuItem2->Size = System::Drawing::Size(154, 22);
		this->toolStripMenuItem2->Text = L"Удалить";
		this->toolStripMenuItem2->Click += gcnew System::EventHandler(this, &Form1::toolStripMenuItem2_Click);
		// 
		// toolStripMenuItem3
		// 
		this->toolStripMenuItem3->Name = L"toolStripMenuItem3";
		this->toolStripMenuItem3->Size = System::Drawing::Size(154, 22);
		this->toolStripMenuItem3->Text = L"Сохранить все";
		this->toolStripMenuItem3->Click += gcnew System::EventHandler(this, &Form1::toolStripMenuItem3_Click);
		// 
		// button13
		// 
		this->button13->Location = System::Drawing::Point(11, 224);
		this->button13->Name = L"button13";
		this->button13->Size = System::Drawing::Size(167, 23);
		this->button13->TabIndex = 19;
		this->button13->Text = L"Сортировать";
		this->button13->UseVisualStyleBackColor = true;
		this->button13->Click += gcnew System::EventHandler(this, &Form1::button13_Click);
		// 
		// textBox3
		// 
		this->textBox3->Location = System::Drawing::Point(261, 226);
		this->textBox3->Name = L"textBox3";
		this->textBox3->Size = System::Drawing::Size(133, 20);
		this->textBox3->TabIndex = 20;
		// 
		// textBox4
		// 
		this->textBox4->Location = System::Drawing::Point(261, 248);
		this->textBox4->Name = L"textBox4";
		this->textBox4->Size = System::Drawing::Size(133, 20);
		this->textBox4->TabIndex = 21;
		// 
		// textBox5
		// 
		this->textBox5->Location = System::Drawing::Point(261, 271);
		this->textBox5->Name = L"textBox5";
		this->textBox5->Size = System::Drawing::Size(133, 20);
		this->textBox5->TabIndex = 22;
		// 
		// label4
		// 
		this->label4->AutoSize = true;
		this->label4->Location = System::Drawing::Point(197, 229);
		this->label4->Name = L"label4";
		this->label4->Size = System::Drawing::Size(29, 13);
		this->label4->TabIndex = 23;
		this->label4->Text = L"Имя";
		// 
		// label5
		// 
		this->label5->AutoSize = true;
		this->label5->Location = System::Drawing::Point(195, 252);
		this->label5->Name = L"label5";
		this->label5->Size = System::Drawing::Size(56, 13);
		this->label5->TabIndex = 24;
		this->label5->Text = L"Фамилия";
		// 
		// label6
		// 
		this->label6->AutoSize = true;
		this->label6->Location = System::Drawing::Point(197, 275);
		this->label6->Name = L"label6";
		this->label6->Size = System::Drawing::Size(49, 13);
		this->label6->TabIndex = 25;
		this->label6->Text = L"Возраст";
		// 
		// listBox1
		// 
		this->listBox1->FormattingEnabled = true;
		this->listBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Один", L"Два", L"Три", L"Четыре" });
		this->listBox1->Location = System::Drawing::Point(11, 255);
		this->listBox1->Name = L"listBox1";
		this->listBox1->Size = System::Drawing::Size(166, 56);
		this->listBox1->TabIndex = 26;
		// 
		// button14
		// 
		this->button14->Location = System::Drawing::Point(710, 388);
		this->button14->Name = L"button14";
		this->button14->Size = System::Drawing::Size(91, 28);
		this->button14->TabIndex = 27;
		this->button14->Text = L"Вторая форма";
		this->button14->UseVisualStyleBackColor = true;
		this->button14->Click += gcnew System::EventHandler(this, &Form1::button14_Click);
		// 
		// Form1
		// 
		this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
		this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
		this->ClientSize = System::Drawing::Size(805, 447);
		this->Controls->Add(this->button14);
		this->Controls->Add(this->listBox1);
		this->Controls->Add(this->label6);
		this->Controls->Add(this->label5);
		this->Controls->Add(this->label4);
		this->Controls->Add(this->textBox5);
		this->Controls->Add(this->textBox4);
		this->Controls->Add(this->textBox3);
		this->Controls->Add(this->button13);
		this->Controls->Add(this->dataGridView2);
		this->Controls->Add(this->button12);
		this->Controls->Add(this->button11);
		this->Controls->Add(this->button10);
		this->Controls->Add(this->label3);
		this->Controls->Add(this->button9);
		this->Controls->Add(this->button8);
		this->Controls->Add(this->button7);
		this->Controls->Add(this->dataGridView1);
		this->Controls->Add(this->label2);
		this->Controls->Add(this->textBox2);
		this->Controls->Add(this->button6);
		this->Controls->Add(this->button5);
		this->Controls->Add(this->button4);
		this->Controls->Add(this->label1);
		this->Controls->Add(this->button3);
		this->Controls->Add(this->button2);
		this->Controls->Add(this->button1);
		this->Controls->Add(this->textBox1);
		this->Name = L"Form1";
		this->Text = L"Типа array";
		this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
		this->contextMenuStrip1->ResumeLayout(false);
		this->ResumeLayout(false);
		this->PerformLayout();

	}
#pragma endregion


private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) 
{
}
// Как создать массив базового типа int.
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e)
{
	// Заполнить значениями:
	for(int i=0; i<SIZE;i++)
		 Int_array[i]=i+1;
	// Визуализация:   
    this->textBox1->Text="";
	for(int i=0; i<SIZE; i++)
	   this->textBox1->Text +=  Int_array[i].ToString() + " "; // Найти Ентер
}
// Как создать массив ссылочного типа.
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) 
{
// Заполнить значениями:
for(int i=0; i<SIZE;i++)
   {
	  One_array[i] = gcnew One;
      One_array[i]->x = i+1;
      One_array[i]->y = SIZE-i;
   }
// Визуализация: 
this->textBox1->Text="";
for(int i=0; i<SIZE; i++)
    this->textBox1->Text += One_array[i]->ToString();	// ToString перегружена.
}

// Массив значений.
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) 
{
 int i;
   // Обнулить
   for (i=0; i<SIZE; i++)
   {	
	  Nat_array[i]=new Native;
      Nat_array[i]->a=0;
      Nat_array[i]->b=0;
   }
 //Присвоить значения.
 Init_native(Nat_array);
 this->textBox1->Text="";
 // Вывести.
 for (i=0; i<SIZE; i++)
 	   this->textBox1->Text +=  "(a="+Nat_array[i]->a.ToString()+" b="+ Nat_array[i]->b.ToString()+") ";
}

// Массив строк. 
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) 
{
array  <String ^> ^ Str = gcnew array <String ^> {"Во ","поле ","береза ","типа ","стояла."};

this->textBox2->Text="";
for(int i=0; i<Str->Length; i++)
	   this->textBox2->Text += Str[i];
//array  <String ^> ^ Str =  {"Понедельник ","Вторник ","Среда "};
}

		 // Массив целых
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) 
{
array  <int> ^ Arr = gcnew array <int> {1,2,3,4,5,6};
this->textBox2->Text="";
for(int i=0; i<Arr->Length; i++)
	  this->textBox2->Text += Arr[i].ToString()+" ";
}
// Массив объектов
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) 
   {
array<One ^> ^ Arr_Class = {gcnew One(0,1), gcnew One(1,2), gcnew One(2,3)}; 
this->textBox2->Text="";	 
for(int i=0; i<Arr_Class->Length; i++)
	 this->textBox2->Text += Arr_Class[i]->ToString()+" ";
}

// Вывод целочисленного массива в грид.
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) 
{
this->dataGridView1->ColumnCount=SIZE+1;
// Заполнение заголовков номерами.
// Свойство Columns.HeaderText
for (int i=0; i<SIZE; i++)
  this->dataGridView1->Columns[i]->HeaderText = "_"+i.ToString()+"_";
String ^ S = gcnew String("");
for (int i=0; i<SIZE; i++)
  { 
   S = System::Convert::ToString(Int_array[i]);
   this->dataGridView1->Rows[0]->Cells[i]->Value = S;
  }
}
// Вывод массива объектов в грид.
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) 
{ 
this->dataGridView1->ColumnCount=SIZE+1;
// Заполнение заголовков номерами.
// Свойство Columns.HeaderText
for (int i=0; i<SIZE; i++)
  this->dataGridView1->Columns[i]->HeaderText = "_"+i.ToString()+"_";
for (int i=0; i<SIZE; i++)
  this->dataGridView1->Rows[0]->Cells[i]->Value = One_array[i]->ToString();
}
// Вывод массива значений.
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) 
{
   // Ну так же точно.
}
// Очистить грид.
private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) 
{
for (int i=0; i<dataGridView1->ColumnCount; i++)
  this->dataGridView1->Rows[0]->Cells[i]->Value = "";
}
// Ввести массив 
private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) 
{
String ^ S = gcnew String("");
for (int i=0;i<SIZE; i++)
  {
   S = this->dataGridView1->Rows[0]->Cells[i]->Value->ToString();
   Int_array[i]=System::Convert::ToInt32(S);
  }
}
// Сортировка.
private: System::Void button13_Click(System::Object^  sender, System::EventArgs^  e) 
{
	System::Array::Sort(Int_array);
    System::Array::Sort(One_array);
}
// Ввод в грид массива персон.
private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) 
{
// Показать в гриде
   array  <String ^> ^ Str;
   Str = gcnew array <String ^> {this->textBox3->Text,this->textBox4->Text,this->textBox5->Text};
    this->dataGridView2->Rows->Add(Str);

// Сохранить в массиве
  P_array[Count] = gcnew Person;
  P_array[Count]->Name = this->textBox3->Text;
  P_array[Count]->NickName = this->textBox4->Text;
  P_array[Count]->Age = Convert::ToInt16(this->textBox5->Text);
  if (Count<SIZE) Count++;
}
private: System::Void contextMenuStrip1_Opening(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) 
{
}
private: System::Void toolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) 
{
// Очистить грид.
   this->dataGridView2->RowCount=0;
// Удалить массив.
}
private: System::Void toolStripMenuItem2_Click(System::Object^  sender, System::EventArgs^  e) 
{
	// Удалить текущую строку из грида.
    // Удалить текущую строку из массива.
}
private: System::Void toolStripMenuItem3_Click(System::Object^  sender, System::EventArgs^  e) 
{
		// Очистить массив.
		// Заново прочитать из грида.
}

private: System::Void button14_Click(System::Object^  sender, System::EventArgs^  e) 
{
	Form ^ form2 = gcnew Form_Two();
	form2->ShowDialog();
}
		 // Объявление массива базового типа.
		 // array <int> ^Int_array;
		 // Int_array->Sort(Int_array);
		 // Объявление массива ссылочного типа объектов One.
		 // array <One ^>  ^One_array;
		 // One_array->Sort(One_array);
		 // Объявление массива native типа значений.
		 // array <Native *> ^Nat_array;
};
}

