#pragma once
#include "Functiouns.h"

namespace AnimalWorld {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для WhereAmIFrom
	/// </summary>
	public ref class Comparison : public System::Windows::Forms::Form
	{
		int key;
		Many^ mas;
		int flag1;
	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::Button^ nextLevel;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ lastLevel;
	private: System::Windows::Forms::Button^ check2;
	private: System::Windows::Forms::Button^ nextLevel2;
	private: System::Windows::Forms::PictureBox^ pb24;
	private: System::Windows::Forms::PictureBox^ pb23;
	private: System::Windows::Forms::PictureBox^ pb22;
	private: System::Windows::Forms::PictureBox^ pb21;
	private: System::Windows::Forms::PictureBox^ pb20;
	private: System::Windows::Forms::PictureBox^ pb9;
	private: System::Windows::Forms::PictureBox^ pb8;
	private: System::Windows::Forms::PictureBox^ pb7;
	private: System::Windows::Forms::PictureBox^ pb6;
	private: System::Windows::Forms::PictureBox^ pb5;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ lastLevel2;
	private: System::Windows::Forms::Button^ check3;
	private: System::Windows::Forms::PictureBox^ pb29;
	private: System::Windows::Forms::PictureBox^ pb28;
	private: System::Windows::Forms::PictureBox^ pb27;
	private: System::Windows::Forms::PictureBox^ pb26;
	private: System::Windows::Forms::PictureBox^ pb25;
	private: System::Windows::Forms::PictureBox^ pb14;
	private: System::Windows::Forms::PictureBox^ pb13;
	private: System::Windows::Forms::PictureBox^ pb12;
	private: System::Windows::Forms::PictureBox^ pb11;
	private: System::Windows::Forms::PictureBox^ pb10;
	private: System::Windows::Forms::Button^ repeat1;
	private: System::Windows::Forms::Button^ check;


			 int flag2;
	public:
		Comparison(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
			mas = gcnew Many();
			flag1 = -1;
			flag2 = -1;
		}
		Comparison(int k)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
			mas = gcnew Many();
			flag1 = -1;
			flag2 = -1;
			key = k;
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Comparison()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::TabControl^ tabControl1;


	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::PictureBox^ pb19;
	private: System::Windows::Forms::PictureBox^ pb18;
	private: System::Windows::Forms::PictureBox^ pb17;
	private: System::Windows::Forms::PictureBox^ pb16;
	private: System::Windows::Forms::PictureBox^ pb15;
	private: System::Windows::Forms::PictureBox^ pb4;
	private: System::Windows::Forms::PictureBox^ pb3;
	private: System::Windows::Forms::PictureBox^ pb2;
	private: System::Windows::Forms::PictureBox^ pb1;
	private: System::Windows::Forms::PictureBox^ pb0;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::TabPage^ tabPage3;
	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Comparison::typeid));
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->check = (gcnew System::Windows::Forms::Button());
			this->nextLevel = (gcnew System::Windows::Forms::Button());
			this->pb19 = (gcnew System::Windows::Forms::PictureBox());
			this->pb18 = (gcnew System::Windows::Forms::PictureBox());
			this->pb17 = (gcnew System::Windows::Forms::PictureBox());
			this->pb16 = (gcnew System::Windows::Forms::PictureBox());
			this->pb15 = (gcnew System::Windows::Forms::PictureBox());
			this->pb4 = (gcnew System::Windows::Forms::PictureBox());
			this->pb3 = (gcnew System::Windows::Forms::PictureBox());
			this->pb2 = (gcnew System::Windows::Forms::PictureBox());
			this->pb1 = (gcnew System::Windows::Forms::PictureBox());
			this->pb0 = (gcnew System::Windows::Forms::PictureBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->lastLevel = (gcnew System::Windows::Forms::Button());
			this->check2 = (gcnew System::Windows::Forms::Button());
			this->nextLevel2 = (gcnew System::Windows::Forms::Button());
			this->pb24 = (gcnew System::Windows::Forms::PictureBox());
			this->pb23 = (gcnew System::Windows::Forms::PictureBox());
			this->pb22 = (gcnew System::Windows::Forms::PictureBox());
			this->pb21 = (gcnew System::Windows::Forms::PictureBox());
			this->pb20 = (gcnew System::Windows::Forms::PictureBox());
			this->pb9 = (gcnew System::Windows::Forms::PictureBox());
			this->pb8 = (gcnew System::Windows::Forms::PictureBox());
			this->pb7 = (gcnew System::Windows::Forms::PictureBox());
			this->pb6 = (gcnew System::Windows::Forms::PictureBox());
			this->pb5 = (gcnew System::Windows::Forms::PictureBox());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->lastLevel2 = (gcnew System::Windows::Forms::Button());
			this->check3 = (gcnew System::Windows::Forms::Button());
			this->pb29 = (gcnew System::Windows::Forms::PictureBox());
			this->pb28 = (gcnew System::Windows::Forms::PictureBox());
			this->pb27 = (gcnew System::Windows::Forms::PictureBox());
			this->pb26 = (gcnew System::Windows::Forms::PictureBox());
			this->pb25 = (gcnew System::Windows::Forms::PictureBox());
			this->pb14 = (gcnew System::Windows::Forms::PictureBox());
			this->pb13 = (gcnew System::Windows::Forms::PictureBox());
			this->pb12 = (gcnew System::Windows::Forms::PictureBox());
			this->pb11 = (gcnew System::Windows::Forms::PictureBox());
			this->pb10 = (gcnew System::Windows::Forms::PictureBox());
			this->repeat1 = (gcnew System::Windows::Forms::Button());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb19))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb18))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb17))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb16))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb15))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb0))->BeginInit();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb24))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb23))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb22))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb21))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb20))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb5))->BeginInit();
			this->tabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb29))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb28))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb27))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb26))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb25))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb14))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb10))->BeginInit();
			this->SuspendLayout();
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button7.Image")));
			this->button7->Location = System::Drawing::Point(1340, 8);
			this->button7->Margin = System::Windows::Forms::Padding(2);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(90, 90);
			this->button7->TabIndex = 17;
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Comparison::Button7_Click);
			// 
			// tabControl1
			// 
			this->tabControl1->Appearance = System::Windows::Forms::TabAppearance::FlatButtons;
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->ItemSize = System::Drawing::Size(0, 1);
			this->tabControl1->Location = System::Drawing::Point(9, 102);
			this->tabControl1->Margin = System::Windows::Forms::Padding(2);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1425, 693);
			this->tabControl1->TabIndex = 28;
			this->tabControl1->TabStop = false;
			// 
			// tabPage1
			// 
			this->tabPage1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tabPage1.BackgroundImage")));
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Controls->Add(this->check);
			this->tabPage1->Controls->Add(this->nextLevel);
			this->tabPage1->Controls->Add(this->pb19);
			this->tabPage1->Controls->Add(this->pb18);
			this->tabPage1->Controls->Add(this->pb17);
			this->tabPage1->Controls->Add(this->pb16);
			this->tabPage1->Controls->Add(this->pb15);
			this->tabPage1->Controls->Add(this->pb4);
			this->tabPage1->Controls->Add(this->pb3);
			this->tabPage1->Controls->Add(this->pb2);
			this->tabPage1->Controls->Add(this->pb1);
			this->tabPage1->Controls->Add(this->pb0);
			this->tabPage1->Location = System::Drawing::Point(4, 9);
			this->tabPage1->Margin = System::Windows::Forms::Padding(2);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(2);
			this->tabPage1->Size = System::Drawing::Size(1417, 680);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"tabPage1";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 55.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(1170, 46);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(78, 85);
			this->label1->TabIndex = 41;
			this->label1->Text = L"1";
			// 
			// check
			// 
			this->check->BackColor = System::Drawing::Color::LightGoldenrodYellow;
			this->check->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->check->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->check->ForeColor = System::Drawing::SystemColors::MenuText;
			this->check->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->check->Location = System::Drawing::Point(29, 46);
			this->check->Margin = System::Windows::Forms::Padding(2);
			this->check->Name = L"check";
			this->check->Size = System::Drawing::Size(330, 81);
			this->check->TabIndex = 38;
			this->check->Text = L"Проверить";
			this->check->UseVisualStyleBackColor = false;
			this->check->Click += gcnew System::EventHandler(this, &Comparison::Check_Click);
			// 
			// nextLevel
			// 
			this->nextLevel->BackColor = System::Drawing::Color::LightGoldenrodYellow;
			this->nextLevel->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->nextLevel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->nextLevel->Location = System::Drawing::Point(1270, 46);
			this->nextLevel->Margin = System::Windows::Forms::Padding(2);
			this->nextLevel->Name = L"nextLevel";
			this->nextLevel->Size = System::Drawing::Size(112, 81);
			this->nextLevel->TabIndex = 40;
			this->nextLevel->Text = L">";
			this->nextLevel->UseVisualStyleBackColor = false;
			this->nextLevel->Click += gcnew System::EventHandler(this, &Comparison::NextLevel_Click);
			// 
			// pb19
			// 
			this->pb19->Location = System::Drawing::Point(1150, 425);
			this->pb19->Margin = System::Windows::Forms::Padding(2);
			this->pb19->Name = L"pb19";
			this->pb19->Size = System::Drawing::Size(240, 203);
			this->pb19->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pb19->TabIndex = 37;
			this->pb19->TabStop = false;
			this->pb19->Click += gcnew System::EventHandler(this, &Comparison::Pb19_Click);
			// 
			// pb18
			// 
			this->pb18->Location = System::Drawing::Point(872, 425);
			this->pb18->Margin = System::Windows::Forms::Padding(2);
			this->pb18->Name = L"pb18";
			this->pb18->Size = System::Drawing::Size(240, 203);
			this->pb18->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pb18->TabIndex = 36;
			this->pb18->TabStop = false;
			this->pb18->Click += gcnew System::EventHandler(this, &Comparison::Pb18_Click);
			// 
			// pb17
			// 
			this->pb17->Location = System::Drawing::Point(592, 425);
			this->pb17->Margin = System::Windows::Forms::Padding(2);
			this->pb17->Name = L"pb17";
			this->pb17->Size = System::Drawing::Size(240, 203);
			this->pb17->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pb17->TabIndex = 35;
			this->pb17->TabStop = false;
			this->pb17->Click += gcnew System::EventHandler(this, &Comparison::Pb17_Click);
			// 
			// pb16
			// 
			this->pb16->Location = System::Drawing::Point(310, 425);
			this->pb16->Margin = System::Windows::Forms::Padding(2);
			this->pb16->Name = L"pb16";
			this->pb16->Size = System::Drawing::Size(240, 203);
			this->pb16->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pb16->TabIndex = 34;
			this->pb16->TabStop = false;
			this->pb16->Click += gcnew System::EventHandler(this, &Comparison::Pb16_Click);
			// 
			// pb15
			// 
			this->pb15->Location = System::Drawing::Point(29, 425);
			this->pb15->Margin = System::Windows::Forms::Padding(2);
			this->pb15->Name = L"pb15";
			this->pb15->Size = System::Drawing::Size(240, 203);
			this->pb15->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pb15->TabIndex = 33;
			this->pb15->TabStop = false;
			this->pb15->Click += gcnew System::EventHandler(this, &Comparison::Pb15_Click);
			// 
			// pb4
			// 
			this->pb4->Location = System::Drawing::Point(1150, 156);
			this->pb4->Margin = System::Windows::Forms::Padding(2);
			this->pb4->Name = L"pb4";
			this->pb4->Size = System::Drawing::Size(240, 203);
			this->pb4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pb4->TabIndex = 32;
			this->pb4->TabStop = false;
			this->pb4->Click += gcnew System::EventHandler(this, &Comparison::Pb4_Click);
			// 
			// pb3
			// 
			this->pb3->Location = System::Drawing::Point(872, 156);
			this->pb3->Margin = System::Windows::Forms::Padding(2);
			this->pb3->Name = L"pb3";
			this->pb3->Size = System::Drawing::Size(240, 203);
			this->pb3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pb3->TabIndex = 31;
			this->pb3->TabStop = false;
			this->pb3->Click += gcnew System::EventHandler(this, &Comparison::Pb3_Click);
			// 
			// pb2
			// 
			this->pb2->Location = System::Drawing::Point(592, 156);
			this->pb2->Margin = System::Windows::Forms::Padding(2);
			this->pb2->Name = L"pb2";
			this->pb2->Size = System::Drawing::Size(240, 203);
			this->pb2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pb2->TabIndex = 30;
			this->pb2->TabStop = false;
			this->pb2->Click += gcnew System::EventHandler(this, &Comparison::Pb2_Click);
			// 
			// pb1
			// 
			this->pb1->Location = System::Drawing::Point(310, 156);
			this->pb1->Margin = System::Windows::Forms::Padding(2);
			this->pb1->Name = L"pb1";
			this->pb1->Size = System::Drawing::Size(240, 203);
			this->pb1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pb1->TabIndex = 29;
			this->pb1->TabStop = false;
			this->pb1->Click += gcnew System::EventHandler(this, &Comparison::Pb1_Click);
			// 
			// pb0
			// 
			this->pb0->Location = System::Drawing::Point(29, 156);
			this->pb0->Margin = System::Windows::Forms::Padding(2);
			this->pb0->Name = L"pb0";
			this->pb0->Size = System::Drawing::Size(240, 203);
			this->pb0->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pb0->TabIndex = 28;
			this->pb0->TabStop = false;
			this->pb0->Click += gcnew System::EventHandler(this, &Comparison::Pb0_Click);
			// 
			// tabPage2
			// 
			this->tabPage2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tabPage2.BackgroundImage")));
			this->tabPage2->Controls->Add(this->label2);
			this->tabPage2->Controls->Add(this->lastLevel);
			this->tabPage2->Controls->Add(this->check2);
			this->tabPage2->Controls->Add(this->nextLevel2);
			this->tabPage2->Controls->Add(this->pb24);
			this->tabPage2->Controls->Add(this->pb23);
			this->tabPage2->Controls->Add(this->pb22);
			this->tabPage2->Controls->Add(this->pb21);
			this->tabPage2->Controls->Add(this->pb20);
			this->tabPage2->Controls->Add(this->pb9);
			this->tabPage2->Controls->Add(this->pb8);
			this->tabPage2->Controls->Add(this->pb7);
			this->tabPage2->Controls->Add(this->pb6);
			this->tabPage2->Controls->Add(this->pb5);
			this->tabPage2->Location = System::Drawing::Point(4, 5);
			this->tabPage2->Margin = System::Windows::Forms::Padding(2);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(2);
			this->tabPage2->Size = System::Drawing::Size(1417, 684);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"tabPage2";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 55.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(1170, 46);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(78, 85);
			this->label2->TabIndex = 55;
			this->label2->Text = L"2";
			// 
			// lastLevel
			// 
			this->lastLevel->BackColor = System::Drawing::Color::LightGoldenrodYellow;
			this->lastLevel->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->lastLevel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lastLevel->Location = System::Drawing::Point(1032, 46);
			this->lastLevel->Margin = System::Windows::Forms::Padding(2);
			this->lastLevel->Name = L"lastLevel";
			this->lastLevel->Size = System::Drawing::Size(112, 81);
			this->lastLevel->TabIndex = 53;
			this->lastLevel->Text = L"<";
			this->lastLevel->UseVisualStyleBackColor = false;
			this->lastLevel->Click += gcnew System::EventHandler(this, &Comparison::LastLevel_Click);
			// 
			// check2
			// 
			this->check2->BackColor = System::Drawing::Color::LightGoldenrodYellow;
			this->check2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->check2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->check2->Location = System::Drawing::Point(29, 46);
			this->check2->Margin = System::Windows::Forms::Padding(2);
			this->check2->Name = L"check2";
			this->check2->Size = System::Drawing::Size(330, 81);
			this->check2->TabIndex = 52;
			this->check2->Text = L"Проверить";
			this->check2->UseVisualStyleBackColor = false;
			this->check2->Click += gcnew System::EventHandler(this, &Comparison::Check2_Click);
			// 
			// nextLevel2
			// 
			this->nextLevel2->BackColor = System::Drawing::Color::LightGoldenrodYellow;
			this->nextLevel2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->nextLevel2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->nextLevel2->Location = System::Drawing::Point(1277, 46);
			this->nextLevel2->Margin = System::Windows::Forms::Padding(2);
			this->nextLevel2->Name = L"nextLevel2";
			this->nextLevel2->Size = System::Drawing::Size(112, 81);
			this->nextLevel2->TabIndex = 54;
			this->nextLevel2->Text = L">";
			this->nextLevel2->UseVisualStyleBackColor = false;
			this->nextLevel2->Click += gcnew System::EventHandler(this, &Comparison::NextLevel2_Click);
			// 
			// pb24
			// 
			this->pb24->Location = System::Drawing::Point(1150, 425);
			this->pb24->Margin = System::Windows::Forms::Padding(2);
			this->pb24->Name = L"pb24";
			this->pb24->Size = System::Drawing::Size(240, 203);
			this->pb24->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pb24->TabIndex = 51;
			this->pb24->TabStop = false;
			this->pb24->Click += gcnew System::EventHandler(this, &Comparison::Pb24_Click);
			// 
			// pb23
			// 
			this->pb23->Location = System::Drawing::Point(872, 425);
			this->pb23->Margin = System::Windows::Forms::Padding(2);
			this->pb23->Name = L"pb23";
			this->pb23->Size = System::Drawing::Size(240, 203);
			this->pb23->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pb23->TabIndex = 50;
			this->pb23->TabStop = false;
			this->pb23->Click += gcnew System::EventHandler(this, &Comparison::Pb23_Click);
			// 
			// pb22
			// 
			this->pb22->Location = System::Drawing::Point(592, 425);
			this->pb22->Margin = System::Windows::Forms::Padding(2);
			this->pb22->Name = L"pb22";
			this->pb22->Size = System::Drawing::Size(240, 203);
			this->pb22->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pb22->TabIndex = 49;
			this->pb22->TabStop = false;
			this->pb22->Click += gcnew System::EventHandler(this, &Comparison::Pb22_Click);
			// 
			// pb21
			// 
			this->pb21->Location = System::Drawing::Point(310, 425);
			this->pb21->Margin = System::Windows::Forms::Padding(2);
			this->pb21->Name = L"pb21";
			this->pb21->Size = System::Drawing::Size(240, 203);
			this->pb21->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pb21->TabIndex = 48;
			this->pb21->TabStop = false;
			this->pb21->Click += gcnew System::EventHandler(this, &Comparison::Pb21_Click);
			// 
			// pb20
			// 
			this->pb20->Location = System::Drawing::Point(29, 425);
			this->pb20->Margin = System::Windows::Forms::Padding(2);
			this->pb20->Name = L"pb20";
			this->pb20->Size = System::Drawing::Size(240, 203);
			this->pb20->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pb20->TabIndex = 47;
			this->pb20->TabStop = false;
			this->pb20->Click += gcnew System::EventHandler(this, &Comparison::Pb20_Click);
			// 
			// pb9
			// 
			this->pb9->Location = System::Drawing::Point(1150, 156);
			this->pb9->Margin = System::Windows::Forms::Padding(2);
			this->pb9->Name = L"pb9";
			this->pb9->Size = System::Drawing::Size(240, 203);
			this->pb9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pb9->TabIndex = 46;
			this->pb9->TabStop = false;
			this->pb9->Click += gcnew System::EventHandler(this, &Comparison::Pb9_Click);
			// 
			// pb8
			// 
			this->pb8->Location = System::Drawing::Point(872, 156);
			this->pb8->Margin = System::Windows::Forms::Padding(2);
			this->pb8->Name = L"pb8";
			this->pb8->Size = System::Drawing::Size(240, 203);
			this->pb8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pb8->TabIndex = 45;
			this->pb8->TabStop = false;
			this->pb8->Click += gcnew System::EventHandler(this, &Comparison::Pb8_Click);
			// 
			// pb7
			// 
			this->pb7->Location = System::Drawing::Point(592, 156);
			this->pb7->Margin = System::Windows::Forms::Padding(2);
			this->pb7->Name = L"pb7";
			this->pb7->Size = System::Drawing::Size(240, 203);
			this->pb7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pb7->TabIndex = 44;
			this->pb7->TabStop = false;
			this->pb7->Click += gcnew System::EventHandler(this, &Comparison::Pb7_Click);
			// 
			// pb6
			// 
			this->pb6->Location = System::Drawing::Point(310, 156);
			this->pb6->Margin = System::Windows::Forms::Padding(2);
			this->pb6->Name = L"pb6";
			this->pb6->Size = System::Drawing::Size(240, 203);
			this->pb6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pb6->TabIndex = 43;
			this->pb6->TabStop = false;
			this->pb6->Click += gcnew System::EventHandler(this, &Comparison::Pb6_Click);
			// 
			// pb5
			// 
			this->pb5->Location = System::Drawing::Point(29, 156);
			this->pb5->Margin = System::Windows::Forms::Padding(2);
			this->pb5->Name = L"pb5";
			this->pb5->Size = System::Drawing::Size(240, 203);
			this->pb5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pb5->TabIndex = 42;
			this->pb5->TabStop = false;
			this->pb5->Click += gcnew System::EventHandler(this, &Comparison::Pb5_Click);
			// 
			// tabPage3
			// 
			this->tabPage3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tabPage3.BackgroundImage")));
			this->tabPage3->Controls->Add(this->label3);
			this->tabPage3->Controls->Add(this->lastLevel2);
			this->tabPage3->Controls->Add(this->check3);
			this->tabPage3->Controls->Add(this->pb29);
			this->tabPage3->Controls->Add(this->pb28);
			this->tabPage3->Controls->Add(this->pb27);
			this->tabPage3->Controls->Add(this->pb26);
			this->tabPage3->Controls->Add(this->pb25);
			this->tabPage3->Controls->Add(this->pb14);
			this->tabPage3->Controls->Add(this->pb13);
			this->tabPage3->Controls->Add(this->pb12);
			this->tabPage3->Controls->Add(this->pb11);
			this->tabPage3->Controls->Add(this->pb10);
			this->tabPage3->Location = System::Drawing::Point(4, 9);
			this->tabPage3->Margin = System::Windows::Forms::Padding(2);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(2);
			this->tabPage3->Size = System::Drawing::Size(1417, 680);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"tabPage3";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 55.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(1170, 46);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(78, 85);
			this->label3->TabIndex = 55;
			this->label3->Text = L"3";
			// 
			// lastLevel2
			// 
			this->lastLevel2->BackColor = System::Drawing::Color::LightGoldenrodYellow;
			this->lastLevel2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->lastLevel2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lastLevel2->Location = System::Drawing::Point(1032, 46);
			this->lastLevel2->Margin = System::Windows::Forms::Padding(2);
			this->lastLevel2->Name = L"lastLevel2";
			this->lastLevel2->Size = System::Drawing::Size(112, 81);
			this->lastLevel2->TabIndex = 53;
			this->lastLevel2->Text = L"<";
			this->lastLevel2->UseVisualStyleBackColor = false;
			this->lastLevel2->Click += gcnew System::EventHandler(this, &Comparison::LastLevel2_Click);
			// 
			// check3
			// 
			this->check3->BackColor = System::Drawing::Color::LightGoldenrodYellow;
			this->check3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->check3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->check3->Location = System::Drawing::Point(29, 46);
			this->check3->Margin = System::Windows::Forms::Padding(2);
			this->check3->Name = L"check3";
			this->check3->Size = System::Drawing::Size(330, 81);
			this->check3->TabIndex = 52;
			this->check3->Text = L"Проверить";
			this->check3->UseVisualStyleBackColor = false;
			this->check3->Click += gcnew System::EventHandler(this, &Comparison::Check3_Click);
			// 
			// pb29
			// 
			this->pb29->Location = System::Drawing::Point(1150, 425);
			this->pb29->Margin = System::Windows::Forms::Padding(2);
			this->pb29->Name = L"pb29";
			this->pb29->Size = System::Drawing::Size(240, 203);
			this->pb29->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pb29->TabIndex = 51;
			this->pb29->TabStop = false;
			this->pb29->Click += gcnew System::EventHandler(this, &Comparison::Pb29_Click);
			// 
			// pb28
			// 
			this->pb28->Location = System::Drawing::Point(872, 425);
			this->pb28->Margin = System::Windows::Forms::Padding(2);
			this->pb28->Name = L"pb28";
			this->pb28->Size = System::Drawing::Size(240, 203);
			this->pb28->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pb28->TabIndex = 50;
			this->pb28->TabStop = false;
			this->pb28->Click += gcnew System::EventHandler(this, &Comparison::Pb28_Click);
			// 
			// pb27
			// 
			this->pb27->Location = System::Drawing::Point(592, 425);
			this->pb27->Margin = System::Windows::Forms::Padding(2);
			this->pb27->Name = L"pb27";
			this->pb27->Size = System::Drawing::Size(240, 203);
			this->pb27->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pb27->TabIndex = 49;
			this->pb27->TabStop = false;
			this->pb27->Click += gcnew System::EventHandler(this, &Comparison::Pb27_Click);
			// 
			// pb26
			// 
			this->pb26->Location = System::Drawing::Point(310, 425);
			this->pb26->Margin = System::Windows::Forms::Padding(2);
			this->pb26->Name = L"pb26";
			this->pb26->Size = System::Drawing::Size(240, 203);
			this->pb26->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pb26->TabIndex = 48;
			this->pb26->TabStop = false;
			this->pb26->Click += gcnew System::EventHandler(this, &Comparison::Pb26_Click);
			// 
			// pb25
			// 
			this->pb25->Location = System::Drawing::Point(29, 425);
			this->pb25->Margin = System::Windows::Forms::Padding(2);
			this->pb25->Name = L"pb25";
			this->pb25->Size = System::Drawing::Size(240, 203);
			this->pb25->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pb25->TabIndex = 47;
			this->pb25->TabStop = false;
			this->pb25->Click += gcnew System::EventHandler(this, &Comparison::Pb25_Click);
			// 
			// pb14
			// 
			this->pb14->Location = System::Drawing::Point(1150, 156);
			this->pb14->Margin = System::Windows::Forms::Padding(2);
			this->pb14->Name = L"pb14";
			this->pb14->Size = System::Drawing::Size(240, 203);
			this->pb14->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pb14->TabIndex = 46;
			this->pb14->TabStop = false;
			this->pb14->Click += gcnew System::EventHandler(this, &Comparison::Pb14_Click);
			// 
			// pb13
			// 
			this->pb13->Location = System::Drawing::Point(872, 156);
			this->pb13->Margin = System::Windows::Forms::Padding(2);
			this->pb13->Name = L"pb13";
			this->pb13->Size = System::Drawing::Size(240, 203);
			this->pb13->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pb13->TabIndex = 45;
			this->pb13->TabStop = false;
			this->pb13->Click += gcnew System::EventHandler(this, &Comparison::Pb13_Click);
			// 
			// pb12
			// 
			this->pb12->Location = System::Drawing::Point(592, 156);
			this->pb12->Margin = System::Windows::Forms::Padding(2);
			this->pb12->Name = L"pb12";
			this->pb12->Size = System::Drawing::Size(240, 203);
			this->pb12->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pb12->TabIndex = 44;
			this->pb12->TabStop = false;
			this->pb12->Click += gcnew System::EventHandler(this, &Comparison::Pb12_Click);
			// 
			// pb11
			// 
			this->pb11->Location = System::Drawing::Point(310, 156);
			this->pb11->Margin = System::Windows::Forms::Padding(2);
			this->pb11->Name = L"pb11";
			this->pb11->Size = System::Drawing::Size(240, 203);
			this->pb11->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pb11->TabIndex = 43;
			this->pb11->TabStop = false;
			this->pb11->Click += gcnew System::EventHandler(this, &Comparison::Pb11_Click);
			// 
			// pb10
			// 
			this->pb10->Location = System::Drawing::Point(29, 156);
			this->pb10->Margin = System::Windows::Forms::Padding(2);
			this->pb10->Name = L"pb10";
			this->pb10->Size = System::Drawing::Size(240, 203);
			this->pb10->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pb10->TabIndex = 42;
			this->pb10->TabStop = false;
			this->pb10->Click += gcnew System::EventHandler(this, &Comparison::Pb10_Click);
			// 
			// repeat1
			// 
			this->repeat1->BackColor = System::Drawing::Color::OldLace;
			this->repeat1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->repeat1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"repeat1.Image")));
			this->repeat1->Location = System::Drawing::Point(9, 3);
			this->repeat1->Margin = System::Windows::Forms::Padding(2);
			this->repeat1->Name = L"repeat1";
			this->repeat1->Size = System::Drawing::Size(90, 95);
			this->repeat1->TabIndex = 29;
			this->repeat1->UseVisualStyleBackColor = false;
			this->repeat1->Click += gcnew System::EventHandler(this, &Comparison::Repeat1_Click);
			// 
			// Comparison
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1443, 804);
			this->Controls->Add(this->repeat1);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->button7);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"Comparison";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Comparison";
			this->Load += gcnew System::EventHandler(this, &Comparison::Comparison_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb19))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb18))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb17))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb16))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb15))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb0))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb24))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb23))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb22))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb21))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb20))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb5))->EndInit();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb29))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb28))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb27))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb26))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb25))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb14))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb10))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		void View()
		{
			pb0->Image = mas->ImA(0);
			pb1->Image = mas->ImA(1);
			pb2->Image = mas->ImA(2);
			pb3->Image = mas->ImA(3);
			pb4->Image = mas->ImA(4);
			pb5->Image = mas->ImA(5);
			pb6->Image = mas->ImA(6);
			pb7->Image = mas->ImA(7);
			pb8->Image = mas->ImA(8);
			pb9->Image = mas->ImA(9);
			pb10->Image = mas->ImA(10);
			pb11->Image = mas->ImA(11);
			pb12->Image = mas->ImA(12);
			pb13->Image = mas->ImA(13);
			pb14->Image = mas->ImA(14);

			pb15->Image = mas->ImB(0);
			pb16->Image = mas->ImB(1);
			pb17->Image = mas->ImB(2);
			pb18->Image = mas->ImB(3);
			pb19->Image = mas->ImB(4);
			pb20->Image = mas->ImB(5);
			pb21->Image = mas->ImB(6);
			pb22->Image = mas->ImB(7);
			pb23->Image = mas->ImB(8);
			pb24->Image = mas->ImB(9);
			pb25->Image = mas->ImB(10);
			pb26->Image = mas->ImB(11);
			pb27->Image = mas->ImB(12);
			pb28->Image = mas->ImB(13);
			pb29->Image = mas->ImB(14);

		}

	private: System::Void Button7_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void Comparison_Load(System::Object^ sender, System::EventArgs^ e) {
		this->tabControl1->SelectTab(tabPage1);

		switch (key)
		{
		case 0:
		{
				mas->Fill(15, "Who Eats What");
			break;
		}
		case 1:
		{

				mas->Fill(15, "Who Lives Where");
			break;
		}
		case 2:
		{
				mas->Fill(15, "Whose footprints");
			break;
		}
		}

		mas->Sort();
		View();
	}

private: System::Void Pb15_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->pb15->BorderStyle == BorderStyle::None) //определяет нажата ли (выбрана ли картинка)
	{
		this->pb15->BorderStyle = BorderStyle::Fixed3D; //если нет выбирает её (BorderStyle::Fixed3D позволяет создать визуальный эфект нажатия)
		this->pb16->BorderStyle = BorderStyle::None; //одновременно может быть выбрана только одна картинка, поэтому нажатие остальных "обнуляется"
		this->pb17->BorderStyle = BorderStyle::None;
		this->pb18->BorderStyle = BorderStyle::None;
		this->pb19->BorderStyle = BorderStyle::None;
		flag2 = 0; //необходим для оплределения элемента массива эквивалентного выбранной картинке
	}
	else
	{
		this->pb15->BorderStyle = BorderStyle::None; //если картинка выбрана, то отменяет этот выбор
		flag2 = -1; // "обнуления" показателя выбранной картинки
	}
}
private: System::Void Pb16_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->pb16->BorderStyle == BorderStyle::None)
	{
		this->pb16->BorderStyle = BorderStyle::Fixed3D;
		this->pb15->BorderStyle = BorderStyle::None;
		this->pb17->BorderStyle = BorderStyle::None;
		this->pb18->BorderStyle = BorderStyle::None;
		this->pb19->BorderStyle = BorderStyle::None;
		flag2 = 1;
	}
	else
	{
		this->pb16->BorderStyle = BorderStyle::None;
		flag2 = -1;
	}
}
private: System::Void Pb17_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->pb17->BorderStyle == BorderStyle::None)
	{
		this->pb17->BorderStyle = BorderStyle::Fixed3D;
		this->pb16->BorderStyle = BorderStyle::None;
		this->pb15->BorderStyle = BorderStyle::None;
		this->pb18->BorderStyle = BorderStyle::None;
		this->pb19->BorderStyle = BorderStyle::None;
		flag2 = 2;
	}
	else
	{
		this->pb17->BorderStyle = BorderStyle::None;
		flag2 = -1;
	}
}
private: System::Void Pb18_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->pb18->BorderStyle == BorderStyle::None)
	{
		this->pb18->BorderStyle = BorderStyle::Fixed3D;
		this->pb16->BorderStyle = BorderStyle::None;
		this->pb17->BorderStyle = BorderStyle::None;
		this->pb15->BorderStyle = BorderStyle::None;
		this->pb19->BorderStyle = BorderStyle::None;
		flag2 = 3;
	}
	else
	{
		this->pb18->BorderStyle = BorderStyle::None;
		flag2 = -1;
	}
}
private: System::Void Pb19_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->pb19->BorderStyle == BorderStyle::None)
	{
		this->pb19->BorderStyle = BorderStyle::Fixed3D;
		this->pb16->BorderStyle = BorderStyle::None;
		this->pb17->BorderStyle = BorderStyle::None;
		this->pb18->BorderStyle = BorderStyle::None;
		this->pb15->BorderStyle = BorderStyle::None;
		flag2 = 4;
	}
	else
	{
		this->pb19->BorderStyle = BorderStyle::None;
		flag2 = -1;
	}
}

private: System::Void Pb20_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->pb20->BorderStyle == BorderStyle::None)
	{
		this->pb20->BorderStyle = BorderStyle::Fixed3D;
		this->pb21->BorderStyle = BorderStyle::None;
		this->pb22->BorderStyle = BorderStyle::None;
		this->pb23->BorderStyle = BorderStyle::None;
		this->pb24->BorderStyle = BorderStyle::None;
		flag2 = 5;
	}
	else
	{
		this->pb20->BorderStyle = BorderStyle::None;
		flag2 = -1;
	}
}
private: System::Void Pb21_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->pb21->BorderStyle == BorderStyle::None)
	{
		this->pb21->BorderStyle = BorderStyle::Fixed3D;
		this->pb20->BorderStyle = BorderStyle::None;
		this->pb22->BorderStyle = BorderStyle::None;
		this->pb23->BorderStyle = BorderStyle::None;
		this->pb24->BorderStyle = BorderStyle::None;
		flag2 = 6;
	}
	else
	{
		this->pb21->BorderStyle = BorderStyle::None;
		flag2 = -1;
	}
}
private: System::Void Pb22_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->pb22->BorderStyle == BorderStyle::None)
	{
		this->pb22->BorderStyle = BorderStyle::Fixed3D;
		this->pb21->BorderStyle = BorderStyle::None;
		this->pb20->BorderStyle = BorderStyle::None;
		this->pb23->BorderStyle = BorderStyle::None;
		this->pb24->BorderStyle = BorderStyle::None;
		flag2 = 7;
	}
	else
	{
		this->pb22->BorderStyle = BorderStyle::None;
		flag2 = -1;
	}
}
private: System::Void Pb23_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->pb23->BorderStyle == BorderStyle::None)
	{
		this->pb23->BorderStyle = BorderStyle::Fixed3D;
		this->pb21->BorderStyle = BorderStyle::None;
		this->pb22->BorderStyle = BorderStyle::None;
		this->pb20->BorderStyle = BorderStyle::None;
		this->pb24->BorderStyle = BorderStyle::None;
		flag2 = 8;
	}
	else
	{
		this->pb23->BorderStyle = BorderStyle::None;
		flag2 = -1;
	}
}
private: System::Void Pb24_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->pb24->BorderStyle == BorderStyle::None)
	{
		this->pb24->BorderStyle = BorderStyle::Fixed3D;
		this->pb21->BorderStyle = BorderStyle::None;
		this->pb22->BorderStyle = BorderStyle::None;
		this->pb23->BorderStyle = BorderStyle::None;
		this->pb20->BorderStyle = BorderStyle::None;
		flag2 = 9;
	}
	else
	{
		this->pb24->BorderStyle = BorderStyle::None;
		flag2 = -1;
	}
}
private: System::Void Pb25_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->pb25->BorderStyle == BorderStyle::None)
	{
		this->pb25->BorderStyle = BorderStyle::Fixed3D;
		this->pb26->BorderStyle = BorderStyle::None;
		this->pb27->BorderStyle = BorderStyle::None;
		this->pb28->BorderStyle = BorderStyle::None;
		this->pb29->BorderStyle = BorderStyle::None;
		flag2 = 10;
	}
	else
	{
		this->pb25->BorderStyle = BorderStyle::None;
		flag2 = -1;
	}
}
private: System::Void Pb26_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->pb26->BorderStyle == BorderStyle::None)
	{
		this->pb26->BorderStyle = BorderStyle::Fixed3D;
		this->pb25->BorderStyle = BorderStyle::None;
		this->pb27->BorderStyle = BorderStyle::None;
		this->pb28->BorderStyle = BorderStyle::None;
		this->pb29->BorderStyle = BorderStyle::None;
		flag2 = 11;
	}
	else
	{
		this->pb26->BorderStyle = BorderStyle::None;
		flag2 = -1;
	}
}
private: System::Void Pb27_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->pb27->BorderStyle == BorderStyle::None)
	{
		this->pb27->BorderStyle = BorderStyle::Fixed3D;
		this->pb26->BorderStyle = BorderStyle::None;
		this->pb25->BorderStyle = BorderStyle::None;
		this->pb28->BorderStyle = BorderStyle::None;
		this->pb29->BorderStyle = BorderStyle::None;
		flag2 = 12;
	}
	else
	{
		this->pb27->BorderStyle = BorderStyle::None;
		flag2 = -1;
	}
}
private: System::Void Pb28_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->pb28->BorderStyle == BorderStyle::None)
	{
		this->pb28->BorderStyle = BorderStyle::Fixed3D;
		this->pb26->BorderStyle = BorderStyle::None;
		this->pb27->BorderStyle = BorderStyle::None;
		this->pb25->BorderStyle = BorderStyle::None;
		this->pb29->BorderStyle = BorderStyle::None;
		flag2 = 13;
	}
	else
	{
		this->pb28->BorderStyle = BorderStyle::None;
		flag2 = -1;
	}
}
private: System::Void Pb29_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->pb29->BorderStyle == BorderStyle::None)
	{
		this->pb29->BorderStyle = BorderStyle::Fixed3D;
		this->pb26->BorderStyle = BorderStyle::None;
		this->pb27->BorderStyle = BorderStyle::None;
		this->pb28->BorderStyle = BorderStyle::None;
		this->pb25->BorderStyle = BorderStyle::None;
		flag2 = 14;
	}
	else
	{
		this->pb29->BorderStyle = BorderStyle::None;
		flag2 = -1;
	}
}
private: System::Void NextLevel_Click(System::Object^ sender, System::EventArgs^ e) {
	this->pb15->BorderStyle = BorderStyle::None;
	this->pb16->BorderStyle = BorderStyle::None;
	this->pb17->BorderStyle = BorderStyle::None;
	this->pb18->BorderStyle = BorderStyle::None;
	this->pb19->BorderStyle = BorderStyle::None;
	this->tabControl1->SelectTab(tabPage2);
	flag2 = -1;
}
private: System::Void LastLevel_Click(System::Object^ sender, System::EventArgs^ e) {
	this->pb20->BorderStyle = BorderStyle::None;
	this->pb21->BorderStyle = BorderStyle::None;
	this->pb22->BorderStyle = BorderStyle::None;
	this->pb23->BorderStyle = BorderStyle::None;
	this->pb24->BorderStyle = BorderStyle::None;
	this->tabControl1->SelectTab(tabPage1);
	flag2 = -1;
}
private: System::Void NextLevel2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->pb20->BorderStyle = BorderStyle::None;
	this->pb21->BorderStyle = BorderStyle::None;
	this->pb22->BorderStyle = BorderStyle::None;
	this->pb23->BorderStyle = BorderStyle::None;
	this->pb24->BorderStyle = BorderStyle::None;
	this->tabControl1->SelectTab(tabPage3);
	flag2 = -1;
}
private: System::Void LastLevel2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->tabControl1->SelectTab(tabPage2);
	this->pb25->BorderStyle = BorderStyle::None;
	this->pb26->BorderStyle = BorderStyle::None;
	this->pb27->BorderStyle = BorderStyle::None;
	this->pb28->BorderStyle = BorderStyle::None;
	this->pb29->BorderStyle = BorderStyle::None;
	flag2 = -1;
}
private: System::Void Pb0_Click(System::Object^ sender, System::EventArgs^ e) {
	flag1 = 0; //необходим для определения эквивалентного элемента в массиве A класса Many
	if (flag2 != -1)//проверяет выбрана ли картинка для сопоставления
		mas->Change(flag1, flag2); //если да меняет местами выбранную картинку с той, которая находилась на месте, куда необходимо переместить картинку
	View(); //отображает изменения на форме

	//после перестановки ни одна из картинок не должна быть выбрана
	this->pb15->BorderStyle = BorderStyle::None; //убирает визуальное отображение выбора
	this->pb16->BorderStyle = BorderStyle::None;
	this->pb17->BorderStyle = BorderStyle::None;
	this->pb18->BorderStyle = BorderStyle::None;
	this->pb19->BorderStyle = BorderStyle::None;
	flag2 = -1; //"обнуляет" показатель выбора
}
private: System::Void Pb1_Click(System::Object^ sender, System::EventArgs^ e) {
	flag1 = 1;
	if (flag2 != -1)
		mas->Change(flag1, flag2);
	View();
	this->pb15->BorderStyle = BorderStyle::None;
	this->pb16->BorderStyle = BorderStyle::None;
	this->pb17->BorderStyle = BorderStyle::None;
	this->pb18->BorderStyle = BorderStyle::None;
	this->pb19->BorderStyle = BorderStyle::None;
	flag2 = -1;
}
private: System::Void Pb2_Click(System::Object^ sender, System::EventArgs^ e) {
	flag1 = 2;
	if (flag2 != -1)
		mas->Change(flag1, flag2);
	View();
	this->pb15->BorderStyle = BorderStyle::None;
	this->pb16->BorderStyle = BorderStyle::None;
	this->pb17->BorderStyle = BorderStyle::None;
	this->pb18->BorderStyle = BorderStyle::None;
	this->pb19->BorderStyle = BorderStyle::None;
	flag2 = -1;
}
private: System::Void Pb3_Click(System::Object^ sender, System::EventArgs^ e) {
	flag1 = 3;
	if (flag2 != -1)
		mas->Change(flag1, flag2);
	View();
	this->pb15->BorderStyle = BorderStyle::None;
	this->pb16->BorderStyle = BorderStyle::None;
	this->pb17->BorderStyle = BorderStyle::None;
	this->pb18->BorderStyle = BorderStyle::None;
	this->pb19->BorderStyle = BorderStyle::None;
	flag2 = -1;
}
private: System::Void Pb4_Click(System::Object^ sender, System::EventArgs^ e) {
	flag1 = 4;
	if (flag2 != -1)
		mas->Change(flag1, flag2);
	View();
	this->pb15->BorderStyle = BorderStyle::None;
	this->pb16->BorderStyle = BorderStyle::None;
	this->pb17->BorderStyle = BorderStyle::None;
	this->pb18->BorderStyle = BorderStyle::None;
	this->pb19->BorderStyle = BorderStyle::None;
	flag2 = -1;
}
private: System::Void Pb5_Click(System::Object^ sender, System::EventArgs^ e) {
	flag1 = 5;
	if (flag2 != -1)
		mas->Change(flag1, flag2);
	View();
	this->pb20->BorderStyle = BorderStyle::None;
	this->pb21->BorderStyle = BorderStyle::None;
	this->pb22->BorderStyle = BorderStyle::None;
	this->pb23->BorderStyle = BorderStyle::None;
	this->pb24->BorderStyle = BorderStyle::None;
	flag2 = -1;
}
private: System::Void Pb6_Click(System::Object^ sender, System::EventArgs^ e) {
	flag1 = 6;
	if (flag2 != -1)
		mas->Change(flag1, flag2);
	View();
	this->pb20->BorderStyle = BorderStyle::None;
	this->pb21->BorderStyle = BorderStyle::None;
	this->pb22->BorderStyle = BorderStyle::None;
	this->pb23->BorderStyle = BorderStyle::None;
	this->pb24->BorderStyle = BorderStyle::None;
	flag2 = -1;
}
private: System::Void Pb7_Click(System::Object^ sender, System::EventArgs^ e) {
	flag1 = 7;
	if (flag2 != -1)
		mas->Change(flag1, flag2);
	View();
	this->pb20->BorderStyle = BorderStyle::None;
	this->pb21->BorderStyle = BorderStyle::None;
	this->pb22->BorderStyle = BorderStyle::None;
	this->pb23->BorderStyle = BorderStyle::None;
	this->pb24->BorderStyle = BorderStyle::None;
	flag2 = -1;
}
private: System::Void Pb8_Click(System::Object^ sender, System::EventArgs^ e) {
	flag1 = 8;
	if (flag2 != -1)
		mas->Change(flag1, flag2);
	View();
	this->pb20->BorderStyle = BorderStyle::None;
	this->pb21->BorderStyle = BorderStyle::None;
	this->pb22->BorderStyle = BorderStyle::None;
	this->pb23->BorderStyle = BorderStyle::None;
	this->pb24->BorderStyle = BorderStyle::None;
	flag2 = -1;
}
private: System::Void Pb9_Click(System::Object^ sender, System::EventArgs^ e) {
	flag1 = 9;
	if (flag2 != -1)
		mas->Change(flag1, flag2);
	View();
	this->pb20->BorderStyle = BorderStyle::None;
	this->pb21->BorderStyle = BorderStyle::None;
	this->pb22->BorderStyle = BorderStyle::None;
	this->pb23->BorderStyle = BorderStyle::None;
	this->pb24->BorderStyle = BorderStyle::None;
	flag2 = -1;
}
private: System::Void Pb10_Click(System::Object^ sender, System::EventArgs^ e) {
	flag1 = 10;
	if (flag2 != -1)
		mas->Change(flag1, flag2);
	View();
	this->pb25->BorderStyle = BorderStyle::None;
	this->pb26->BorderStyle = BorderStyle::None;
	this->pb27->BorderStyle = BorderStyle::None;
	this->pb28->BorderStyle = BorderStyle::None;
	this->pb29->BorderStyle = BorderStyle::None;
	flag2 = -1;
}
private: System::Void Pb11_Click(System::Object^ sender, System::EventArgs^ e) {
	flag1 = 11;
	if (flag2 != -1)
		mas->Change(flag1, flag2);
	View();
	this->pb25->BorderStyle = BorderStyle::None;
	this->pb26->BorderStyle = BorderStyle::None;
	this->pb27->BorderStyle = BorderStyle::None;
	this->pb28->BorderStyle = BorderStyle::None;
	this->pb29->BorderStyle = BorderStyle::None;
	flag2 = -1;
}
private: System::Void Pb12_Click(System::Object^ sender, System::EventArgs^ e) {
	flag1 = 12;
	if (flag2 != -1)
		mas->Change(flag1, flag2);
	View();
	this->pb25->BorderStyle = BorderStyle::None;
	this->pb26->BorderStyle = BorderStyle::None;
	this->pb27->BorderStyle = BorderStyle::None;
	this->pb28->BorderStyle = BorderStyle::None;
	this->pb29->BorderStyle = BorderStyle::None;
	flag2 = -1;
}
private: System::Void Pb13_Click(System::Object^ sender, System::EventArgs^ e) {
	flag1 = 13;
	if (flag2 != -1)
		mas->Change(flag1, flag2);
	View();
	this->pb25->BorderStyle = BorderStyle::None;
	this->pb26->BorderStyle = BorderStyle::None;
	this->pb27->BorderStyle = BorderStyle::None;
	this->pb28->BorderStyle = BorderStyle::None;
	this->pb29->BorderStyle = BorderStyle::None;
	flag2 = -1;
}
private: System::Void Pb14_Click(System::Object^ sender, System::EventArgs^ e) {
	flag1 = 14;
	if (flag2 != -1)
		mas->Change(flag1, flag2);
	View();
	this->pb25->BorderStyle = BorderStyle::None;
	this->pb26->BorderStyle = BorderStyle::None;
	this->pb27->BorderStyle = BorderStyle::None;
	this->pb28->BorderStyle = BorderStyle::None;
	this->pb29->BorderStyle = BorderStyle::None;
	flag2 = -1;
}
private: System::Void Check_Click(System::Object^ sender, System::EventArgs^ e) {
	if (mas->Check(1))
	{
		System::Media::SoundPlayer^ player;
		player = gcnew System::Media::SoundPlayer();
		player->SoundLocation = System::IO::Directory::GetCurrentDirectory() + "\\Sounds\\yes.wav";
		player->Load();
		player->PlaySync();
	}
	else
	{
		System::Media::SoundPlayer^ player;
		player = gcnew System::Media::SoundPlayer();
		player->SoundLocation = System::IO::Directory::GetCurrentDirectory() + "\\Sounds\\no.wav";;
		player->Load();
		player->PlaySync();
	}
}
private: System::Void Check2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (mas->Check(2))
	{
		System::Media::SoundPlayer^ player;
		player = gcnew System::Media::SoundPlayer();
		player->SoundLocation = System::IO::Directory::GetCurrentDirectory() + "\\Sounds\\yes.wav";
		player->Load();
		player->PlaySync();
	}
	else
	{
		System::Media::SoundPlayer^ player;
		player = gcnew System::Media::SoundPlayer();
		player->SoundLocation = System::IO::Directory::GetCurrentDirectory() + "\\Sounds\\no.wav";;
		player->Load();
		player->PlaySync();
	}
}
private: System::Void Check3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (mas->Check(3))
	{
		System::Media::SoundPlayer^ player;
		player = gcnew System::Media::SoundPlayer();
		player->SoundLocation = System::IO::Directory::GetCurrentDirectory() + "\\Sounds\\yes.wav";
		player->Load();
		player->PlaySync();
	}
	else
	{
		System::Media::SoundPlayer^ player;
		player = gcnew System::Media::SoundPlayer();
		player->SoundLocation = System::IO::Directory::GetCurrentDirectory() + "\\Sounds\\no.wav";;
		player->Load();
		player->PlaySync();
	}
}
private: System::Void Repeat1_Click(System::Object^ sender, System::EventArgs^ e) {
	Comparison_Load(sender, e);
}


};
}
