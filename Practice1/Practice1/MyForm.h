#pragma once
#include "Header.h"

namespace Practice1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
		M_Point^ A;
		M_Point^ B;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::TextBox^ textBox17;
	private: System::Windows::Forms::TextBox^ textBox18;
	private: System::Windows::Forms::TextBox^ textBox19;
	private: System::Windows::Forms::TextBox^ textBox20;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
		   M_Point^ C;
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
			A = gcnew M_Point();
			B = gcnew M_Point();
			C = gcnew M_Point();
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
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::TextBox^ textBox13;
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::TextBox^ textBox14;
	private: System::Windows::Forms::TextBox^ textBox15;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::TextBox^ textBox16;



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
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox19 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->textBox20 = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(95, 17);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(83, 22);
			this->textBox1->TabIndex = 0;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(95, 45);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(83, 22);
			this->textBox2->TabIndex = 1;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(92, 17);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(82, 22);
			this->textBox3->TabIndex = 2;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(92, 45);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(82, 22);
			this->textBox4->TabIndex = 3;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(336, 73);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(120, 22);
			this->textBox5->TabIndex = 4;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(337, 76);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(119, 22);
			this->textBox6->TabIndex = 5;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(51, 20);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(33, 17);
			this->label1->TabIndex = 6;
			this->label1->Text = L"X = ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(51, 48);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(33, 17);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Y = ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(48, 21);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(33, 17);
			this->label3->TabIndex = 8;
			this->label3->Text = L"X = ";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(48, 48);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(33, 17);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Y = ";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(334, 18);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(90, 17);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Расстояние:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(334, 18);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(90, 17);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Расстояние:";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(184, 15);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(106, 27);
			this->button1->TabIndex = 12;
			this->button1->Text = L"Присвоить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(184, 43);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(106, 26);
			this->button2->TabIndex = 13;
			this->button2->Text = L"Показать";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(183, 15);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(107, 27);
			this->button3->TabIndex = 14;
			this->button3->Text = L"Присвоить";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(183, 43);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(107, 25);
			this->button4->TabIndex = 15;
			this->button4->Text = L"Показать";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(95, 73);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(83, 22);
			this->textBox7->TabIndex = 16;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(19, 76);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(65, 17);
			this->label7->TabIndex = 17;
			this->label7->Text = L"Масса = ";
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(92, 73);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(83, 22);
			this->textBox8->TabIndex = 18;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(16, 76);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(65, 17);
			this->label8->TabIndex = 19;
			this->label8->Text = L"Масса = ";
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(501, 131);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(134, 32);
			this->button5->TabIndex = 20;
			this->button5->Text = L"Сравнить (1>2)";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(641, 136);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(125, 22);
			this->textBox9->TabIndex = 21;
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::SystemColors::Control;
			this->groupBox1->Controls->Add(this->textBox17);
			this->groupBox1->Controls->Add(this->button6);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->textBox7);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->textBox5);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Location = System::Drawing::Point(11, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(477, 114);
			this->groupBox1->TabIndex = 24;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Точка 1";
			// 
			// textBox17
			// 
			this->textBox17->Location = System::Drawing::Point(184, 73);
			this->textBox17->Name = L"textBox17";
			this->textBox17->Size = System::Drawing::Size(106, 22);
			this->textBox17->TabIndex = 19;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(336, 43);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(120, 25);
			this->button6->TabIndex = 18;
			this->button6->Text = L"Рассчитать";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::SystemColors::Control;
			this->groupBox2->Controls->Add(this->textBox18);
			this->groupBox2->Controls->Add(this->button7);
			this->groupBox2->Controls->Add(this->label8);
			this->groupBox2->Controls->Add(this->textBox8);
			this->groupBox2->Controls->Add(this->button4);
			this->groupBox2->Controls->Add(this->button3);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Controls->Add(this->textBox6);
			this->groupBox2->Controls->Add(this->textBox4);
			this->groupBox2->Controls->Add(this->textBox3);
			this->groupBox2->Location = System::Drawing::Point(11, 132);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(478, 117);
			this->groupBox2->TabIndex = 25;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Точка 2";
			// 
			// textBox18
			// 
			this->textBox18->Location = System::Drawing::Point(183, 74);
			this->textBox18->Name = L"textBox18";
			this->textBox18->Size = System::Drawing::Size(107, 22);
			this->textBox18->TabIndex = 21;
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(336, 44);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(120, 26);
			this->button7->TabIndex = 20;
			this->button7->Text = L"Рассчитать";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// groupBox3
			// 
			this->groupBox3->BackColor = System::Drawing::SystemColors::Control;
			this->groupBox3->Controls->Add(this->textBox19);
			this->groupBox3->Controls->Add(this->label10);
			this->groupBox3->Controls->Add(this->label9);
			this->groupBox3->Controls->Add(this->label11);
			this->groupBox3->Controls->Add(this->label12);
			this->groupBox3->Controls->Add(this->button10);
			this->groupBox3->Controls->Add(this->button9);
			this->groupBox3->Controls->Add(this->button8);
			this->groupBox3->Controls->Add(this->textBox13);
			this->groupBox3->Controls->Add(this->textBox12);
			this->groupBox3->Controls->Add(this->textBox11);
			this->groupBox3->Controls->Add(this->textBox10);
			this->groupBox3->Location = System::Drawing::Point(501, 11);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(465, 114);
			this->groupBox3->TabIndex = 26;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Точка 3";
			// 
			// textBox19
			// 
			this->textBox19->Location = System::Drawing::Point(187, 72);
			this->textBox19->Name = L"textBox19";
			this->textBox19->Size = System::Drawing::Size(107, 22);
			this->textBox19->TabIndex = 30;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(15, 77);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(65, 17);
			this->label10->TabIndex = 21;
			this->label10->Text = L"Масса = ";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(322, 21);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(90, 17);
			this->label9->TabIndex = 19;
			this->label9->Text = L"Расстояние:";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(47, 49);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(33, 17);
			this->label11->TabIndex = 20;
			this->label11->Text = L"Y = ";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(47, 21);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(33, 17);
			this->label12->TabIndex = 19;
			this->label12->Text = L"X = ";
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(325, 42);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(119, 24);
			this->button10->TabIndex = 27;
			this->button10->Text = L"Рассчитать";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(187, 42);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(107, 26);
			this->button9->TabIndex = 29;
			this->button9->Text = L"Показать";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(187, 14);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(107, 27);
			this->button8->TabIndex = 28;
			this->button8->Text = L"Присвоить";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(325, 72);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(119, 22);
			this->textBox13->TabIndex = 27;
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(97, 72);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(84, 22);
			this->textBox12->TabIndex = 2;
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(97, 44);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(84, 22);
			this->textBox11->TabIndex = 1;
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(97, 18);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(84, 22);
			this->textBox10->TabIndex = 0;
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(501, 173);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(134, 32);
			this->button11->TabIndex = 27;
			this->button11->Text = L"Сравнить (1>3)";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(501, 218);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(134, 31);
			this->button12->TabIndex = 28;
			this->button12->Text = L"Сравнить (2>3)";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(641, 177);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(125, 22);
			this->textBox14->TabIndex = 29;
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(641, 222);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(125, 22);
			this->textBox15->TabIndex = 30;
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(795, 136);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(170, 55);
			this->button13->TabIndex = 31;
			this->button13->Text = L"Найти максимум";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// textBox16
			// 
			this->textBox16->Location = System::Drawing::Point(860, 197);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(105, 22);
			this->textBox16->TabIndex = 32;
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(106, 271);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(155, 28);
			this->button14->TabIndex = 33;
			this->button14->Text = L"Присвоить всё";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			// 
			// button15
			// 
			this->button15->Location = System::Drawing::Point(296, 271);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(171, 26);
			this->button15->TabIndex = 34;
			this->button15->Text = L"Показать всё";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
			// 
			// button16
			// 
			this->button16->Location = System::Drawing::Point(701, 270);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(163, 27);
			this->button16->TabIndex = 35;
			this->button16->Text = L"Сравнить всё";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::button16_Click);
			// 
			// button17
			// 
			this->button17->Location = System::Drawing::Point(510, 270);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(152, 27);
			this->button17->TabIndex = 36;
			this->button17->Text = L"Рассчитать всё";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::button17_Click);
			// 
			// textBox20
			// 
			this->textBox20->Location = System::Drawing::Point(860, 225);
			this->textBox20->Name = L"textBox20";
			this->textBox20->Size = System::Drawing::Size(105, 22);
			this->textBox20->TabIndex = 37;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(792, 200);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(64, 17);
			this->label13->TabIndex = 38;
			this->label13->Text = L"№ точки";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(807, 228);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(49, 17);
			this->label14->TabIndex = 39;
			this->label14->Text = L"Масса";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->ClientSize = System::Drawing::Size(977, 320);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->textBox20);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->textBox16);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->textBox15);
			this->Controls->Add(this->textBox14);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->button5);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	this->textBox1->Text = A->X.ToString();
	this->textBox2->Text = A->Y.ToString();
	this->textBox7->Text = A->M.ToString();
	this->textBox3->Text = B->X.ToString();
	this->textBox4->Text = B->Y.ToString();
	this->textBox8->Text = B->M.ToString();
	this->textBox10->Text = C->X.ToString();
	this->textBox11->Text = C->Y.ToString();
	this->textBox12->Text = C->M.ToString();
	this->textBox5->Text = A->Distance().ToString();
	this->textBox6->Text = B->Distance().ToString();
	this->textBox13->Text = C->Distance().ToString();
}
	   //Присвоить1
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->textBox1->Text == "")
		A->X = 0;
	else
		A->X = Convert::ToInt32(this->textBox1->Text);

	if (this->textBox2->Text == "")
		A->Y = 0;
	else
		A->Y = Convert::ToInt32(this->textBox2->Text);

	if (this->textBox7->Text == "")
		A->M = 0;
	else
		A->M = Convert::ToInt32(this->textBox7->Text);
}
	   //Присвоить2
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->textBox3->Text == "")
		B->X = 0;
	else
		B->X = Convert::ToInt32(this->textBox3->Text);

	if (this->textBox4->Text == "")
		B->Y = 0;
	else
		B->Y = Convert::ToInt32(this->textBox4->Text);

	if (this->textBox8->Text == "")
		B->M = 0;
	else
		B->M = Convert::ToInt32(this->textBox8->Text);
}
	   //Присвоить3
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->textBox10->Text == "")
		C->X = 0;
	else
		C->X = Convert::ToInt32(this->textBox10->Text);

	if (this->textBox11->Text == "")
		C->Y = 0;
	else
		C->Y = Convert::ToInt32(this->textBox11->Text);

	if (this->textBox12->Text == "")
		C->M = 0;
	else
		C->M = Convert::ToInt32(this->textBox12->Text);
}
	   //Присвоить всё
private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
	button1_Click(sender, e);
	button3_Click(sender, e);
	button8_Click(sender, e);
}
	   //Показать1
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->textBox1->Text = A->X.ToString();
	this->textBox2->Text = A->Y.ToString();
	this->textBox7->Text = A->M.ToString();
	this->textBox17->Text = A->ToString();
}
	   //Показать2
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	this->textBox3->Text = B->X.ToString();
	this->textBox4->Text = B->Y.ToString();
	this->textBox8->Text = B->M.ToString();
	this->textBox18->Text = B->ToString();
}
	   //Показать3
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	this->textBox10->Text = C->X.ToString();
	this->textBox11->Text = C->Y.ToString();
	this->textBox12->Text = C->M.ToString();
	this->textBox19->Text = C->ToString();
}
	   //Показать всё
private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
	button2_Click(sender, e);
	button4_Click(sender, e);
	button9_Click(sender, e);
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	this->textBox5->Text = A->Distance().ToString();
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	this->textBox6->Text = B->Distance().ToString();
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	this->textBox13->Text = C->Distance().ToString();
}

private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {
	button6_Click(sender, e);
	button7_Click(sender, e);
	button10_Click(sender, e);
}
	   //Сравнение 1 и 2
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	this->textBox9->Text = (A > B).ToString();

}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	this->textBox14->Text = (A > C).ToString();
}

private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
	this->textBox15->Text = (B > C).ToString();
}
private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
	button5_Click(sender, e);
	button11_Click(sender, e);
	button12_Click(sender, e);
}
private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
	double max = A->M;
	int number = 1;
	if (B->M > max)
		{
			max = B->M;
			number = 2;
		}
	if (C->M > max)
		{
			max = C->M;
			number = 3;
		}
	this->textBox16->Text = number.ToString();
	this->textBox20->Text = max.ToString();
}
};
}
