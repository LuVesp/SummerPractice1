#pragma once
#include "Dictionary.h"

namespace LittleTextEditor {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Сводка для EditorWindow
	/// </summary>
	public ref class EditorWindow : public System::Windows::Forms::Form
	{
		String^ File_name;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator2;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton2;
	private: System::Windows::Forms::ToolStripMenuItem^ найтиВСловареToolStripMenuItem;
		   Dictionary^ dictionary;
		   System::Windows::Forms::Form^ Frm;
	public:
		EditorWindow(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
			File_name = gcnew String("Noname.rtf");
			dictionary = gcnew Dictionary;
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~EditorWindow()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menu;
	private: System::Windows::Forms::ToolStripMenuItem^ fileItem;
	private: System::Windows::Forms::ToolStripMenuItem^ createItem;
	private: System::Windows::Forms::ToolStripMenuItem^ openItem;
	protected:



	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator;
	private: System::Windows::Forms::ToolStripMenuItem^ saveItem;
	private: System::Windows::Forms::ToolStripMenuItem^ saveAsItem;


	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator1;




	private: System::Windows::Forms::ToolStripMenuItem^ выходToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ editItem;

	private: System::Windows::Forms::ToolStripMenuItem^ отменадействияToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ отменадействияToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator3;
	private: System::Windows::Forms::ToolStripMenuItem^ cutItem;
	private: System::Windows::Forms::ToolStripMenuItem^ copyItem;
	private: System::Windows::Forms::ToolStripMenuItem^ pasteItem;



	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator4;
	private: System::Windows::Forms::ToolStripMenuItem^ selectAllItem;










	private: System::Windows::Forms::ToolStripMenuItem^ exitItem;

	private: System::Windows::Forms::ToolStrip^ tools;
	private: System::Windows::Forms::ToolStripButton^ createButton;
	private: System::Windows::Forms::ToolStripButton^ openButton;
	private: System::Windows::Forms::ToolStripButton^ saveButton;







	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator6;
	private: System::Windows::Forms::ToolStripButton^ cutButton;
	private: System::Windows::Forms::ToolStripButton^ copyButton;
	private: System::Windows::Forms::ToolStripButton^ pasteButton;



	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator7;

	private: System::Windows::Forms::RichTextBox^ richTextBox1;

	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ cutItem2;
	private: System::Windows::Forms::ToolStripMenuItem^ copyItem2;
	private: System::Windows::Forms::ToolStripMenuItem^ pasteItem2;
	private: System::Windows::Forms::ToolStripMenuItem^ selectAllItem2;
	private: System::Windows::Forms::ToolStripButton^ baseColor;

	private: System::Windows::Forms::ToolStripButton^ textColor;
	private: System::Windows::Forms::ToolStripButton^ fontButton;
	private: System::Windows::Forms::ToolStripMenuItem^ formatItem;

	private: System::Windows::Forms::ToolStripMenuItem^ fontItem;

	private: System::Windows::Forms::ToolStripMenuItem^ textColorItem;
	private: System::Windows::Forms::ToolStripMenuItem^ baseColorItem;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator5;
	private: System::Windows::Forms::ToolStripButton^ boldStyle;
	private: System::Windows::Forms::ToolStripButton^ italicStyle;
	private: System::Windows::Forms::ToolStripButton^ underlineStyle;



	private: System::Windows::Forms::StatusStrip^ statusStrip1;
	private: System::Windows::Forms::ToolStripStatusLabel^ nameStatus;
	private: System::Windows::Forms::ToolStripStatusLabel^ dataStatus;


	private: System::Windows::Forms::FontDialog^ fontDialog;

	private:

	private: System::Windows::Forms::ColorDialog^ colorDialog;
	private: System::Windows::Forms::OpenFileDialog^ openFD;
	private: System::Windows::Forms::SaveFileDialog^ saveFD;
	private: System::Windows::Forms::ImageList^ imageList1;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator8;

	private: System::Windows::Forms::ToolStripStatusLabel^ simbolStatus;
	private: System::Windows::Forms::ToolStripStatusLabel^ wordsStatus;
	private: System::Windows::Forms::ToolStripStatusLabel^ carriageStatus;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton1;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator10;
	private: System::Windows::Forms::ToolStripButton^ centralAlig;
	private: System::Windows::Forms::ToolStripButton^ rightAlig;
	private: System::Windows::Forms::ToolStripButton^ leftAlig;



	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator9;
	private: System::Windows::Forms::ToolStripTextBox^ findText;

	private: System::Windows::Forms::ToolStripButton^ findButton;
	private: System::Windows::Forms::ToolStripButton^ backButton;
	private: System::Windows::Forms::ToolStripButton^ forwardButton;


	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator11;


	private: System::Windows::Forms::PrintDialog^ printDialog;
	private: System::Drawing::Printing::PrintDocument^ printDocument;

	




	private: System::ComponentModel::IContainer^ components;



	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(EditorWindow::typeid));
			this->menu = (gcnew System::Windows::Forms::MenuStrip());
			this->fileItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->createItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->saveItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveAsItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->выходToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->editItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->отменадействияToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->отменадействияToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator3 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->cutItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->copyItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pasteItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator4 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->selectAllItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->formatItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->fontItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->textColorItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->baseColorItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tools = (gcnew System::Windows::Forms::ToolStrip());
			this->createButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->openButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->saveButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator6 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->copyButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->cutButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->pasteButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator7 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->baseColor = (gcnew System::Windows::Forms::ToolStripButton());
			this->textColor = (gcnew System::Windows::Forms::ToolStripButton());
			this->fontButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator5 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->boldStyle = (gcnew System::Windows::Forms::ToolStripButton());
			this->italicStyle = (gcnew System::Windows::Forms::ToolStripButton());
			this->underlineStyle = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator8 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->toolStripButton1 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator10 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->rightAlig = (gcnew System::Windows::Forms::ToolStripButton());
			this->centralAlig = (gcnew System::Windows::Forms::ToolStripButton());
			this->leftAlig = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator9 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->backButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->forwardButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator11 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->findText = (gcnew System::Windows::Forms::ToolStripTextBox());
			this->findButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator2 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->toolStripButton2 = (gcnew System::Windows::Forms::ToolStripButton());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->cutItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->copyItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pasteItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->selectAllItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->nameStatus = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->simbolStatus = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->wordsStatus = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->carriageStatus = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->dataStatus = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->fontDialog = (gcnew System::Windows::Forms::FontDialog());
			this->colorDialog = (gcnew System::Windows::Forms::ColorDialog());
			this->openFD = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFD = (gcnew System::Windows::Forms::SaveFileDialog());
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->printDialog = (gcnew System::Windows::Forms::PrintDialog());
			this->printDocument = (gcnew System::Drawing::Printing::PrintDocument());
			this->найтиВСловареToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menu->SuspendLayout();
			this->tools->SuspendLayout();
			this->contextMenuStrip1->SuspendLayout();
			this->statusStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menu
			// 
			this->menu->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menu->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->fileItem, this->editItem,
					this->formatItem, this->exitItem
			});
			this->menu->Location = System::Drawing::Point(0, 0);
			this->menu->Name = L"menu";
			this->menu->Size = System::Drawing::Size(881, 28);
			this->menu->TabIndex = 0;
			this->menu->Text = L"menu";
			// 
			// fileItem
			// 
			this->fileItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(7) {
				this->createItem,
					this->openItem, this->toolStripSeparator, this->saveItem, this->saveAsItem, this->toolStripSeparator1, this->выходToolStripMenuItem
			});
			this->fileItem->Name = L"fileItem";
			this->fileItem->Size = System::Drawing::Size(59, 24);
			this->fileItem->Text = L"&Файл";
			// 
			// createItem
			// 
			this->createItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"createItem.Image")));
			this->createItem->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->createItem->Name = L"createItem";
			this->createItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::N));
			this->createItem->Size = System::Drawing::Size(216, 26);
			this->createItem->Text = L"&Создать";
			this->createItem->Click += gcnew System::EventHandler(this, &EditorWindow::createItem_Click);
			// 
			// openItem
			// 
			this->openItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"openItem.Image")));
			this->openItem->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->openItem->Name = L"openItem";
			this->openItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::O));
			this->openItem->Size = System::Drawing::Size(216, 26);
			this->openItem->Text = L"&Открыть";
			this->openItem->Click += gcnew System::EventHandler(this, &EditorWindow::openItem_Click);
			// 
			// toolStripSeparator
			// 
			this->toolStripSeparator->Name = L"toolStripSeparator";
			this->toolStripSeparator->Size = System::Drawing::Size(213, 6);
			// 
			// saveItem
			// 
			this->saveItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"saveItem.Image")));
			this->saveItem->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->saveItem->Name = L"saveItem";
			this->saveItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::S));
			this->saveItem->Size = System::Drawing::Size(216, 26);
			this->saveItem->Text = L"&Сохранить";
			this->saveItem->Click += gcnew System::EventHandler(this, &EditorWindow::saveItem_Click);
			// 
			// saveAsItem
			// 
			this->saveAsItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"saveAsItem.Image")));
			this->saveAsItem->Name = L"saveAsItem";
			this->saveAsItem->Size = System::Drawing::Size(216, 26);
			this->saveAsItem->Text = L"Сохранить &как";
			this->saveAsItem->Click += gcnew System::EventHandler(this, &EditorWindow::saveAsItem_Click);
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(213, 6);
			// 
			// выходToolStripMenuItem
			// 
			this->выходToolStripMenuItem->Name = L"выходToolStripMenuItem";
			this->выходToolStripMenuItem->Size = System::Drawing::Size(216, 26);
			this->выходToolStripMenuItem->Text = L"Вы&ход";
			this->выходToolStripMenuItem->Click += gcnew System::EventHandler(this, &EditorWindow::выходToolStripMenuItem_Click);
			// 
			// editItem
			// 
			this->editItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(8) {
				this->отменадействияToolStripMenuItem,
					this->отменадействияToolStripMenuItem1, this->toolStripSeparator3, this->cutItem, this->copyItem, this->pasteItem, this->toolStripSeparator4,
					this->selectAllItem
			});
			this->editItem->Name = L"editItem";
			this->editItem->Size = System::Drawing::Size(74, 24);
			this->editItem->Text = L"&Правка";
			// 
			// отменадействияToolStripMenuItem
			// 
			this->отменадействияToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"отменадействияToolStripMenuItem.Image")));
			this->отменадействияToolStripMenuItem->Name = L"отменадействияToolStripMenuItem";
			this->отменадействияToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::Z));
			this->отменадействияToolStripMenuItem->Size = System::Drawing::Size(227, 26);
			this->отменадействияToolStripMenuItem->Text = L"&Шаг назад";
			this->отменадействияToolStripMenuItem->Click += gcnew System::EventHandler(this, &EditorWindow::отменадействияToolStripMenuItem_Click);
			// 
			// отменадействияToolStripMenuItem1
			// 
			this->отменадействияToolStripMenuItem1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"отменадействияToolStripMenuItem1.Image")));
			this->отменадействияToolStripMenuItem1->Name = L"отменадействияToolStripMenuItem1";
			this->отменадействияToolStripMenuItem1->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::Y));
			this->отменадействияToolStripMenuItem1->Size = System::Drawing::Size(227, 26);
			this->отменадействияToolStripMenuItem1->Text = L"&Шаг вперёд";
			this->отменадействияToolStripMenuItem1->Click += gcnew System::EventHandler(this, &EditorWindow::отменадействияToolStripMenuItem1_Click);
			// 
			// toolStripSeparator3
			// 
			this->toolStripSeparator3->Name = L"toolStripSeparator3";
			this->toolStripSeparator3->Size = System::Drawing::Size(224, 6);
			// 
			// cutItem
			// 
			this->cutItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"cutItem.Image")));
			this->cutItem->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->cutItem->Name = L"cutItem";
			this->cutItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::X));
			this->cutItem->Size = System::Drawing::Size(227, 26);
			this->cutItem->Text = L"Вырезат&ь";
			this->cutItem->Click += gcnew System::EventHandler(this, &EditorWindow::cutItem_Click);
			// 
			// copyItem
			// 
			this->copyItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"copyItem.Image")));
			this->copyItem->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->copyItem->Name = L"copyItem";
			this->copyItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::C));
			this->copyItem->Size = System::Drawing::Size(227, 26);
			this->copyItem->Text = L"&Копировать";
			this->copyItem->Click += gcnew System::EventHandler(this, &EditorWindow::copyItem_Click);
			// 
			// pasteItem
			// 
			this->pasteItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pasteItem.Image")));
			this->pasteItem->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->pasteItem->Name = L"pasteItem";
			this->pasteItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::V));
			this->pasteItem->Size = System::Drawing::Size(227, 26);
			this->pasteItem->Text = L"Вст&авка";
			this->pasteItem->Click += gcnew System::EventHandler(this, &EditorWindow::pasteItem_Click);
			// 
			// toolStripSeparator4
			// 
			this->toolStripSeparator4->Name = L"toolStripSeparator4";
			this->toolStripSeparator4->Size = System::Drawing::Size(224, 6);
			// 
			// selectAllItem
			// 
			this->selectAllItem->Name = L"selectAllItem";
			this->selectAllItem->Size = System::Drawing::Size(227, 26);
			this->selectAllItem->Text = L"Выделить &все";
			this->selectAllItem->Click += gcnew System::EventHandler(this, &EditorWindow::selectAllItem_Click);
			// 
			// formatItem
			// 
			this->formatItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->fontItem,
					this->textColorItem, this->baseColorItem
			});
			this->formatItem->Name = L"formatItem";
			this->formatItem->Size = System::Drawing::Size(77, 24);
			this->formatItem->Text = L"Фо&рмат";
			// 
			// fontItem
			// 
			this->fontItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"fontItem.Image")));
			this->fontItem->Name = L"fontItem";
			this->fontItem->Size = System::Drawing::Size(199, 26);
			this->fontItem->Text = L"Шрифт";
			this->fontItem->Click += gcnew System::EventHandler(this, &EditorWindow::fontItem_Click);
			// 
			// textColorItem
			// 
			this->textColorItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"textColorItem.Image")));
			this->textColorItem->Name = L"textColorItem";
			this->textColorItem->Size = System::Drawing::Size(199, 26);
			this->textColorItem->Text = L"Цвет текста";
			this->textColorItem->Click += gcnew System::EventHandler(this, &EditorWindow::textColorItem_Click);
			// 
			// baseColorItem
			// 
			this->baseColorItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"baseColorItem.Image")));
			this->baseColorItem->Name = L"baseColorItem";
			this->baseColorItem->Size = System::Drawing::Size(199, 26);
			this->baseColorItem->Text = L"Цвет подложки";
			this->baseColorItem->Click += gcnew System::EventHandler(this, &EditorWindow::baseColorItem_Click);
			// 
			// exitItem
			// 
			this->exitItem->Name = L"exitItem";
			this->exitItem->Size = System::Drawing::Size(67, 24);
			this->exitItem->Text = L"Вы&ход";
			this->exitItem->Click += gcnew System::EventHandler(this, &EditorWindow::exitItem_Click);
			// 
			// tools
			// 
			this->tools->ImageScalingSize = System::Drawing::Size(20, 20);
			this->tools->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(29) {
				this->createButton, this->openButton,
					this->saveButton, this->toolStripSeparator6, this->copyButton, this->cutButton, this->pasteButton, this->toolStripSeparator7,
					this->baseColor, this->textColor, this->fontButton, this->toolStripSeparator5, this->boldStyle, this->italicStyle, this->underlineStyle,
					this->toolStripSeparator8, this->toolStripButton1, this->toolStripSeparator10, this->rightAlig, this->centralAlig, this->leftAlig,
					this->toolStripSeparator9, this->backButton, this->forwardButton, this->toolStripSeparator11, this->findText, this->findButton,
					this->toolStripSeparator2, this->toolStripButton2
			});
			this->tools->Location = System::Drawing::Point(0, 28);
			this->tools->Name = L"tools";
			this->tools->Size = System::Drawing::Size(881, 27);
			this->tools->TabIndex = 1;
			this->tools->Text = L"tools";
			this->tools->ItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &EditorWindow::tools_ItemClicked);
			// 
			// createButton
			// 
			this->createButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->createButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"createButton.Image")));
			this->createButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->createButton->Name = L"createButton";
			this->createButton->Size = System::Drawing::Size(29, 24);
			this->createButton->Text = L"&Создать";
			// 
			// openButton
			// 
			this->openButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->openButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"openButton.Image")));
			this->openButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->openButton->Name = L"openButton";
			this->openButton->Size = System::Drawing::Size(29, 24);
			this->openButton->Text = L"&Открыть";
			// 
			// saveButton
			// 
			this->saveButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->saveButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"saveButton.Image")));
			this->saveButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->saveButton->Name = L"saveButton";
			this->saveButton->Size = System::Drawing::Size(29, 24);
			this->saveButton->Text = L"&Сохранить";
			// 
			// toolStripSeparator6
			// 
			this->toolStripSeparator6->Name = L"toolStripSeparator6";
			this->toolStripSeparator6->Size = System::Drawing::Size(6, 27);
			// 
			// copyButton
			// 
			this->copyButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->copyButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"copyButton.Image")));
			this->copyButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->copyButton->Name = L"copyButton";
			this->copyButton->Size = System::Drawing::Size(29, 24);
			this->copyButton->Text = L"&Копировать";
			// 
			// cutButton
			// 
			this->cutButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->cutButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"cutButton.Image")));
			this->cutButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->cutButton->Name = L"cutButton";
			this->cutButton->Size = System::Drawing::Size(29, 24);
			this->cutButton->Text = L"В&ырезать";
			// 
			// pasteButton
			// 
			this->pasteButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->pasteButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pasteButton.Image")));
			this->pasteButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->pasteButton->Name = L"pasteButton";
			this->pasteButton->Size = System::Drawing::Size(29, 24);
			this->pasteButton->Text = L"Вст&авка";
			// 
			// toolStripSeparator7
			// 
			this->toolStripSeparator7->Name = L"toolStripSeparator7";
			this->toolStripSeparator7->Size = System::Drawing::Size(6, 27);
			// 
			// baseColor
			// 
			this->baseColor->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->baseColor->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"baseColor.Image")));
			this->baseColor->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->baseColor->Name = L"baseColor";
			this->baseColor->Size = System::Drawing::Size(29, 24);
			this->baseColor->Text = L"Цвет подложки текста";
			// 
			// textColor
			// 
			this->textColor->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->textColor->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"textColor.Image")));
			this->textColor->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->textColor->Name = L"textColor";
			this->textColor->Size = System::Drawing::Size(29, 24);
			this->textColor->Text = L"Цвет &текста";
			// 
			// fontButton
			// 
			this->fontButton->BackColor = System::Drawing::SystemColors::Control;
			this->fontButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->fontButton->ForeColor = System::Drawing::SystemColors::WindowText;
			this->fontButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"fontButton.Image")));
			this->fontButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->fontButton->Name = L"fontButton";
			this->fontButton->Size = System::Drawing::Size(29, 24);
			this->fontButton->Text = L"Шрифт";
			// 
			// toolStripSeparator5
			// 
			this->toolStripSeparator5->Name = L"toolStripSeparator5";
			this->toolStripSeparator5->Size = System::Drawing::Size(6, 27);
			// 
			// boldStyle
			// 
			this->boldStyle->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->boldStyle->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"boldStyle.Image")));
			this->boldStyle->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->boldStyle->Name = L"boldStyle";
			this->boldStyle->Size = System::Drawing::Size(29, 24);
			this->boldStyle->Text = L"Полужирный";
			// 
			// italicStyle
			// 
			this->italicStyle->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->italicStyle->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"italicStyle.Image")));
			this->italicStyle->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->italicStyle->Name = L"italicStyle";
			this->italicStyle->Size = System::Drawing::Size(29, 24);
			this->italicStyle->Text = L"Курсив";
			// 
			// underlineStyle
			// 
			this->underlineStyle->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->underlineStyle->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"underlineStyle.Image")));
			this->underlineStyle->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->underlineStyle->Name = L"underlineStyle";
			this->underlineStyle->Size = System::Drawing::Size(29, 24);
			this->underlineStyle->Text = L"Подчёркнутый";
			// 
			// toolStripSeparator8
			// 
			this->toolStripSeparator8->Name = L"toolStripSeparator8";
			this->toolStripSeparator8->Size = System::Drawing::Size(6, 27);
			// 
			// toolStripButton1
			// 
			this->toolStripButton1->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton1.Image")));
			this->toolStripButton1->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton1->Name = L"toolStripButton1";
			this->toolStripButton1->Size = System::Drawing::Size(29, 24);
			this->toolStripButton1->Text = L"Маркированный список";
			// 
			// toolStripSeparator10
			// 
			this->toolStripSeparator10->Name = L"toolStripSeparator10";
			this->toolStripSeparator10->Size = System::Drawing::Size(6, 27);
			// 
			// rightAlig
			// 
			this->rightAlig->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->rightAlig->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"rightAlig.Image")));
			this->rightAlig->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->rightAlig->Name = L"rightAlig";
			this->rightAlig->Size = System::Drawing::Size(29, 24);
			this->rightAlig->Text = L"Выравнивание по правому краю";
			// 
			// centralAlig
			// 
			this->centralAlig->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->centralAlig->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"centralAlig.Image")));
			this->centralAlig->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->centralAlig->Name = L"centralAlig";
			this->centralAlig->Size = System::Drawing::Size(29, 24);
			this->centralAlig->Text = L"Выравнивание по центру";
			// 
			// leftAlig
			// 
			this->leftAlig->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->leftAlig->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"leftAlig.Image")));
			this->leftAlig->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->leftAlig->Name = L"leftAlig";
			this->leftAlig->Size = System::Drawing::Size(29, 24);
			this->leftAlig->Text = L"Выравнивание по левому краю";
			// 
			// toolStripSeparator9
			// 
			this->toolStripSeparator9->Name = L"toolStripSeparator9";
			this->toolStripSeparator9->Size = System::Drawing::Size(6, 27);
			// 
			// backButton
			// 
			this->backButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->backButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"backButton.Image")));
			this->backButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->backButton->Name = L"backButton";
			this->backButton->Size = System::Drawing::Size(29, 24);
			this->backButton->Text = L"Шаг назад";
			// 
			// forwardButton
			// 
			this->forwardButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->forwardButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"forwardButton.Image")));
			this->forwardButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->forwardButton->Name = L"forwardButton";
			this->forwardButton->Size = System::Drawing::Size(29, 24);
			this->forwardButton->Text = L"Шаг вперёд";
			// 
			// toolStripSeparator11
			// 
			this->toolStripSeparator11->Name = L"toolStripSeparator11";
			this->toolStripSeparator11->Size = System::Drawing::Size(6, 27);
			// 
			// findText
			// 
			this->findText->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->findText->Name = L"findText";
			this->findText->Size = System::Drawing::Size(100, 27);
			// 
			// findButton
			// 
			this->findButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->findButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"findButton.Image")));
			this->findButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->findButton->Name = L"findButton";
			this->findButton->Size = System::Drawing::Size(56, 24);
			this->findButton->Text = L"Найти";
			// 
			// toolStripSeparator2
			// 
			this->toolStripSeparator2->Name = L"toolStripSeparator2";
			this->toolStripSeparator2->Size = System::Drawing::Size(6, 27);
			// 
			// toolStripButton2
			// 
			this->toolStripButton2->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->toolStripButton2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton2.Image")));
			this->toolStripButton2->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton2->Name = L"toolStripButton2";
			this->toolStripButton2->Size = System::Drawing::Size(72, 24);
			this->toolStripButton2->Text = L"Словарь";
			// 
			// richTextBox1
			// 
			this->richTextBox1->AcceptsTab = true;
			this->richTextBox1->AutoWordSelection = true;
			this->richTextBox1->ContextMenuStrip = this->contextMenuStrip1;
			this->richTextBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->richTextBox1->Location = System::Drawing::Point(0, 55);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(881, 451);
			this->richTextBox1->TabIndex = 2;
			this->richTextBox1->Text = L"";
			this->richTextBox1->SelectionChanged += gcnew System::EventHandler(this, &EditorWindow::richTextBox1_SelectionChanged);
			this->richTextBox1->TextChanged += gcnew System::EventHandler(this, &EditorWindow::richTextBox1_TextChanged);
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->contextMenuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->cutItem2,
					this->copyItem2, this->pasteItem2, this->selectAllItem2, this->найтиВСловареToolStripMenuItem
			});
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(211, 152);
			// 
			// cutItem2
			// 
			this->cutItem2->Name = L"cutItem2";
			this->cutItem2->Size = System::Drawing::Size(210, 24);
			this->cutItem2->Text = L"Вырезат&ь";
			this->cutItem2->Click += gcnew System::EventHandler(this, &EditorWindow::cutItem2_Click);
			// 
			// copyItem2
			// 
			this->copyItem2->Name = L"copyItem2";
			this->copyItem2->Size = System::Drawing::Size(210, 24);
			this->copyItem2->Text = L"&Копировать";
			this->copyItem2->Click += gcnew System::EventHandler(this, &EditorWindow::copyItem2_Click);
			// 
			// pasteItem2
			// 
			this->pasteItem2->Name = L"pasteItem2";
			this->pasteItem2->Size = System::Drawing::Size(210, 24);
			this->pasteItem2->Text = L"Вст&авка";
			this->pasteItem2->Click += gcnew System::EventHandler(this, &EditorWindow::pasteItem2_Click);
			// 
			// selectAllItem2
			// 
			this->selectAllItem2->Name = L"selectAllItem2";
			this->selectAllItem2->Size = System::Drawing::Size(210, 24);
			this->selectAllItem2->Text = L"Выделить &все";
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 50;
			this->timer1->Tick += gcnew System::EventHandler(this, &EditorWindow::timer1_Tick);
			// 
			// statusStrip1
			// 
			this->statusStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->statusStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->nameStatus, this->simbolStatus,
					this->wordsStatus, this->carriageStatus, this->dataStatus
			});
			this->statusStrip1->Location = System::Drawing::Point(0, 480);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->Size = System::Drawing::Size(881, 26);
			this->statusStrip1->TabIndex = 3;
			this->statusStrip1->Text = L"statusStrip1";
			// 
			// nameStatus
			// 
			this->nameStatus->Name = L"nameStatus";
			this->nameStatus->Size = System::Drawing::Size(86, 20);
			this->nameStatus->Text = L"Имя файла";
			// 
			// simbolStatus
			// 
			this->simbolStatus->Name = L"simbolStatus";
			this->simbolStatus->Size = System::Drawing::Size(163, 20);
			this->simbolStatus->Text = L"Количество символов";
			// 
			// wordsStatus
			// 
			this->wordsStatus->Name = L"wordsStatus";
			this->wordsStatus->Size = System::Drawing::Size(126, 20);
			this->wordsStatus->Text = L"Количество слов";
			// 
			// carriageStatus
			// 
			this->carriageStatus->Name = L"carriageStatus";
			this->carriageStatus->Size = System::Drawing::Size(149, 20);
			this->carriageStatus->Text = L"Положение каретки";
			// 
			// dataStatus
			// 
			this->dataStatus->Name = L"dataStatus";
			this->dataStatus->Size = System::Drawing::Size(41, 20);
			this->dataStatus->Text = L"Дата";
			// 
			// openFD
			// 
			this->openFD->FileName = L"openFileDialog1";
			// 
			// imageList1
			// 
			this->imageList1->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"imageList1.ImageStream")));
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList1->Images->SetKeyName(0, L"bold 2.bmp");
			this->imageList1->Images->SetKeyName(1, L"bold.bmp");
			this->imageList1->Images->SetKeyName(2, L"Italic 2.bmp");
			this->imageList1->Images->SetKeyName(3, L"Italic.bmp");
			this->imageList1->Images->SetKeyName(4, L"Underline 2.bmp");
			this->imageList1->Images->SetKeyName(5, L"Underline.bmp");
			// 
			// printDialog
			// 
			this->printDialog->UseEXDialog = true;
			// 
			// найтиВСловареToolStripMenuItem
			// 
			this->найтиВСловареToolStripMenuItem->Name = L"найтиВСловареToolStripMenuItem";
			this->найтиВСловареToolStripMenuItem->Size = System::Drawing::Size(210, 24);
			this->найтиВСловареToolStripMenuItem->Text = L"Н&айти в словаре";
			this->найтиВСловареToolStripMenuItem->Click += gcnew System::EventHandler(this, &EditorWindow::найтиВСловареToolStripMenuItem_Click);
			// 
			// EditorWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(881, 506);
			this->Controls->Add(this->statusStrip1);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->tools);
			this->Controls->Add(this->menu);
			this->Name = L"EditorWindow";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Litte Text Editor";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &EditorWindow::EditorWindow_FormClosing);
			this->Load += gcnew System::EventHandler(this, &EditorWindow::EditorWindow_Load);
			this->menu->ResumeLayout(false);
			this->menu->PerformLayout();
			this->tools->ResumeLayout(false);
			this->tools->PerformLayout();
			this->contextMenuStrip1->ResumeLayout(false);
			this->statusStrip1->ResumeLayout(false);
			this->statusStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//создать файл
	private: System::Void createItem_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->richTextBox1->Text == "")
		{
			File_name = "Noname.rtf";
			this->nameStatus->Text = File_name;
		}
		else
		{
			System::Windows::Forms::DialogResult Res;
			Res = MessageBox::Show("Вы хотите сохранить файл?", "Little Text Editor", MessageBoxButtons::YesNoCancel, MessageBoxIcon::Exclamation);
			if (Res == System::Windows::Forms::DialogResult::Yes)
			{
				saveItem_Click(sender, e);
				this->richTextBox1->Text = "";
				File_name = "Noname.rtf";
				this->nameStatus->Text = File_name;
			}
			else
				if (Res == System::Windows::Forms::DialogResult::No)
				{
					this->richTextBox1->Text = "";
					File_name = "Noname.rtf";
					this->nameStatus->Text = File_name;
				}
		}
	}
		   //открыть файл
	private: System::Void openItem_Click(System::Object^ sender, System::EventArgs^ e) {
		int key = 1;
		do
			try
		{
			openFD->InitialDirectory = System::IO::Directory::GetCurrentDirectory() + "\\Notes";
			openFD->Filter = "Rtf файлы (*.rtf) |*.rtf|Все файлы (*.*)|*.*";
			openFD->FileName = File_name;
			if (openFD->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			{
				File_name = openFD->FileName;
				this->richTextBox1->LoadFile(File_name, RichTextBoxStreamType::RichText);

				//позволяет вывести в статус имя файла без пути
				int index = File_name->LastIndexOf("\\");
				String^ file_name = gcnew String(File_name->Substring(index + 1));
				this->nameStatus->Text = file_name;

				//считает количество слова
				String^ text = gcnew String(this->richTextBox1->Text);
				array <String^>^ countWords = text->Split(' ', '\n');
				int len = countWords->Length;
				if (text->EndsWith(" ") || text->EndsWith("\n"))
					len--;
				this->wordsStatus->Text = " Количество слов: " + len.ToString();

				//количество символов
				this->simbolStatus->Text = " Количество символов: " + this->richTextBox1->TextLength.ToString();
			}
			key = 0;
		}
		catch (System::ArgumentException^ e)
		{
			//Сообщение о том, что для открытия выбран неподдерживаемый файл
			MessageBox::Show("Формат файла не поддерживается!", "Little Text Editor", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		while (key != 0);
	}
		   //сохранить как
	private: System::Void saveAsItem_Click(System::Object^ sender, System::EventArgs^ e) {
		saveFD->InitialDirectory = System::IO::Directory::GetCurrentDirectory() + "\\Notes";
		saveFD->Filter = "Rtf файлы (*.rtf) |*.rtf";
		saveFD->FileName = File_name;
		if (saveFD->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			File_name = saveFD->FileName;
			this->richTextBox1->SaveFile(File_name, RichTextBoxStreamType::RichText);

			//позволяет вывести в статус имя файла без пути
			int index = File_name->LastIndexOf("\\");
			String^ file_name = gcnew String(File_name->Substring(index + 1));
			this->nameStatus->Text = file_name;
		}
	}
		   //сохранить
	private: System::Void saveItem_Click(System::Object^ sender, System::EventArgs^ e) {
		if (File_name == "Noname.rtf")
			saveAsItem_Click(sender, e);
		else
			this->richTextBox1->SaveFile(File_name, RichTextBoxStreamType::RichText);
	}

		   //копировать
	private: System::Void copyItem_Click(System::Object^ sender, System::EventArgs^ e) {
		DataFormats::Format^ formFormat = DataFormats::GetFormat(DataFormats::Rtf);
		if (this->richTextBox1->SelectionLength > 0)
			Clipboard::SetData(formFormat->Name, this->richTextBox1->SelectedRtf);
	}
		   //вырезать
	private: System::Void cutItem_Click(System::Object^ sender, System::EventArgs^ e) {
		DataFormats::Format^ formFormat = DataFormats::GetFormat(DataFormats::Rtf);
		if (this->richTextBox1->SelectionLength > 0)
		{
			Clipboard::SetData(formFormat->Name, this->richTextBox1->SelectedRtf);
			this->richTextBox1->SelectedRtf = "";
		}
	}
		   //вставить
	private: System::Void pasteItem_Click(System::Object^ sender, System::EventArgs^ e) {
		DataFormats::Format^ formFormat = DataFormats::GetFormat(DataFormats::Rtf);
		if (Clipboard::ContainsData(formFormat->Name) == true)
		{
			this->richTextBox1->Paste(formFormat);
			this->richTextBox1->Refresh();
		}
	}
		   //по умолчанию при загрузке формы кнопки неактивны
	private: System::Void EditorWindow_Load(System::Object^ sender, System::EventArgs^ e) {
		this->cutButton->Enabled = false;
		this->copyButton->Enabled = false;
		this->cutItem->Enabled = false;
		this->copyItem->Enabled = false;
		this->pasteButton->Enabled = false;
		this->pasteItem->Enabled = false;
		this->nameStatus->Text = File_name;
		this->dataStatus->Text = "  Дата: " + DateTime::Now.ToShortDateString();
	}
		   //действия при изменении выделения
	private: System::Void richTextBox1_SelectionChanged(System::Object^ sender, System::EventArgs^ e) {
		//проверяет наличие выделенного фрагмента и открывает или закрывает доступ к инструментам "копировать" и "вырезать"
		if (this->richTextBox1->SelectedText != "")
		{
			this->cutButton->Enabled = true;
			this->copyButton->Enabled = true;
			this->cutItem->Enabled = true;
			this->copyItem->Enabled = true;
		}
		else
		{
			this->cutButton->Enabled = false;
			this->copyButton->Enabled = false;
			this->cutItem->Enabled = false;
			this->copyItem->Enabled = false;
		}

		//проверяет применён ли тот или иной стиль к выделенному фрагменту текста и меняет кнопку
		try
		{
			if (this->richTextBox1->SelectionFont->Bold)
				this->boldStyle->Image = this->imageList1->Images[0];
			else
				this->boldStyle->Image = this->imageList1->Images[1];

			if (this->richTextBox1->SelectionFont->Italic)
				this->italicStyle->Image = this->imageList1->Images[2];
			else
				this->italicStyle->Image = this->imageList1->Images[3];

			if (this->richTextBox1->SelectionFont->Underline)
				this->underlineStyle->Image = this->imageList1->Images[4];
			else
				this->underlineStyle->Image = this->imageList1->Images[5];
		}
		catch (System::NullReferenceException^ e)
		{

			/*при работе с текстами, написанными в данном редакторе или в другом редакторе
			с поддержкой rtf никаких ошибок не возникает, но при открытии файла, который был
			конвертирован с другого формата в rtf, через онлайн конвертирование, возникает ошибка.
			Программа не видит формата шрифта выделенного фрагмента.
			Мой способ решения - обработка ошибки и изменение формата текста на базовы в случае
			возникновения такой ситуации.*/
			System::Windows::Forms::DialogResult Res;
			Res = MessageBox::Show("Ой! Формат текста не читается. \n Изменить формат на базовый?", "Little Text Editor", MessageBoxButtons::YesNo, MessageBoxIcon::Error);
			if (Res == System::Windows::Forms::DialogResult::Yes)
			{
				String^ deBug = gcnew String(this->richTextBox1->Text);
				this->richTextBox1->Clear();
				this->richTextBox1->AppendText(deBug);
			}
		}

	}
	private: System::Void tools_ItemClicked(System::Object^ sender, System::Windows::Forms::ToolStripItemClickedEventArgs^ e) {
		switch (this->tools->Items->IndexOf(e->ClickedItem))
		{
		case 0: {/*Создать*/ createItem_Click(sender, e); break; }
		case 1: {/*Открыть*/ openItem_Click(sender, e); break; }
		case 2: {/*Сохранить*/ saveItem_Click(sender, e); break; }
		case 4: {/*Копировать*/ copyItem_Click(sender, e); break; }
		case 5: {/*Вырезать*/ cutItem_Click(sender, e); break; }
		case 6: {/*Вставить*/ pasteItem_Click(sender, e); break; }
		case 8: {/*Цвет подложки*/ baseColorItem_Click(sender, e); break; }
		case 9: {/*Цвет шрифта*/ textColorItem_Click(sender, e); break; }
		case 10: {/*Формат шрифта*/ fontItem_Click(sender, e); break; }
		case 12: {/*Жирный*/
			//много проверок для того, чтобы можно было все три стиля одновременно задавать не отменяя уже заданный
			FontStyle Stil;
			if (!this->richTextBox1->SelectionFont->Bold && !this->richTextBox1->SelectionFont->Underline && !this->richTextBox1->SelectionFont->Italic)
				Stil = FontStyle::Bold;

			if (!this->richTextBox1->SelectionFont->Bold && !this->richTextBox1->SelectionFont->Underline && this->richTextBox1->SelectionFont->Italic)
				Stil = FontStyle::Bold | FontStyle::Italic;

			if (!this->richTextBox1->SelectionFont->Bold && this->richTextBox1->SelectionFont->Underline && !this->richTextBox1->SelectionFont->Italic)
				Stil = FontStyle::Bold | FontStyle::Underline;

			if (this->richTextBox1->SelectionFont->Bold && !this->richTextBox1->SelectionFont->Underline && !this->richTextBox1->SelectionFont->Italic)
				Stil = FontStyle::Regular;

			if (!this->richTextBox1->SelectionFont->Bold && this->richTextBox1->SelectionFont->Underline && this->richTextBox1->SelectionFont->Italic)
				Stil = FontStyle::Bold | FontStyle::Italic | FontStyle::Underline;

			if (this->richTextBox1->SelectionFont->Bold && !this->richTextBox1->SelectionFont->Underline && this->richTextBox1->SelectionFont->Italic)
				Stil = FontStyle::Italic;

			if (this->richTextBox1->SelectionFont->Bold && this->richTextBox1->SelectionFont->Underline && !this->richTextBox1->SelectionFont->Italic)
				Stil = FontStyle::Underline;

			if (this->richTextBox1->SelectionFont->Bold && this->richTextBox1->SelectionFont->Underline && this->richTextBox1->SelectionFont->Italic)
				Stil = FontStyle::Underline | FontStyle::Italic;

			richTextBox1->SelectionFont = gcnew System::Drawing::Font(richTextBox1->SelectionFont, Stil);
			break; }
		case 13: {/*Курсив*/
			//много проверок для того, чтобы можно было все три стиля одновременно задавать не отменяя уже заданный
			FontStyle Stil;
			if (!this->richTextBox1->SelectionFont->Bold && !this->richTextBox1->SelectionFont->Underline && !this->richTextBox1->SelectionFont->Italic)
				Stil = FontStyle::Italic;

			if (!this->richTextBox1->SelectionFont->Bold && !this->richTextBox1->SelectionFont->Underline && this->richTextBox1->SelectionFont->Italic)
				Stil = FontStyle::Regular;

			if (!this->richTextBox1->SelectionFont->Bold && this->richTextBox1->SelectionFont->Underline && !this->richTextBox1->SelectionFont->Italic)
				Stil = FontStyle::Italic | FontStyle::Underline;

			if (this->richTextBox1->SelectionFont->Bold && !this->richTextBox1->SelectionFont->Underline && !this->richTextBox1->SelectionFont->Italic)
				Stil = FontStyle::Italic | FontStyle::Bold;

			if (!this->richTextBox1->SelectionFont->Bold && this->richTextBox1->SelectionFont->Underline && this->richTextBox1->SelectionFont->Italic)
				Stil = FontStyle::Underline;

			if (this->richTextBox1->SelectionFont->Bold && !this->richTextBox1->SelectionFont->Underline && this->richTextBox1->SelectionFont->Italic)
				Stil = FontStyle::Bold;

			if (this->richTextBox1->SelectionFont->Bold && this->richTextBox1->SelectionFont->Underline && !this->richTextBox1->SelectionFont->Italic)
				Stil = FontStyle::Underline | FontStyle::Bold | FontStyle::Italic;

			if (this->richTextBox1->SelectionFont->Bold && this->richTextBox1->SelectionFont->Underline && this->richTextBox1->SelectionFont->Italic)
				Stil = FontStyle::Underline | FontStyle::Bold;

			richTextBox1->SelectionFont = gcnew System::Drawing::Font(richTextBox1->SelectionFont, Stil);
			break; }
		case 14: {/*Подчёркнутый*/
			//много проверок для того, чтобы можно было все три стиля одновременно задавать не отменяя уже заданный
			FontStyle Stil;
			if (!this->richTextBox1->SelectionFont->Bold && !this->richTextBox1->SelectionFont->Underline && !this->richTextBox1->SelectionFont->Italic)
				Stil = FontStyle::Underline;

			if (!this->richTextBox1->SelectionFont->Bold && !this->richTextBox1->SelectionFont->Underline && this->richTextBox1->SelectionFont->Italic)
				Stil = FontStyle::Italic | FontStyle::Underline;

			if (!this->richTextBox1->SelectionFont->Bold && this->richTextBox1->SelectionFont->Underline && !this->richTextBox1->SelectionFont->Italic)
				Stil = FontStyle::Regular;

			if (this->richTextBox1->SelectionFont->Bold && !this->richTextBox1->SelectionFont->Underline && !this->richTextBox1->SelectionFont->Italic)
				Stil = FontStyle::Underline | FontStyle::Bold;

			if (!this->richTextBox1->SelectionFont->Bold && this->richTextBox1->SelectionFont->Underline && this->richTextBox1->SelectionFont->Italic)
				Stil = FontStyle::Italic;

			if (this->richTextBox1->SelectionFont->Bold && !this->richTextBox1->SelectionFont->Underline && this->richTextBox1->SelectionFont->Italic)
				Stil = FontStyle::Underline | FontStyle::Bold | FontStyle::Italic;

			if (this->richTextBox1->SelectionFont->Bold && this->richTextBox1->SelectionFont->Underline && !this->richTextBox1->SelectionFont->Italic)
				Stil = FontStyle::Bold;

			if (this->richTextBox1->SelectionFont->Bold && this->richTextBox1->SelectionFont->Underline && this->richTextBox1->SelectionFont->Italic)
				Stil = FontStyle::Italic | FontStyle::Bold;

			richTextBox1->SelectionFont = gcnew System::Drawing::Font(richTextBox1->SelectionFont, Stil);
			break; }
		case 16: {/*Маркированный список*/
			if (this->richTextBox1->SelectionBullet)
				this->richTextBox1->SelectionBullet = false;
			else
				this->richTextBox1->SelectionBullet = true;
			break; }
		case 18: {/*Выравнивание по левому краю*/
			this->richTextBox1->SelectionAlignment = HorizontalAlignment::Left;
			break; }
		case 19: {/*Выравнивание по центру*/
			this->richTextBox1->SelectionAlignment = HorizontalAlignment::Center;
			break; }
		case 20: {/*Выравнивание по правому краю*/
			this->richTextBox1->SelectionAlignment = HorizontalAlignment::Right;
			break; }
		case 22: {/*Шаг назад*/ this->richTextBox1->Undo(); break; }
		case 23: {/*Шаг вперёд*/ this->richTextBox1->Redo(); break; }
		case 26: {/*Найти*/
			String^ Where = gcnew String("");
			Where = this->richTextBox1->Text;
			String^ What = gcnew String("");
			What = this->findText->Text;
			array <Char>^ chars = { ' ', ',','.',':','!','?',';' };
			array <String^>^ My_Split = Where->Split(chars);
			String^ Wo = gcnew String("");
			int Wo_Start = 0;
			for each (Wo in My_Split)
			{
				if (Wo->Trim() != "" && Wo->Trim() == What)
				{
					Wo_Start = this->richTextBox1->Text->IndexOf(What, Wo_Start);
					this->richTextBox1->Select(Wo_Start, What->Length);
					this->richTextBox1->SelectionBackColor = System::Drawing::Color::Yellow;
					Wo_Start = Wo_Start + What->Length;
				}
			}
			break; }
		case 28: {/*Словарь*/ dictionary->ShowDialog(); break; }
		}
	}

		   //таймер
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		//с некоторой периодичностью проферяет наличие в буфере фрагмента для вставки открывает или открывает доступ к вставке
		DataFormats::Format^ formFormat = DataFormats::GetFormat(DataFormats::Rtf);
		if (Clipboard::ContainsData(formFormat->Name) == true)
		{
			this->pasteButton->Enabled = true;
			this->pasteItem->Enabled = true;
		}
		else
		{
			this->pasteButton->Enabled = false;
			this->pasteItem->Enabled = false;
		}

		//показывает положение курсора в символах
		if (this->richTextBox1->SelectionLength == 0)
			this->carriageStatus->Text = " Курсор: " + this->richTextBox1->SelectionStart;
	}
	private: System::Void cutItem2_Click(System::Object^ sender, System::EventArgs^ e) {
		cutItem_Click(sender, e);
	}
	private: System::Void copyItem2_Click(System::Object^ sender, System::EventArgs^ e) {
		copyItem_Click(sender, e);
	}
	private: System::Void pasteItem2_Click(System::Object^ sender, System::EventArgs^ e) {
		pasteItem_Click(sender, e);
	}
		   //формат шрифта
	private: System::Void fontItem_Click(System::Object^ sender, System::EventArgs^ e) {
		fontDialog->Font = this->richTextBox1->Font;
		if (fontDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			this->richTextBox1->SelectionFont = fontDialog->Font;
	}
		   //цвет текста
	private: System::Void textColorItem_Click(System::Object^ sender, System::EventArgs^ e) {
		colorDialog->Color = this->richTextBox1->ForeColor;
		if (colorDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			this->richTextBox1->SelectionColor = colorDialog->Color;
	}
		   //цвет подложки
	private: System::Void baseColorItem_Click(System::Object^ sender, System::EventArgs^ e) {
		colorDialog->Color = this->richTextBox1->ForeColor;
		if (colorDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			this->richTextBox1->SelectionBackColor = colorDialog->Color;
	}
		   //выделить всё
	private: System::Void selectAllItem_Click(System::Object^ sender, System::EventArgs^ e) {
		this->richTextBox1->SelectAll();
	}
		   //выход
	private: System::Void exitItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
	private: System::Void EditorWindow_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
		System::Windows::Forms::DialogResult Res;
		Res = MessageBox::Show("Вы хотите сохранить файл?", "Little Text Editor", MessageBoxButtons::YesNoCancel, MessageBoxIcon::Exclamation);
		if (Res == System::Windows::Forms::DialogResult::Yes)
			saveItem_Click(sender, e);
		else if (Res == System::Windows::Forms::DialogResult::Cancel)
			e->Cancel = true;
	}

	private: System::Void richTextBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		//показывает количество введённых символов
		this->simbolStatus->Text = " Количество символов: " + this->richTextBox1->TextLength.ToString();

		//показывает количество слов (пробел после пробела или абзац после пробела считается за слово)
		String^ text = gcnew String(this->richTextBox1->Text);
		array <String^>^ countWords = text->Split(' ', '\n');
		int len = countWords->Length;
		if (text->EndsWith(" ") || text->EndsWith("\n"))
			len--;
		this->wordsStatus->Text = " Количество слов: " + len.ToString();

	}

	private: System::Void отменадействияToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		this->richTextBox1->Undo();
	}
	private: System::Void отменадействияToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->richTextBox1->Redo();
	}

	private: System::Void выходToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
	private: System::Void найтиВСловареToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Frm = gcnew Dictionary(this->richTextBox1->SelectedText);
		Frm->ShowDialog();

	}
};
}
