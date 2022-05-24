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
	/// Сводка для Materials
	/// </summary>
	public ref class Materials : public System::Windows::Forms::Form
	{
		int key;
		TypeAnimal^ typeAnimal;
		TypeFood^ typeFood;
		WildAndDomestic^ WaD;
		Footprints^ footprints;
	private: System::Windows::Forms::Button^ intro;
	private: System::Windows::Forms::Button^ repeat1;
	private: System::Windows::Forms::Button^ repeat2;

	private: System::Windows::Forms::Button^ repeat4;

			 Habitat^ habitat;
	public:
		Materials(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
			typeAnimal = gcnew TypeAnimal();
			typeFood = gcnew TypeFood();
			WaD = gcnew WildAndDomestic();
			footprints = gcnew Footprints();
			habitat = gcnew Habitat();
		}
		Materials(int k)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
			key = k;
			typeAnimal = gcnew TypeAnimal();
			typeFood = gcnew TypeFood();
			WaD = gcnew WildAndDomestic();
			footprints = gcnew Footprints();
			habitat = gcnew Habitat();
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Materials()
		{
			if (components)
			{
				delete components;
			}
		}
	private: AxWMPLib::AxWindowsMediaPlayer^ WMP;
	private: System::Windows::Forms::TabControl^ tabControl1;


	protected:

	protected:

	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::Button^ home;

	private: System::Windows::Forms::Button^ reptiles;

	private: System::Windows::Forms::Button^ amphibians;

	private: System::Windows::Forms::Button^ insects;

	private: System::Windows::Forms::Button^ fish;

	private: System::Windows::Forms::Button^ birds;

	private: System::Windows::Forms::Button^ animals;
	private: System::Windows::Forms::Button^ conclusion;
	private: System::Windows::Forms::Button^ omnivores;



	private: System::Windows::Forms::Button^ carnivores;
	private: System::Windows::Forms::Button^ herbivores;



	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::TabPage^ tabPage4;
	private: System::Windows::Forms::Button^ domestic;
	private: System::Windows::Forms::Button^ wild;
	private: System::Windows::Forms::TabPage^ tabPage5;
	private: System::Windows::Forms::Button^ jungle;
	private: System::Windows::Forms::Button^ savanna;
	private: System::Windows::Forms::Button^ desert;
	private: System::Windows::Forms::Button^ steppe;
	private: System::Windows::Forms::Button^ forest;
	private: System::Windows::Forms::Button^ cold;
	private: System::Windows::Forms::Button^ cartoon;
	private: System::Windows::Forms::Button^ lesson;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Materials::typeid));
			this->WMP = (gcnew AxWMPLib::AxWindowsMediaPlayer());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->intro = (gcnew System::Windows::Forms::Button());
			this->conclusion = (gcnew System::Windows::Forms::Button());
			this->reptiles = (gcnew System::Windows::Forms::Button());
			this->amphibians = (gcnew System::Windows::Forms::Button());
			this->insects = (gcnew System::Windows::Forms::Button());
			this->fish = (gcnew System::Windows::Forms::Button());
			this->birds = (gcnew System::Windows::Forms::Button());
			this->animals = (gcnew System::Windows::Forms::Button());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->repeat1 = (gcnew System::Windows::Forms::Button());
			this->omnivores = (gcnew System::Windows::Forms::Button());
			this->carnivores = (gcnew System::Windows::Forms::Button());
			this->herbivores = (gcnew System::Windows::Forms::Button());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->repeat2 = (gcnew System::Windows::Forms::Button());
			this->domestic = (gcnew System::Windows::Forms::Button());
			this->wild = (gcnew System::Windows::Forms::Button());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->cartoon = (gcnew System::Windows::Forms::Button());
			this->lesson = (gcnew System::Windows::Forms::Button());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->repeat4 = (gcnew System::Windows::Forms::Button());
			this->jungle = (gcnew System::Windows::Forms::Button());
			this->savanna = (gcnew System::Windows::Forms::Button());
			this->desert = (gcnew System::Windows::Forms::Button());
			this->steppe = (gcnew System::Windows::Forms::Button());
			this->forest = (gcnew System::Windows::Forms::Button());
			this->cold = (gcnew System::Windows::Forms::Button());
			this->home = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->WMP))->BeginInit();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->tabPage4->SuspendLayout();
			this->tabPage5->SuspendLayout();
			this->SuspendLayout();
			// 
			// WMP
			// 
			this->WMP->Enabled = true;
			this->WMP->Location = System::Drawing::Point(32, 128);
			this->WMP->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->WMP->Name = L"WMP";
			this->WMP->OcxState = (cli::safe_cast<System::Windows::Forms::AxHost::State^>(resources->GetObject(L"WMP.OcxState")));
			this->WMP->Size = System::Drawing::Size(1864, 839);
			this->WMP->TabIndex = 7;
			// 
			// tabControl1
			// 
			this->tabControl1->Appearance = System::Windows::Forms::TabAppearance::FlatButtons;
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Controls->Add(this->tabPage5);
			this->tabControl1->ItemSize = System::Drawing::Size(0, 1);
			this->tabControl1->Location = System::Drawing::Point(43, 2);
			this->tabControl1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1747, 133);
			this->tabControl1->TabIndex = 8;
			this->tabControl1->TabStop = false;
			// 
			// tabPage1
			// 
			this->tabPage1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tabPage1.BackgroundImage")));
			this->tabPage1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->tabPage1->Controls->Add(this->intro);
			this->tabPage1->Controls->Add(this->conclusion);
			this->tabPage1->Controls->Add(this->reptiles);
			this->tabPage1->Controls->Add(this->amphibians);
			this->tabPage1->Controls->Add(this->insects);
			this->tabPage1->Controls->Add(this->fish);
			this->tabPage1->Controls->Add(this->birds);
			this->tabPage1->Controls->Add(this->animals);
			this->tabPage1->Location = System::Drawing::Point(4, 5);
			this->tabPage1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tabPage1->Size = System::Drawing::Size(1739, 124);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"tabPage1";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// intro
			// 
			this->intro->BackColor = System::Drawing::Color::OldLace;
			this->intro->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->intro->Location = System::Drawing::Point(13, 15);
			this->intro->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->intro->Name = L"intro";
			this->intro->Size = System::Drawing::Size(249, 90);
			this->intro->TabIndex = 13;
			this->intro->Text = L"Вступление";
			this->intro->UseVisualStyleBackColor = false;
			this->intro->Click += gcnew System::EventHandler(this, &Materials::Intro_Click);
			// 
			// conclusion
			// 
			this->conclusion->BackColor = System::Drawing::Color::OldLace;
			this->conclusion->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->conclusion->Location = System::Drawing::Point(1493, 15);
			this->conclusion->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->conclusion->Name = L"conclusion";
			this->conclusion->Size = System::Drawing::Size(239, 90);
			this->conclusion->TabIndex = 12;
			this->conclusion->Text = L"Обобщение";
			this->conclusion->UseVisualStyleBackColor = false;
			this->conclusion->Click += gcnew System::EventHandler(this, &Materials::Conclusion_Click);
			// 
			// reptiles
			// 
			this->reptiles->BackColor = System::Drawing::Color::OldLace;
			this->reptiles->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->reptiles->Location = System::Drawing::Point(1281, 15);
			this->reptiles->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->reptiles->Name = L"reptiles";
			this->reptiles->Size = System::Drawing::Size(208, 90);
			this->reptiles->TabIndex = 11;
			this->reptiles->Text = L"Рептилии";
			this->reptiles->UseVisualStyleBackColor = false;
			this->reptiles->Click += gcnew System::EventHandler(this, &Materials::Reptiles_Click);
			// 
			// amphibians
			// 
			this->amphibians->BackColor = System::Drawing::Color::OldLace;
			this->amphibians->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->amphibians->Location = System::Drawing::Point(984, 15);
			this->amphibians->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->amphibians->Name = L"amphibians";
			this->amphibians->Size = System::Drawing::Size(291, 90);
			this->amphibians->TabIndex = 10;
			this->amphibians->Text = L"Земноводные";
			this->amphibians->UseVisualStyleBackColor = false;
			this->amphibians->Click += gcnew System::EventHandler(this, &Materials::Amphibians_Click);
			// 
			// insects
			// 
			this->insects->BackColor = System::Drawing::Color::OldLace;
			this->insects->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->insects->Location = System::Drawing::Point(733, 15);
			this->insects->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->insects->Name = L"insects";
			this->insects->Size = System::Drawing::Size(244, 90);
			this->insects->TabIndex = 9;
			this->insects->Text = L"Насекомые";
			this->insects->UseVisualStyleBackColor = false;
			this->insects->Click += gcnew System::EventHandler(this, &Materials::Insects_Click);
			// 
			// fish
			// 
			this->fish->BackColor = System::Drawing::Color::OldLace;
			this->fish->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->fish->Location = System::Drawing::Point(587, 15);
			this->fish->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->fish->Name = L"fish";
			this->fish->Size = System::Drawing::Size(141, 90);
			this->fish->TabIndex = 8;
			this->fish->Text = L"Рыбы";
			this->fish->UseVisualStyleBackColor = false;
			this->fish->Click += gcnew System::EventHandler(this, &Materials::Fish_Click);
			// 
			// birds
			// 
			this->birds->BackColor = System::Drawing::Color::OldLace;
			this->birds->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->birds->Location = System::Drawing::Point(427, 15);
			this->birds->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->birds->Name = L"birds";
			this->birds->Size = System::Drawing::Size(155, 90);
			this->birds->TabIndex = 7;
			this->birds->Text = L"Птицы";
			this->birds->UseVisualStyleBackColor = false;
			this->birds->Click += gcnew System::EventHandler(this, &Materials::Birds_Click);
			// 
			// animals
			// 
			this->animals->BackColor = System::Drawing::Color::OldLace;
			this->animals->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->animals->Location = System::Drawing::Point(268, 15);
			this->animals->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->animals->Name = L"animals";
			this->animals->Size = System::Drawing::Size(153, 90);
			this->animals->TabIndex = 6;
			this->animals->Text = L"Звери";
			this->animals->UseVisualStyleBackColor = false;
			this->animals->Click += gcnew System::EventHandler(this, &Materials::Animals_Click);
			// 
			// tabPage2
			// 
			this->tabPage2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tabPage2.BackgroundImage")));
			this->tabPage2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->tabPage2->Controls->Add(this->repeat1);
			this->tabPage2->Controls->Add(this->omnivores);
			this->tabPage2->Controls->Add(this->carnivores);
			this->tabPage2->Controls->Add(this->herbivores);
			this->tabPage2->Location = System::Drawing::Point(4, 5);
			this->tabPage2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tabPage2->Size = System::Drawing::Size(1739, 124);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"tabPage2";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// repeat1
			// 
			this->repeat1->BackColor = System::Drawing::Color::OldLace;
			this->repeat1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->repeat1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"repeat1.Image")));
			this->repeat1->Location = System::Drawing::Point(5, 2);
			this->repeat1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->repeat1->Name = L"repeat1";
			this->repeat1->Size = System::Drawing::Size(120, 117);
			this->repeat1->TabIndex = 28;
			this->repeat1->UseVisualStyleBackColor = false;
			this->repeat1->Click += gcnew System::EventHandler(this, &Materials::Repeat1_Click);
			// 
			// omnivores
			// 
			this->omnivores->BackColor = System::Drawing::Color::OldLace;
			this->omnivores->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->omnivores->Location = System::Drawing::Point(1436, 16);
			this->omnivores->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->omnivores->Name = L"omnivores";
			this->omnivores->Size = System::Drawing::Size(259, 90);
			this->omnivores->TabIndex = 14;
			this->omnivores->Text = L"Всеядные";
			this->omnivores->UseVisualStyleBackColor = false;
			this->omnivores->Click += gcnew System::EventHandler(this, &Materials::Omnivores_Click);
			// 
			// carnivores
			// 
			this->carnivores->BackColor = System::Drawing::Color::OldLace;
			this->carnivores->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->carnivores->Location = System::Drawing::Point(897, 14);
			this->carnivores->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->carnivores->Name = L"carnivores";
			this->carnivores->Size = System::Drawing::Size(244, 90);
			this->carnivores->TabIndex = 13;
			this->carnivores->Text = L"Хищники";
			this->carnivores->UseVisualStyleBackColor = false;
			this->carnivores->Click += gcnew System::EventHandler(this, &Materials::Carnivores_Click);
			// 
			// herbivores
			// 
			this->herbivores->BackColor = System::Drawing::Color::OldLace;
			this->herbivores->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->herbivores->Location = System::Drawing::Point(261, 14);
			this->herbivores->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->herbivores->Name = L"herbivores";
			this->herbivores->Size = System::Drawing::Size(387, 90);
			this->herbivores->TabIndex = 12;
			this->herbivores->Text = L"Травоядные";
			this->herbivores->UseVisualStyleBackColor = false;
			this->herbivores->Click += gcnew System::EventHandler(this, &Materials::Herbivores_Click);
			// 
			// tabPage3
			// 
			this->tabPage3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tabPage3.BackgroundImage")));
			this->tabPage3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->tabPage3->Controls->Add(this->repeat2);
			this->tabPage3->Controls->Add(this->domestic);
			this->tabPage3->Controls->Add(this->wild);
			this->tabPage3->Location = System::Drawing::Point(4, 5);
			this->tabPage3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tabPage3->Size = System::Drawing::Size(1739, 124);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"tabPage3";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// repeat2
			// 
			this->repeat2->BackColor = System::Drawing::Color::OldLace;
			this->repeat2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->repeat2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"repeat2.Image")));
			this->repeat2->Location = System::Drawing::Point(5, 2);
			this->repeat2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->repeat2->Name = L"repeat2";
			this->repeat2->Size = System::Drawing::Size(120, 117);
			this->repeat2->TabIndex = 29;
			this->repeat2->UseVisualStyleBackColor = false;
			this->repeat2->Click += gcnew System::EventHandler(this, &Materials::Repeat2_Click);
			// 
			// domestic
			// 
			this->domestic->BackColor = System::Drawing::Color::OldLace;
			this->domestic->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->domestic->Location = System::Drawing::Point(1117, 16);
			this->domestic->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->domestic->Name = L"domestic";
			this->domestic->Size = System::Drawing::Size(387, 90);
			this->domestic->TabIndex = 15;
			this->domestic->Text = L"Домашние";
			this->domestic->UseVisualStyleBackColor = false;
			this->domestic->Click += gcnew System::EventHandler(this, &Materials::Domestic_Click);
			// 
			// wild
			// 
			this->wild->BackColor = System::Drawing::Color::OldLace;
			this->wild->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->wild->Location = System::Drawing::Point(368, 18);
			this->wild->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->wild->Name = L"wild";
			this->wild->Size = System::Drawing::Size(387, 90);
			this->wild->TabIndex = 14;
			this->wild->Text = L"Дикие";
			this->wild->UseVisualStyleBackColor = false;
			this->wild->Click += gcnew System::EventHandler(this, &Materials::Wild_Click);
			// 
			// tabPage4
			// 
			this->tabPage4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tabPage4.BackgroundImage")));
			this->tabPage4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->tabPage4->Controls->Add(this->cartoon);
			this->tabPage4->Controls->Add(this->lesson);
			this->tabPage4->Location = System::Drawing::Point(4, 5);
			this->tabPage4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tabPage4->Size = System::Drawing::Size(1739, 124);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"tabPage4";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// cartoon
			// 
			this->cartoon->BackColor = System::Drawing::Color::OldLace;
			this->cartoon->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->cartoon->Location = System::Drawing::Point(987, 16);
			this->cartoon->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->cartoon->Name = L"cartoon";
			this->cartoon->Size = System::Drawing::Size(387, 90);
			this->cartoon->TabIndex = 17;
			this->cartoon->Text = L"Мультфильм";
			this->cartoon->UseVisualStyleBackColor = false;
			this->cartoon->Click += gcnew System::EventHandler(this, &Materials::Cartoon_Click);
			// 
			// lesson
			// 
			this->lesson->BackColor = System::Drawing::Color::OldLace;
			this->lesson->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lesson->Location = System::Drawing::Point(349, 16);
			this->lesson->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->lesson->Name = L"lesson";
			this->lesson->Size = System::Drawing::Size(387, 90);
			this->lesson->TabIndex = 16;
			this->lesson->Text = L"Урок";
			this->lesson->UseVisualStyleBackColor = false;
			this->lesson->Click += gcnew System::EventHandler(this, &Materials::Lesson_Click);
			// 
			// tabPage5
			// 
			this->tabPage5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tabPage5.BackgroundImage")));
			this->tabPage5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->tabPage5->Controls->Add(this->repeat4);
			this->tabPage5->Controls->Add(this->jungle);
			this->tabPage5->Controls->Add(this->savanna);
			this->tabPage5->Controls->Add(this->desert);
			this->tabPage5->Controls->Add(this->steppe);
			this->tabPage5->Controls->Add(this->forest);
			this->tabPage5->Controls->Add(this->cold);
			this->tabPage5->Location = System::Drawing::Point(4, 5);
			this->tabPage5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tabPage5->Size = System::Drawing::Size(1739, 124);
			this->tabPage5->TabIndex = 4;
			this->tabPage5->Text = L"tabPage5";
			this->tabPage5->UseVisualStyleBackColor = true;
			// 
			// repeat4
			// 
			this->repeat4->BackColor = System::Drawing::Color::OldLace;
			this->repeat4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->repeat4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"repeat4.Image")));
			this->repeat4->Location = System::Drawing::Point(5, 1);
			this->repeat4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->repeat4->Name = L"repeat4";
			this->repeat4->Size = System::Drawing::Size(120, 117);
			this->repeat4->TabIndex = 29;
			this->repeat4->UseVisualStyleBackColor = false;
			this->repeat4->Click += gcnew System::EventHandler(this, &Materials::Repeat4_Click);
			// 
			// jungle
			// 
			this->jungle->BackColor = System::Drawing::Color::OldLace;
			this->jungle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->jungle->Location = System::Drawing::Point(1413, 15);
			this->jungle->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->jungle->Name = L"jungle";
			this->jungle->Size = System::Drawing::Size(317, 90);
			this->jungle->TabIndex = 26;
			this->jungle->Text = L"Экваториальные леса";
			this->jungle->UseVisualStyleBackColor = false;
			this->jungle->Click += gcnew System::EventHandler(this, &Materials::Jungle_Click);
			// 
			// savanna
			// 
			this->savanna->BackColor = System::Drawing::Color::OldLace;
			this->savanna->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->savanna->Location = System::Drawing::Point(1109, 15);
			this->savanna->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->savanna->Name = L"savanna";
			this->savanna->Size = System::Drawing::Size(299, 90);
			this->savanna->TabIndex = 25;
			this->savanna->Text = L"Саванны и редколесья";
			this->savanna->UseVisualStyleBackColor = false;
			this->savanna->Click += gcnew System::EventHandler(this, &Materials::Savanna_Click);
			// 
			// desert
			// 
			this->desert->BackColor = System::Drawing::Color::OldLace;
			this->desert->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->desert->Location = System::Drawing::Point(785, 16);
			this->desert->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->desert->Name = L"desert";
			this->desert->Size = System::Drawing::Size(317, 90);
			this->desert->TabIndex = 24;
			this->desert->Text = L"Пустыни и полупустыни";
			this->desert->UseVisualStyleBackColor = false;
			this->desert->Click += gcnew System::EventHandler(this, &Materials::Desert_Click);
			// 
			// steppe
			// 
			this->steppe->BackColor = System::Drawing::Color::OldLace;
			this->steppe->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->steppe->Location = System::Drawing::Point(607, 16);
			this->steppe->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->steppe->Name = L"steppe";
			this->steppe->Size = System::Drawing::Size(173, 90);
			this->steppe->TabIndex = 23;
			this->steppe->Text = L"Степи";
			this->steppe->UseVisualStyleBackColor = false;
			this->steppe->Click += gcnew System::EventHandler(this, &Materials::Steppe_Click);
			// 
			// forest
			// 
			this->forest->BackColor = System::Drawing::Color::OldLace;
			this->forest->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->forest->Location = System::Drawing::Point(425, 15);
			this->forest->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->forest->Name = L"forest";
			this->forest->Size = System::Drawing::Size(173, 90);
			this->forest->TabIndex = 22;
			this->forest->Text = L"Леса";
			this->forest->UseVisualStyleBackColor = false;
			this->forest->Click += gcnew System::EventHandler(this, &Materials::Forest_Click);
			// 
			// cold
			// 
			this->cold->BackColor = System::Drawing::Color::OldLace;
			this->cold->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->cold->Location = System::Drawing::Point(140, 15);
			this->cold->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->cold->Name = L"cold";
			this->cold->Size = System::Drawing::Size(284, 90);
			this->cold->TabIndex = 21;
			this->cold->Text = L"Арктические пустыни и тундра";
			this->cold->UseVisualStyleBackColor = false;
			this->cold->Click += gcnew System::EventHandler(this, &Materials::Cold_Click);
			// 
			// home
			// 
			this->home->BackColor = System::Drawing::SystemColors::Info;
			this->home->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->home->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"home.Image")));
			this->home->Location = System::Drawing::Point(1789, 28);
			this->home->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->home->Name = L"home";
			this->home->Size = System::Drawing::Size(107, 98);
			this->home->TabIndex = 9;
			this->home->UseVisualStyleBackColor = false;
			this->home->Click += gcnew System::EventHandler(this, &Materials::Button7_Click);
			// 
			// Materials
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1924, 990);
			this->Controls->Add(this->home);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->WMP);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"Materials";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Materials";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Materials::Materials_FormClosing);
			this->Load += gcnew System::EventHandler(this, &Materials::Materials_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->WMP))->EndInit();
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage2->ResumeLayout(false);
			this->tabPage3->ResumeLayout(false);
			this->tabPage4->ResumeLayout(false);
			this->tabPage5->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Materials_Load(System::Object^ sender, System::EventArgs^ e) {
		switch (key)
		{
		case 0:
		{
			this->tabControl1->SelectTab(tabPage1);
			typeAnimal->Fill("type animal");
			WMP->URL = typeAnimal->introduction;
			break;
		}
		case 1:
		{
			this->tabControl1->SelectTab(tabPage2); 
			typeFood->Fill("type food");
			WMP->URL = typeFood->introduction;
			break;
		}
		case 2:
		{
			this->tabControl1->SelectTab(tabPage3); 
			WaD->Fill("wild and domestic");
			WMP->URL = WaD->introduction;
			break;
		}
		case 3:
		{
			this->tabControl1->SelectTab(tabPage4);
			footprints->Fill("footprints");
			WMP->URL = footprints->video;
			break;
		}
		case 4:
		{
			this->tabControl1->SelectTab(tabPage5);
			habitat->Fill("habitat");
			WMP->URL = habitat->introduction;
			break;
		}
		}
	}
private: System::Void Button7_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}

private: System::Void Animals_Click(System::Object^ sender, System::EventArgs^ e) {
	WMP->URL = typeAnimal->animals;
}
private: System::Void Birds_Click(System::Object^ sender, System::EventArgs^ e) {
	WMP->URL = typeAnimal->birds;
}
private: System::Void Fish_Click(System::Object^ sender, System::EventArgs^ e) {
	WMP->URL = typeAnimal->fish;
}
private: System::Void Insects_Click(System::Object^ sender, System::EventArgs^ e) {
	WMP->URL = typeAnimal->insects;
}
private: System::Void Amphibians_Click(System::Object^ sender, System::EventArgs^ e) {
	WMP->URL = typeAnimal->amphibians;
}
private: System::Void Reptiles_Click(System::Object^ sender, System::EventArgs^ e) {
	WMP->URL = typeAnimal->reptiles;
}
private: System::Void Conclusion_Click(System::Object^ sender, System::EventArgs^ e) {
	WMP->URL = typeAnimal->conclusion;
}
private: System::Void Herbivores_Click(System::Object^ sender, System::EventArgs^ e) {
	WMP->URL = typeFood->herbivores;
}
private: System::Void Carnivores_Click(System::Object^ sender, System::EventArgs^ e) {
	WMP->URL = typeFood->carnivores;
}
private: System::Void Omnivores_Click(System::Object^ sender, System::EventArgs^ e) {
	WMP->URL = typeFood->omnivores;
}
private: System::Void Wild_Click(System::Object^ sender, System::EventArgs^ e) {
	WMP->URL = WaD->wild;
}
private: System::Void Domestic_Click(System::Object^ sender, System::EventArgs^ e) {
	WMP->URL = WaD->domestic;
}
private: System::Void Lesson_Click(System::Object^ sender, System::EventArgs^ e) {
	WMP->URL = footprints->video;
}
private: System::Void Cartoon_Click(System::Object^ sender, System::EventArgs^ e) {
	WMP->URL = footprints->cartoon;
}
private: System::Void Cold_Click(System::Object^ sender, System::EventArgs^ e) {
	WMP->URL = habitat->cold;
}
private: System::Void Forest_Click(System::Object^ sender, System::EventArgs^ e) {
	WMP->URL = habitat->forest;
}
private: System::Void Steppe_Click(System::Object^ sender, System::EventArgs^ e) {
	WMP->URL = habitat->steppe;
}
private: System::Void Desert_Click(System::Object^ sender, System::EventArgs^ e) {
	WMP->URL = habitat->desert;
}
private: System::Void Savanna_Click(System::Object^ sender, System::EventArgs^ e) {
	WMP->URL = habitat->savanna;
}
private: System::Void Jungle_Click(System::Object^ sender, System::EventArgs^ e) {
	WMP->URL = habitat->jungle;
}
private: System::Void Intro_Click(System::Object^ sender, System::EventArgs^ e) {
	WMP->URL = typeAnimal->introduction;
}
private: System::Void Repeat1_Click(System::Object^ sender, System::EventArgs^ e) {
	WMP->URL = typeFood->introduction;
}
private: System::Void Repeat2_Click(System::Object^ sender, System::EventArgs^ e) {
	WMP->URL = WaD->introduction;
}
private: System::Void Repeat3_Click(System::Object^ sender, System::EventArgs^ e) {
	WMP->URL = WaD->introduction;
}
private: System::Void Repeat4_Click(System::Object^ sender, System::EventArgs^ e) {
	WMP->URL = habitat->introduction;
}
private: System::Void Materials_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	WMP->URL = "";
}
};
}
