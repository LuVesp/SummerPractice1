#pragma once
#include "Header.h"
#include <exception>

namespace Practice2 {

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
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::TextBox^ textBox9;
		   Many^ Sys;
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
			Sys = gcnew Many();
			A = gcnew M_Point();
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
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	protected:



	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;



	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;




	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::Button^ button8;

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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::ControlLight;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->Column1,
					this->Column2, this->Column3
			});
			this->dataGridView1->GridColor = System::Drawing::SystemColors::AppWorkspace;
			this->dataGridView1->Location = System::Drawing::Point(12, 12);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(314, 271);
			this->dataGridView1->TabIndex = 0;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"X";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->Width = 80;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Y";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->Width = 80;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Масса";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			this->Column3->Width = 80;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(94, 24);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(114, 22);
			this->textBox1->TabIndex = 1;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(94, 52);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(114, 22);
			this->textBox2->TabIndex = 2;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(94, 80);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(114, 22);
			this->textBox3->TabIndex = 3;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(73, 24);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(55, 22);
			this->textBox4->TabIndex = 4;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(73, 52);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(55, 22);
			this->textBox5->TabIndex = 5;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(73, 80);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(55, 22);
			this->textBox6->TabIndex = 6;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(38, 27);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(33, 17);
			this->label1->TabIndex = 7;
			this->label1->Text = L"X = ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(38, 57);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(33, 17);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Y = ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(6, 83);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(65, 17);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Масса = ";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(22, 119);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(85, 27);
			this->button1->TabIndex = 13;
			this->button1->Text = L"Записать";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(123, 119);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(85, 27);
			this->button2->TabIndex = 14;
			this->button2->Text = L"Очистить";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(25, 119);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(85, 27);
			this->button3->TabIndex = 15;
			this->button3->Text = L"Удалить";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(126, 119);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(85, 27);
			this->button4->TabIndex = 16;
			this->button4->Text = L"Очистить";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button11);
			this->groupBox1->Controls->Add(this->button10);
			this->groupBox1->Controls->Add(this->button9);
			this->groupBox1->Controls->Add(this->button4);
			this->groupBox1->Controls->Add(this->button3);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->textBox6);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->textBox5);
			this->groupBox1->Controls->Add(this->textBox4);
			this->groupBox1->Location = System::Drawing::Point(343, 181);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(229, 158);
			this->groupBox1->TabIndex = 20;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Удаление точек";
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(134, 80);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(77, 27);
			this->button11->TabIndex = 19;
			this->button11->Text = L"Удалить";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(134, 50);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(77, 27);
			this->button10->TabIndex = 18;
			this->button10->Text = L"Удалить";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(134, 21);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(77, 27);
			this->button9->TabIndex = 17;
			this->button9->Text = L"Удалить";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Controls->Add(this->button2);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->button1);
			this->groupBox2->Controls->Add(this->textBox3);
			this->groupBox2->Controls->Add(this->textBox2);
			this->groupBox2->Controls->Add(this->textBox1);
			this->groupBox2->Location = System::Drawing::Point(343, 12);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(229, 158);
			this->groupBox2->TabIndex = 21;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Добавить точку";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(23, 83);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(65, 17);
			this->label4->TabIndex = 19;
			this->label4->Text = L"Масса = ";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(55, 57);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(33, 17);
			this->label5->TabIndex = 18;
			this->label5->Text = L"Y = ";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(55, 27);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(33, 17);
			this->label6->TabIndex = 17;
			this->label6->Text = L"X = ";
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(28, 31);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(168, 43);
			this->button5->TabIndex = 22;
			this->button5->Text = L"Найти массу системы";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(28, 83);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(168, 22);
			this->textBox7->TabIndex = 23;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(28, 182);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(168, 22);
			this->textBox8->TabIndex = 25;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(28, 130);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(168, 43);
			this->button6->TabIndex = 24;
			this->button6->Text = L"Найти центр тяжести";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(28, 229);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(168, 47);
			this->button7->TabIndex = 26;
			this->button7->Text = L"Найти точку с максимальной массой";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->textBox9);
			this->groupBox3->Controls->Add(this->button7);
			this->groupBox3->Controls->Add(this->textBox8);
			this->groupBox3->Controls->Add(this->button6);
			this->groupBox3->Controls->Add(this->textBox7);
			this->groupBox3->Controls->Add(this->button5);
			this->groupBox3->Location = System::Drawing::Point(587, 12);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(223, 327);
			this->groupBox3->TabIndex = 44;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Дополнительные вычисления";
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(28, 282);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(168, 22);
			this->textBox9->TabIndex = 27;
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(12, 300);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(204, 27);
			this->button8->TabIndex = 45;
			this->button8->Text = L"Удалить выбранную строку";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(222, 300);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(104, 27);
			this->button12->TabIndex = 20;
			this->button12->Text = L"Удалить всё";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(826, 354);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"MyForm";
			this->Text = L"Practice2";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		Sys->View(dataGridView1);
	}
		   //записать
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	try
		{
			A = gcnew M_Point(Convert::ToDouble(this->textBox1->Text), Convert::ToDouble(this->textBox2->Text), Convert::ToDouble(this->textBox3->Text));
			Sys->Add(A);
			Sys->View(dataGridView1);
		}
	catch (System::FormatException^ e)
	{
		MessageBox::Show("Ошибка ввода данных!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	}
	   //очистить 1
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->textBox1->Text = "";
	this->textBox2->Text = "";
	this->textBox3->Text = "";
}
	   //удалить
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		A = gcnew M_Point(Convert::ToDouble(this->textBox4->Text), Convert::ToDouble(this->textBox5->Text), Convert::ToDouble(this->textBox6->Text));
		Sys->DelPoint(A);
		Sys->View(dataGridView1);
	}
	catch (System::FormatException^ e)
	{
		MessageBox::Show("Ошибка ввода данных!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
	   //очистить 2
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	this->textBox4->Text = "";
	this->textBox5->Text = "";
	this->textBox6->Text = "";
}
	   //общая масса
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	this->textBox7->Text = Sys->Mass().ToString();
}
	   //удалить по Х
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!(this->textBox4->Text == ""))
		Sys->DelX(Convert::ToDouble(this->textBox4->Text));
	Sys->View(dataGridView1);
}
	   //удалить по Y
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!(this->textBox5->Text == ""))
		Sys->DelY(Convert::ToDouble(this->textBox5->Text));
	Sys->View(dataGridView1);
}
	   //удалить по M
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!(this->textBox6->Text == ""))
		Sys->DelM(Convert::ToDouble(this->textBox6->Text));
	Sys->View(dataGridView1);
}
	   //удалить всё
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
	Sys->DelAll();
	Sys->View(dataGridView1);
}
	   //центр масс
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	this->textBox8->Text = Sys->massСenter()->ToString();
}
	   //тяжеленькая
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	this->textBox9->Text = Sys->maxMass()->ToString();
}
	   //удалить по выбранной строке
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	int index = dataGridView1->CurrentRow->Index;
	Sys->DelInd(index);
	Sys->View(dataGridView1);
}
};
}
