#pragma once
#include "Header.h"
namespace My_Array {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Form_Two
	/// </summary>
	public ref class Form_Two : public System::Windows::Forms::Form
	{

		mPoint ^P;
	public:
		Form_Two(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
			P = gcnew mPoint(0, 0, 10);
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Form_Two()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panel1;
	protected:
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column3;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;





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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->textBox3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->textBox2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Location = System::Drawing::Point(267, 33);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(156, 152);
			this->panel1->TabIndex = 0;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(78, 112);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(64, 25);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Удалить";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(5, 112);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(67, 25);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Добавить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form_Two::button1_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(19, 79);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(16, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"M";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(40, 74);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(68, 20);
			this->textBox3->TabIndex = 4;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(19, 49);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(14, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Y";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(40, 48);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(68, 20);
			this->textBox2->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(19, 21);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(14, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"X";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(40, 22);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(68, 20);
			this->textBox1->TabIndex = 0;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->Column1,
					this->Column2, this->Column3
			});
			this->dataGridView1->Location = System::Drawing::Point(20, 33);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(224, 216);
			this->dataGridView1->TabIndex = 1;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"X";
			this->Column1->Name = L"Column1";
			this->Column1->Width = 60;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Y";
			this->Column2->Name = L"Column2";
			this->Column2->Width = 60;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Mass";
			this->Column3->Name = L"Column3";
			this->Column3->Width = 60;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(267, 204);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(156, 28);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Найти тяжеленькую";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(267, 238);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(156, 28);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Найти центр масс";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// Form_Two
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(490, 368);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->panel1);
			this->Name = L"Form_Two";
			this->Text = L"Form_Two";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
	{
    
	}
};
}
