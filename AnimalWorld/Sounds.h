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
	/// —водка дл€ Sounds
	/// </summary>
	public ref class Sounds : public System::Windows::Forms::Form
	{
		List^ Data;
	public:
		Sounds(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
			Data = gcnew List();
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~Sounds()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button7;

	private: System::Windows::Forms::PictureBox^ s0;
	private: System::Windows::Forms::PictureBox^ s1; 
	private: System::Windows::Forms::PictureBox^ s2;
	private: System::Windows::Forms::PictureBox^ s3;
	private: System::Windows::Forms::PictureBox^ s4;
	private: System::Windows::Forms::PictureBox^ s5;
	private: System::Windows::Forms::PictureBox^ s6;
	private: System::Windows::Forms::PictureBox^ s7;
	private: System::Windows::Forms::PictureBox^ s8;
	private: System::Windows::Forms::PictureBox^ s9;
	private: System::Windows::Forms::PictureBox^ s10;
	private: System::Windows::Forms::PictureBox^ s11;
	private: System::Windows::Forms::PictureBox^ s12;
	private: System::Windows::Forms::PictureBox^ s13;
	private: System::Windows::Forms::PictureBox^ s14;
	private: System::Windows::Forms::PictureBox^ s15;
	private: System::Windows::Forms::PictureBox^ s16;
	private: System::Windows::Forms::PictureBox^ s17;
	private: System::Windows::Forms::PictureBox^ s18;
	private: System::Windows::Forms::PictureBox^ s19;
	private: System::Windows::Forms::PictureBox^ s20;
	private: System::Windows::Forms::PictureBox^ s21;
	private: System::Windows::Forms::PictureBox^ s22;
	private: System::Windows::Forms::PictureBox^ s23;
	private: System::Windows::Forms::PictureBox^ s24;
	private: System::Windows::Forms::PictureBox^ s25;
	private: System::Windows::Forms::PictureBox^ s26;
	private: System::Windows::Forms::PictureBox^ s27;
	private: System::Windows::Forms::PictureBox^ s28;
	private: System::Windows::Forms::PictureBox^ s29;
	private: System::Windows::Forms::PictureBox^ s30;
	private: System::Windows::Forms::PictureBox^ s31;
	private: System::Windows::Forms::PictureBox^ s32;
	private: System::Windows::Forms::PictureBox^ s33;
	private: System::Windows::Forms::PictureBox^ s34;
	private: System::Windows::Forms::PictureBox^ s35;
	private: System::Windows::Forms::PictureBox^ s36;
	private: System::Windows::Forms::PictureBox^ s37;
	private: System::Windows::Forms::PictureBox^ s38;
	private: System::Windows::Forms::PictureBox^ s39;
	
	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Sounds::typeid));
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->s0 = (gcnew System::Windows::Forms::PictureBox());
			this->s8 = (gcnew System::Windows::Forms::PictureBox());
			this->s16 = (gcnew System::Windows::Forms::PictureBox());
			this->s24 = (gcnew System::Windows::Forms::PictureBox());
			this->s32 = (gcnew System::Windows::Forms::PictureBox());
			this->s33 = (gcnew System::Windows::Forms::PictureBox());
			this->s25 = (gcnew System::Windows::Forms::PictureBox());
			this->s17 = (gcnew System::Windows::Forms::PictureBox());
			this->s9 = (gcnew System::Windows::Forms::PictureBox());
			this->s1 = (gcnew System::Windows::Forms::PictureBox());
			this->s34 = (gcnew System::Windows::Forms::PictureBox());
			this->s26 = (gcnew System::Windows::Forms::PictureBox());
			this->s18 = (gcnew System::Windows::Forms::PictureBox());
			this->s10 = (gcnew System::Windows::Forms::PictureBox());
			this->s2 = (gcnew System::Windows::Forms::PictureBox());
			this->s35 = (gcnew System::Windows::Forms::PictureBox());
			this->s27 = (gcnew System::Windows::Forms::PictureBox());
			this->s19 = (gcnew System::Windows::Forms::PictureBox());
			this->s11 = (gcnew System::Windows::Forms::PictureBox());
			this->s3 = (gcnew System::Windows::Forms::PictureBox());
			this->s36 = (gcnew System::Windows::Forms::PictureBox());
			this->s28 = (gcnew System::Windows::Forms::PictureBox());
			this->s20 = (gcnew System::Windows::Forms::PictureBox());
			this->s12 = (gcnew System::Windows::Forms::PictureBox());
			this->s4 = (gcnew System::Windows::Forms::PictureBox());
			this->s37 = (gcnew System::Windows::Forms::PictureBox());
			this->s29 = (gcnew System::Windows::Forms::PictureBox());
			this->s21 = (gcnew System::Windows::Forms::PictureBox());
			this->s13 = (gcnew System::Windows::Forms::PictureBox());
			this->s5 = (gcnew System::Windows::Forms::PictureBox());
			this->s38 = (gcnew System::Windows::Forms::PictureBox());
			this->s30 = (gcnew System::Windows::Forms::PictureBox());
			this->s22 = (gcnew System::Windows::Forms::PictureBox());
			this->s14 = (gcnew System::Windows::Forms::PictureBox());
			this->s6 = (gcnew System::Windows::Forms::PictureBox());
			this->s39 = (gcnew System::Windows::Forms::PictureBox());
			this->s31 = (gcnew System::Windows::Forms::PictureBox());
			this->s23 = (gcnew System::Windows::Forms::PictureBox());
			this->s15 = (gcnew System::Windows::Forms::PictureBox());
			this->s7 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->s0))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->s8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->s16))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->s24))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->s32))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->s33))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->s25))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->s17))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->s9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->s1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->s34))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->s26))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->s18))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->s10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->s2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->s35))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->s27))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->s19))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->s11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->s3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->s36))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->s28))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->s20))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->s12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->s4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->s37))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->s29))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->s21))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->s13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->s5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->s38))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->s30))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->s22))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->s14))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->s6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->s39))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->s31))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->s23))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->s15))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->s7))->BeginInit();
			this->SuspendLayout();
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button7.Image")));
			this->button7->Location = System::Drawing::Point(1359, 5);
			this->button7->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 75);
			this->button7->TabIndex = 17;
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Sounds::Button7_Click);
			// 
			// s0
			// 
			this->s0->Location = System::Drawing::Point(9, 84);
			this->s0->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->s0->Name = L"s0";
			this->s0->Size = System::Drawing::Size(164, 127);
			this->s0->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->s0->TabIndex = 18;
			this->s0->TabStop = false;
			this->s0->Click += gcnew System::EventHandler(this, &Sounds::S0_Click);
			// 
			// s8
			// 
			this->s8->Location = System::Drawing::Point(9, 229);
			this->s8->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->s8->Name = L"s8";
			this->s8->Size = System::Drawing::Size(164, 127);
			this->s8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->s8->TabIndex = 19;
			this->s8->TabStop = false;
			this->s8->Click += gcnew System::EventHandler(this, &Sounds::S8_Click);
			// 
			// s16
			// 
			this->s16->Location = System::Drawing::Point(9, 374);
			this->s16->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->s16->Name = L"s16";
			this->s16->Size = System::Drawing::Size(164, 127);
			this->s16->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->s16->TabIndex = 20;
			this->s16->TabStop = false;
			this->s16->Click += gcnew System::EventHandler(this, &Sounds::S16_Click);
			// 
			// s24
			// 
			this->s24->Location = System::Drawing::Point(9, 518);
			this->s24->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->s24->Name = L"s24";
			this->s24->Size = System::Drawing::Size(164, 127);
			this->s24->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->s24->TabIndex = 21;
			this->s24->TabStop = false;
			this->s24->Click += gcnew System::EventHandler(this, &Sounds::S24_Click);
			// 
			// s32
			// 
			this->s32->Location = System::Drawing::Point(9, 661);
			this->s32->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->s32->Name = L"s32";
			this->s32->Size = System::Drawing::Size(164, 127);
			this->s32->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->s32->TabIndex = 22;
			this->s32->TabStop = false;
			this->s32->Click += gcnew System::EventHandler(this, &Sounds::S32_Click);
			// 
			// s33
			// 
			this->s33->Location = System::Drawing::Point(190, 661);
			this->s33->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->s33->Name = L"s33";
			this->s33->Size = System::Drawing::Size(164, 127);
			this->s33->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->s33->TabIndex = 27;
			this->s33->TabStop = false;
			this->s33->Click += gcnew System::EventHandler(this, &Sounds::S33_Click);
			// 
			// s25
			// 
			this->s25->Location = System::Drawing::Point(190, 518);
			this->s25->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->s25->Name = L"s25";
			this->s25->Size = System::Drawing::Size(164, 127);
			this->s25->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->s25->TabIndex = 26;
			this->s25->TabStop = false;
			this->s25->Click += gcnew System::EventHandler(this, &Sounds::S25_Click);
			// 
			// s17
			// 
			this->s17->Location = System::Drawing::Point(190, 374);
			this->s17->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->s17->Name = L"s17";
			this->s17->Size = System::Drawing::Size(164, 127);
			this->s17->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->s17->TabIndex = 25;
			this->s17->TabStop = false;
			this->s17->Click += gcnew System::EventHandler(this, &Sounds::S17_Click);
			// 
			// s9
			// 
			this->s9->Location = System::Drawing::Point(190, 229);
			this->s9->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->s9->Name = L"s9";
			this->s9->Size = System::Drawing::Size(164, 127);
			this->s9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->s9->TabIndex = 24;
			this->s9->TabStop = false;
			this->s9->Click += gcnew System::EventHandler(this, &Sounds::S9_Click);
			// 
			// s1
			// 
			this->s1->Location = System::Drawing::Point(190, 84);
			this->s1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->s1->Name = L"s1";
			this->s1->Size = System::Drawing::Size(164, 127);
			this->s1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->s1->TabIndex = 23;
			this->s1->TabStop = false;
			this->s1->Click += gcnew System::EventHandler(this, &Sounds::S1_Click);
			// 
			// s34
			// 
			this->s34->Location = System::Drawing::Point(371, 661);
			this->s34->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->s34->Name = L"s34";
			this->s34->Size = System::Drawing::Size(164, 127);
			this->s34->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->s34->TabIndex = 32;
			this->s34->TabStop = false;
			this->s34->Click += gcnew System::EventHandler(this, &Sounds::S34_Click);
			// 
			// s26
			// 
			this->s26->Location = System::Drawing::Point(371, 518);
			this->s26->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->s26->Name = L"s26";
			this->s26->Size = System::Drawing::Size(164, 127);
			this->s26->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->s26->TabIndex = 31;
			this->s26->TabStop = false;
			this->s26->Click += gcnew System::EventHandler(this, &Sounds::S26_Click);
			// 
			// s18
			// 
			this->s18->Location = System::Drawing::Point(371, 374);
			this->s18->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->s18->Name = L"s18";
			this->s18->Size = System::Drawing::Size(164, 127);
			this->s18->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->s18->TabIndex = 30;
			this->s18->TabStop = false;
			this->s18->Click += gcnew System::EventHandler(this, &Sounds::S18_Click);
			// 
			// s10
			// 
			this->s10->Location = System::Drawing::Point(371, 229);
			this->s10->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->s10->Name = L"s10";
			this->s10->Size = System::Drawing::Size(164, 127);
			this->s10->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->s10->TabIndex = 29;
			this->s10->TabStop = false;
			this->s10->Click += gcnew System::EventHandler(this, &Sounds::S10_Click);
			// 
			// s2
			// 
			this->s2->Location = System::Drawing::Point(371, 84);
			this->s2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->s2->Name = L"s2";
			this->s2->Size = System::Drawing::Size(164, 127);
			this->s2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->s2->TabIndex = 28;
			this->s2->TabStop = false;
			this->s2->Click += gcnew System::EventHandler(this, &Sounds::S2_Click);
			// 
			// s35
			// 
			this->s35->Location = System::Drawing::Point(551, 661);
			this->s35->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->s35->Name = L"s35";
			this->s35->Size = System::Drawing::Size(164, 127);
			this->s35->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->s35->TabIndex = 37;
			this->s35->TabStop = false;
			this->s35->Click += gcnew System::EventHandler(this, &Sounds::S35_Click);
			// 
			// s27
			// 
			this->s27->Location = System::Drawing::Point(551, 518);
			this->s27->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->s27->Name = L"s27";
			this->s27->Size = System::Drawing::Size(164, 127);
			this->s27->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->s27->TabIndex = 36;
			this->s27->TabStop = false;
			this->s27->Click += gcnew System::EventHandler(this, &Sounds::S27_Click);
			// 
			// s19
			// 
			this->s19->Location = System::Drawing::Point(551, 374);
			this->s19->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->s19->Name = L"s19";
			this->s19->Size = System::Drawing::Size(164, 127);
			this->s19->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->s19->TabIndex = 35;
			this->s19->TabStop = false;
			this->s19->Click += gcnew System::EventHandler(this, &Sounds::S19_Click);
			// 
			// s11
			// 
			this->s11->Location = System::Drawing::Point(551, 229);
			this->s11->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->s11->Name = L"s11";
			this->s11->Size = System::Drawing::Size(164, 127);
			this->s11->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->s11->TabIndex = 34;
			this->s11->TabStop = false;
			this->s11->Click += gcnew System::EventHandler(this, &Sounds::S11_Click);
			// 
			// s3
			// 
			this->s3->Location = System::Drawing::Point(551, 84);
			this->s3->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->s3->Name = L"s3";
			this->s3->Size = System::Drawing::Size(164, 127);
			this->s3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->s3->TabIndex = 33;
			this->s3->TabStop = false;
			this->s3->Click += gcnew System::EventHandler(this, &Sounds::S3_Click);
			// 
			// s36
			// 
			this->s36->Location = System::Drawing::Point(732, 661);
			this->s36->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->s36->Name = L"s36";
			this->s36->Size = System::Drawing::Size(164, 127);
			this->s36->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->s36->TabIndex = 42;
			this->s36->TabStop = false;
			this->s36->Click += gcnew System::EventHandler(this, &Sounds::S36_Click);
			// 
			// s28
			// 
			this->s28->Location = System::Drawing::Point(732, 518);
			this->s28->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->s28->Name = L"s28";
			this->s28->Size = System::Drawing::Size(164, 127);
			this->s28->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->s28->TabIndex = 41;
			this->s28->TabStop = false;
			this->s28->Click += gcnew System::EventHandler(this, &Sounds::S28_Click);
			// 
			// s20
			// 
			this->s20->Location = System::Drawing::Point(732, 374);
			this->s20->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->s20->Name = L"s20";
			this->s20->Size = System::Drawing::Size(164, 127);
			this->s20->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->s20->TabIndex = 40;
			this->s20->TabStop = false;
			this->s20->Click += gcnew System::EventHandler(this, &Sounds::S20_Click);
			// 
			// s12
			// 
			this->s12->Location = System::Drawing::Point(732, 229);
			this->s12->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->s12->Name = L"s12";
			this->s12->Size = System::Drawing::Size(164, 127);
			this->s12->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->s12->TabIndex = 39;
			this->s12->TabStop = false;
			this->s12->Click += gcnew System::EventHandler(this, &Sounds::S12_Click);
			// 
			// s4
			// 
			this->s4->Location = System::Drawing::Point(732, 84);
			this->s4->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->s4->Name = L"s4";
			this->s4->Size = System::Drawing::Size(164, 127);
			this->s4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->s4->TabIndex = 38;
			this->s4->TabStop = false;
			this->s4->Click += gcnew System::EventHandler(this, &Sounds::S4_Click);
			// 
			// s37
			// 
			this->s37->Location = System::Drawing::Point(910, 661);
			this->s37->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->s37->Name = L"s37";
			this->s37->Size = System::Drawing::Size(164, 127);
			this->s37->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->s37->TabIndex = 47;
			this->s37->TabStop = false;
			this->s37->Click += gcnew System::EventHandler(this, &Sounds::S37_Click);
			// 
			// s29
			// 
			this->s29->Location = System::Drawing::Point(910, 518);
			this->s29->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->s29->Name = L"s29";
			this->s29->Size = System::Drawing::Size(164, 127);
			this->s29->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->s29->TabIndex = 46;
			this->s29->TabStop = false;
			this->s29->Click += gcnew System::EventHandler(this, &Sounds::S29_Click);
			// 
			// s21
			// 
			this->s21->Location = System::Drawing::Point(910, 374);
			this->s21->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->s21->Name = L"s21";
			this->s21->Size = System::Drawing::Size(164, 127);
			this->s21->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->s21->TabIndex = 45;
			this->s21->TabStop = false;
			this->s21->Click += gcnew System::EventHandler(this, &Sounds::S21_Click);
			// 
			// s13
			// 
			this->s13->Location = System::Drawing::Point(910, 229);
			this->s13->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->s13->Name = L"s13";
			this->s13->Size = System::Drawing::Size(164, 127);
			this->s13->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->s13->TabIndex = 44;
			this->s13->TabStop = false;
			this->s13->Click += gcnew System::EventHandler(this, &Sounds::S13_Click);
			// 
			// s5
			// 
			this->s5->Location = System::Drawing::Point(910, 84);
			this->s5->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->s5->Name = L"s5";
			this->s5->Size = System::Drawing::Size(164, 127);
			this->s5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->s5->TabIndex = 43;
			this->s5->TabStop = false;
			this->s5->Click += gcnew System::EventHandler(this, &Sounds::S5_Click);
			// 
			// s38
			// 
			this->s38->Location = System::Drawing::Point(1088, 661);
			this->s38->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->s38->Name = L"s38";
			this->s38->Size = System::Drawing::Size(164, 127);
			this->s38->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->s38->TabIndex = 52;
			this->s38->TabStop = false;
			this->s38->Click += gcnew System::EventHandler(this, &Sounds::S38_Click);
			// 
			// s30
			// 
			this->s30->Location = System::Drawing::Point(1088, 518);
			this->s30->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->s30->Name = L"s30";
			this->s30->Size = System::Drawing::Size(164, 127);
			this->s30->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->s30->TabIndex = 51;
			this->s30->TabStop = false;
			this->s30->Click += gcnew System::EventHandler(this, &Sounds::S30_Click);
			// 
			// s22
			// 
			this->s22->Location = System::Drawing::Point(1088, 374);
			this->s22->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->s22->Name = L"s22";
			this->s22->Size = System::Drawing::Size(164, 127);
			this->s22->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->s22->TabIndex = 50;
			this->s22->TabStop = false;
			this->s22->Click += gcnew System::EventHandler(this, &Sounds::S22_Click);
			// 
			// s14
			// 
			this->s14->Location = System::Drawing::Point(1088, 229);
			this->s14->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->s14->Name = L"s14";
			this->s14->Size = System::Drawing::Size(164, 127);
			this->s14->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->s14->TabIndex = 49;
			this->s14->TabStop = false;
			this->s14->Click += gcnew System::EventHandler(this, &Sounds::S14_Click);
			// 
			// s6
			// 
			this->s6->Location = System::Drawing::Point(1088, 84);
			this->s6->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->s6->Name = L"s6";
			this->s6->Size = System::Drawing::Size(164, 127);
			this->s6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->s6->TabIndex = 48;
			this->s6->TabStop = false;
			this->s6->Click += gcnew System::EventHandler(this, &Sounds::S6_Click);
			// 
			// s39
			// 
			this->s39->Location = System::Drawing::Point(1270, 661);
			this->s39->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->s39->Name = L"s39";
			this->s39->Size = System::Drawing::Size(164, 127);
			this->s39->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->s39->TabIndex = 57;
			this->s39->TabStop = false;
			this->s39->Click += gcnew System::EventHandler(this, &Sounds::S39_Click);
			// 
			// s31
			// 
			this->s31->Location = System::Drawing::Point(1270, 518);
			this->s31->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->s31->Name = L"s31";
			this->s31->Size = System::Drawing::Size(164, 127);
			this->s31->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->s31->TabIndex = 56;
			this->s31->TabStop = false;
			this->s31->Click += gcnew System::EventHandler(this, &Sounds::S31_Click);
			// 
			// s23
			// 
			this->s23->Location = System::Drawing::Point(1270, 374);
			this->s23->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->s23->Name = L"s23";
			this->s23->Size = System::Drawing::Size(164, 127);
			this->s23->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->s23->TabIndex = 55;
			this->s23->TabStop = false;
			this->s23->Click += gcnew System::EventHandler(this, &Sounds::S23_Click);
			// 
			// s15
			// 
			this->s15->Location = System::Drawing::Point(1270, 229);
			this->s15->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->s15->Name = L"s15";
			this->s15->Size = System::Drawing::Size(164, 127);
			this->s15->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->s15->TabIndex = 54;
			this->s15->TabStop = false;
			this->s15->Click += gcnew System::EventHandler(this, &Sounds::S15_Click);
			// 
			// s7
			// 
			this->s7->Location = System::Drawing::Point(1270, 84);
			this->s7->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->s7->Name = L"s7";
			this->s7->Size = System::Drawing::Size(164, 127);
			this->s7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->s7->TabIndex = 53;
			this->s7->TabStop = false;
			this->s7->Click += gcnew System::EventHandler(this, &Sounds::S7_Click);
			// 
			// Sounds
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1443, 804);
			this->Controls->Add(this->s39);
			this->Controls->Add(this->s31);
			this->Controls->Add(this->s23);
			this->Controls->Add(this->s15);
			this->Controls->Add(this->s7);
			this->Controls->Add(this->s38);
			this->Controls->Add(this->s30);
			this->Controls->Add(this->s22);
			this->Controls->Add(this->s14);
			this->Controls->Add(this->s6);
			this->Controls->Add(this->s37);
			this->Controls->Add(this->s29);
			this->Controls->Add(this->s21);
			this->Controls->Add(this->s13);
			this->Controls->Add(this->s5);
			this->Controls->Add(this->s36);
			this->Controls->Add(this->s28);
			this->Controls->Add(this->s20);
			this->Controls->Add(this->s12);
			this->Controls->Add(this->s4);
			this->Controls->Add(this->s35);
			this->Controls->Add(this->s27);
			this->Controls->Add(this->s19);
			this->Controls->Add(this->s11);
			this->Controls->Add(this->s3);
			this->Controls->Add(this->s34);
			this->Controls->Add(this->s26);
			this->Controls->Add(this->s18);
			this->Controls->Add(this->s10);
			this->Controls->Add(this->s2);
			this->Controls->Add(this->s33);
			this->Controls->Add(this->s25);
			this->Controls->Add(this->s17);
			this->Controls->Add(this->s9);
			this->Controls->Add(this->s1);
			this->Controls->Add(this->s32);
			this->Controls->Add(this->s24);
			this->Controls->Add(this->s16);
			this->Controls->Add(this->s8);
			this->Controls->Add(this->s0);
			this->Controls->Add(this->button7);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"Sounds";
			this->Text = L"Sounds";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Sounds::Sounds_FormClosing);
			this->Load += gcnew System::EventHandler(this, &Sounds::Sounds_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->s0))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->s8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->s16))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->s24))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->s32))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->s33))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->s25))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->s17))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->s9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->s1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->s34))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->s26))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->s18))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->s10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->s2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->s35))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->s27))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->s19))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->s11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->s3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->s36))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->s28))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->s20))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->s12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->s4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->s37))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->s29))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->s21))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->s13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->s5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->s38))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->s30))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->s22))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->s14))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->s6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->s39))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->s31))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->s23))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->s15))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->s7))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
void View()
{
	s0->Image = Data->Pict(0);
	s1->Image = Data->Pict(1);
	s2->Image = Data->Pict(2);
	s3->Image = Data->Pict(3);
	s4->Image = Data->Pict(4);
	s5->Image = Data->Pict(5);
	s6->Image = Data->Pict(6);
	s7->Image = Data->Pict(7);
	s8->Image = Data->Pict(8);
	s9->Image = Data->Pict(9);
	s10->Image = Data->Pict(10);
	s11->Image = Data->Pict(11);
	s12->Image = Data->Pict(12);
	s13->Image = Data->Pict(13);
	s14->Image = Data->Pict(14);
	s15->Image = Data->Pict(15);
	s16->Image = Data->Pict(16);
	s17->Image = Data->Pict(17);
	s18->Image = Data->Pict(18);
	s19->Image = Data->Pict(19);
	s20->Image = Data->Pict(20);
	s21->Image = Data->Pict(21);
	s22->Image = Data->Pict(22);
	s23->Image = Data->Pict(23);
	s24->Image = Data->Pict(24);
	s25->Image = Data->Pict(25);
	s26->Image = Data->Pict(26);
	s27->Image = Data->Pict(27);
	s28->Image = Data->Pict(28);
	s29->Image = Data->Pict(29);
	s30->Image = Data->Pict(30);
	s31->Image = Data->Pict(31);
	s32->Image = Data->Pict(32);
	s33->Image = Data->Pict(33);
	s34->Image = Data->Pict(34);
	s35->Image = Data->Pict(35);
	s36->Image = Data->Pict(36);
	s37->Image = Data->Pict(37);
	s38->Image = Data->Pict(38);
	s39->Image = Data->Pict(39);
}
private: System::Void Button7_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void Sounds_Load(System::Object^ sender, System::EventArgs^ e) {
	Data->Fill(40, "Animals");
	View();
}
private: System::Void S0_Click(System::Object^ sender, System::EventArgs^ e) {
	Data->Play(0);
}
private: System::Void S1_Click(System::Object^ sender, System::EventArgs^ e) {
	Data->Play(1);
}
private: System::Void S2_Click(System::Object^ sender, System::EventArgs^ e) {
	Data->Play(2);
}
private: System::Void S3_Click(System::Object^ sender, System::EventArgs^ e) {
	Data->Play(3);
}
private: System::Void S4_Click(System::Object^ sender, System::EventArgs^ e) {
	Data->Play(4);
}
private: System::Void S5_Click(System::Object^ sender, System::EventArgs^ e) {
	Data->Play(5);
}
private: System::Void S6_Click(System::Object^ sender, System::EventArgs^ e) {
	Data->Play(6);
}
private: System::Void S7_Click(System::Object^ sender, System::EventArgs^ e) {
	Data->Play(7);
}
private: System::Void S8_Click(System::Object^ sender, System::EventArgs^ e) {
	Data->Play(8);
}
private: System::Void S9_Click(System::Object^ sender, System::EventArgs^ e) {
	Data->Play(9);
}
private: System::Void S10_Click(System::Object^ sender, System::EventArgs^ e) {
	Data->Play(10);
}
private: System::Void S11_Click(System::Object^ sender, System::EventArgs^ e) {
	Data->Play(11);
}
private: System::Void S12_Click(System::Object^ sender, System::EventArgs^ e) {
	Data->Play(12);
}
private: System::Void S13_Click(System::Object^ sender, System::EventArgs^ e) {
	Data->Play(13);
}
private: System::Void S14_Click(System::Object^ sender, System::EventArgs^ e) {
	Data->Play(14);
}
private: System::Void S15_Click(System::Object^ sender, System::EventArgs^ e) {
	Data->Play(15);
}
private: System::Void S16_Click(System::Object^ sender, System::EventArgs^ e) {
	Data->Play(16);
}
private: System::Void S17_Click(System::Object^ sender, System::EventArgs^ e) {
	Data->Play(17);
}
private: System::Void S18_Click(System::Object^ sender, System::EventArgs^ e) {
	Data->Play(18);
}
private: System::Void S19_Click(System::Object^ sender, System::EventArgs^ e) {
	Data->Play(19);
}
private: System::Void S20_Click(System::Object^ sender, System::EventArgs^ e) {
	Data->Play(20);
}
private: System::Void S21_Click(System::Object^ sender, System::EventArgs^ e) {
	Data->Play(21);
}
private: System::Void S22_Click(System::Object^ sender, System::EventArgs^ e) {
	Data->Play(22);
}
private: System::Void S23_Click(System::Object^ sender, System::EventArgs^ e) {
	Data->Play(23);
}
private: System::Void S24_Click(System::Object^ sender, System::EventArgs^ e) {
	Data->Play(24);
}
private: System::Void S25_Click(System::Object^ sender, System::EventArgs^ e) {
	Data->Play(25);
}
private: System::Void S26_Click(System::Object^ sender, System::EventArgs^ e) {
	Data->Play(26);
}
private: System::Void S27_Click(System::Object^ sender, System::EventArgs^ e) {
	Data->Play(27);
}
private: System::Void S28_Click(System::Object^ sender, System::EventArgs^ e) {
	Data->Play(28);
}
private: System::Void S29_Click(System::Object^ sender, System::EventArgs^ e) {
	Data->Play(29);
}
private: System::Void S30_Click(System::Object^ sender, System::EventArgs^ e) {
	Data->Play(30);
}
private: System::Void S31_Click(System::Object^ sender, System::EventArgs^ e) {
	Data->Play(31);
}
private: System::Void S32_Click(System::Object^ sender, System::EventArgs^ e) {
	Data->Play(32);
}
private: System::Void S33_Click(System::Object^ sender, System::EventArgs^ e) {
	Data->Play(33);
}
private: System::Void S34_Click(System::Object^ sender, System::EventArgs^ e) {
	Data->Play(34);
}
private: System::Void S35_Click(System::Object^ sender, System::EventArgs^ e) {
	Data->Play(35);
}
private: System::Void S36_Click(System::Object^ sender, System::EventArgs^ e) {
	Data->Play(36);
}
private: System::Void S37_Click(System::Object^ sender, System::EventArgs^ e) {
	Data->Play(37);
}
private: System::Void S38_Click(System::Object^ sender, System::EventArgs^ e) {
	Data->Play(38);
}
private: System::Void S39_Click(System::Object^ sender, System::EventArgs^ e) {
	Data->Play(39);
}
private: System::Void Sounds_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
}
};
}
