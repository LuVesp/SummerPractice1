#pragma once
using namespace System;
using namespace System::IO;
using namespace System::Drawing;
using namespace System::Windows::Forms;


//Класс, хранящий материалы к теме "Классификация животных по внешнему виду"
public ref class TypeAnimal {
	String^ Introduction; //Хранит URL вступительной части урока
	String^ Animals; //Хранит URL к подтеме «Звери»
	String^ Birds; //Хранит URL к подтеме «Птицы»
	String^ Fish; //Хранит URL к подтеме «Рыбы»
	String^ Insects; //Хранит URL к подтеме «Насекомые»
	String^ Amphibians; //Хранит URL к подтеме «Земноводные»
	String^ Reptiles; //Хранит URL к подтеме «Пресмыкающиеся»
	String^ Conclusion; //Хранит URL к видео-ролику с обобщением подтем

public:
	TypeAnimal() //Базовый конструктор класса
	{
		Introduction = gcnew String("");
		Animals = gcnew String("");
		Birds = gcnew String("");
		Fish = gcnew String("");
		Insects = gcnew String("");
		Amphibians = gcnew String("");
		Reptiles = gcnew String("");
		Conclusion = gcnew String("");
	}
	TypeAnimal(String^ introduction, String^ animals, String^ birds, String^ fish, String^ insects, String^ amphibians, String^ reptiles, String^ conclusion)
	{
		Introduction = gcnew String(introduction);
		Animals = gcnew String(animals);
		Birds = gcnew String(birds);
		Fish = gcnew String(fish);
		Insects = gcnew String(insects);
		Amphibians = gcnew String(amphibians);
		Reptiles = gcnew String(reptiles);
		Conclusion = gcnew String(conclusion);
	}
	void Fill(String^ Folder_name) //Метод для заполнения данных URL
	{
		Introduction = gcnew String(System::IO::Directory::GetCurrentDirectory() + "\\Video\\" + Folder_name + "\\" + "introduction.mp4");
		Animals = gcnew String(System::IO::Directory::GetCurrentDirectory() + "\\Video\\" + Folder_name + "\\" + "animals.mp4");
		Birds = gcnew String(System::IO::Directory::GetCurrentDirectory() + "\\Video\\" + Folder_name + "\\" + "birds.mp4");
		Fish = gcnew String(System::IO::Directory::GetCurrentDirectory() + "\\Video\\" + Folder_name + "\\" + "fish.mp4");
		Insects = gcnew String(System::IO::Directory::GetCurrentDirectory() + "\\Video\\" + Folder_name + "\\" + "insects.mp4");
		Amphibians = gcnew String(System::IO::Directory::GetCurrentDirectory() + "\\Video\\" + Folder_name + "\\" + "amphibians.mp4");
		Reptiles = gcnew String(System::IO::Directory::GetCurrentDirectory() + "\\Video\\" + Folder_name + "\\" + "reptiles.mp4");
		Conclusion = gcnew String(System::IO::Directory::GetCurrentDirectory() + "\\Video\\" + Folder_name + "\\" + "conclusion.mp4");
	}

	property String^ introduction {
		String^ get() {
			return Introduction;
		}
		void set(String^ introduction) {
			Introduction = introduction;
		}

	}
	property String^ animals {
		String^ get() {
			return Animals;
		}
		void set(String^ animals) {
			Animals = animals;
		}

	}
	property String^ birds {
		String^ get() {
			return Birds;
		}
		void set(String^ birds) {
			Birds = birds;
		}

	}
	property String^ fish {
		String^ get() {
			return Fish;
		}
		void set(String^ fish) {
			Fish = fish;
		}

	}
	property String^ insects {
		String^ get() {
			return Insects;
		}
		void set(String^ insects) {
			Insects = insects;
		}

	}
	property String^ amphibians {
		String^ get() {
			return Amphibians;
		}
		void set(String^ amphibians) {
			Amphibians = amphibians;
		}

	}

	property String^ reptiles {
		String^ get() {
			return Reptiles;
		}
		void set(String^ reptiles) {
			Reptiles = reptiles;
		}

	}
	property String^ conclusion {
		String^ get() {
			return Conclusion;
		}
		void set(String^ conclusion) {
			Conclusion = conclusion;
		}

	}
};
//Класс, хранящий материалы к теме "Классификация животных по типу питания"
public ref class TypeFood {
	String^ Introduction; //Хранит URL вступительной части урока
	String^ Carnivores; //Хранит URL к подтеме «Хищники»
	String^ Herbivores; //Хранит URL к подтеме «Травоядные»
	String^ Omnivores; //Хранит URL к подтеме «Всеядные»

public:
	TypeFood()
	{
		Introduction = gcnew String("");
		Carnivores = gcnew String("");
		Herbivores = gcnew String("");
		Omnivores = gcnew String("");

	}
	TypeFood(String^ introduction, String^ carnivores, String^ herbivores, String^ omnivores)
	{
		Introduction = gcnew String(introduction);
		Carnivores = gcnew String(carnivores);
		Herbivores = gcnew String(herbivores);
		Omnivores = gcnew String(omnivores);

	}
	void Fill(String^ Folder_name) //Метод для заполнения данных URL
	{
		Introduction = gcnew String(System::IO::Directory::GetCurrentDirectory() + "\\Video\\" + Folder_name + "\\" + "introduction.mp4");
		Carnivores = gcnew String(System::IO::Directory::GetCurrentDirectory() + "\\Video\\" + Folder_name + "\\" + "carnivores.mp4");
		Herbivores = gcnew String(System::IO::Directory::GetCurrentDirectory() + "\\Video\\" + Folder_name + "\\" + "herbivores.mp4");
		Omnivores = gcnew String(System::IO::Directory::GetCurrentDirectory() + "\\Video\\" + Folder_name + "\\" + "omnivores.mp4");
	}

	property String^ introduction {
		String^ get() {
			return Introduction;
		}
		void set(String^ introduction) {
			Introduction = introduction;
		}

	}
	property String^ carnivores {
		String^ get() {
			return Carnivores;
		}
		void set(String^ carnivores) {
			Carnivores = carnivores;
		}

	}

	property String^ herbivores {
		String^ get() {
			return Herbivores;
		}
		void set(String^ herbivores) {
			Herbivores = herbivores;
		}

	}

	property String^ omnivores {
		String^ get() {
			return Omnivores;
		}
		void set(String^ omnivores) {
			Omnivores = omnivores;
		}

	}

};
//Класс, хранящий материалы к теме "Дикие и домашние животные"
public ref class WildAndDomestic {
	String^ Introduction; //Хранит URL вступительной части урока
	String^ Wild; //Хранит URL к подтеме «Дикие животные»
	String^ Domestic; //Хранит URL к подтеме «Домашние животные»

public:
	WildAndDomestic()
	{
		Introduction = gcnew String("");
		Wild = gcnew String("");
		Domestic = gcnew String("");

	}

	WildAndDomestic(String^ introduction, String^ wild, String^ domestic)
	{
		Introduction = gcnew String(introduction);
		Wild = gcnew String(wild);
		Domestic = gcnew String(domestic);

	}

	void Fill(String^ Folder_name) //Метод для заполнения данных URL
	{
		Introduction = gcnew String(System::IO::Directory::GetCurrentDirectory() + "\\Video\\" + Folder_name + "\\" + "introduction.mp4");
		Wild = gcnew String(System::IO::Directory::GetCurrentDirectory() + "\\Video\\" + Folder_name + "\\" + "wild.mp4");
		Domestic = gcnew String(System::IO::Directory::GetCurrentDirectory() + "\\Video\\" + Folder_name + "\\" + "domestic.mp4");
	}

	property String^ introduction {
		String^ get() {
			return Introduction;
		}
		void set(String^ introduction) {
			Introduction = introduction;
		}

	}

	property String^ wild {
		String^ get() {
			return Wild;
		}
		void set(String^ wild) {
			Wild = wild;
		}

	}

	property String^ domestic {
		String^ get() {
			return Domestic;
		}
		void set(String^ domestic) {
			Domestic = domestic;
		}

	}
};
//Класс, хранящий материалы к теме "Следы животных"
public ref class Footprints {
	String^ Video; //Хранит URL к видео-уроку «Следы»
	String^ Cartoon; //Хранит URL к мультфильму по теме «Следы»

public:
	Footprints()
	{
		Video = gcnew String("");
		Cartoon = gcnew String("");

	}

	Footprints(String^ video, String^ cartoon)
	{
		Video = gcnew String(video);
		Cartoon = gcnew String(cartoon);
	}

	void Fill(String^ Folder_name) //Метод для заполнения данных URL
	{
		Video = gcnew String(System::IO::Directory::GetCurrentDirectory() + "\\Video\\" + Folder_name + "\\" + "footprints.mp4");
		Cartoon = gcnew String(System::IO::Directory::GetCurrentDirectory() + "\\Video\\" + Folder_name + "\\" + "cartoon.mp4");
	}

	property String^ video {
		String^ get() {
			return Video;
		}
		void set(String^ video) {
			Video = video;
		}
	}

	property String^ cartoon {
		String^ get() {
			return Cartoon;
		}
		void set(String^ cartoon) {
			Cartoon = cartoon;
		}
	}
};
//Класс, хранящий материалы к теме "Зоны обитания животных"
public ref class Habitat {
	String^ Introduction; //Хранит URL вступительной части урока
	String^ Cold; //Хранит URL к подтеме «Арктические пустыни и тундра»
	String^ Forest; //Хранит URL к подтеме «Леса»
	String^ Steppe; //Хранит URL к подтеме «Степи»
	String^ Desert; //Хранит URL к подтеме «Пустыни и полупустыни»
	String^ Savanna; //Хранит URL к подтеме «Саванны и редколесья»
	String^ Jungle; //Хранит URL к подтеме «Экваториальные леса»
public:
	Habitat()
	{
		Introduction = gcnew String("");
		Cold = gcnew String("");
		Forest = gcnew String("");
		Steppe = gcnew String("");
		Desert = gcnew String("");
		Savanna = gcnew String("");
		Jungle = gcnew String("");
	}

	Habitat(String^ introduction, String^ cold, String^ steppe, String^ forest, String^ desert, String^ savanna, String^ jungle)
	{
		Introduction = gcnew String(introduction);
		Cold = gcnew String(cold);
		Forest = gcnew String(forest);
		Steppe = gcnew String(steppe);
		Desert = gcnew String(desert);
		Savanna = gcnew String(savanna);
		Jungle = gcnew String(jungle);
	}

	void Fill(String^ Folder_name) //Метод для заполнения данных URL
	{
		Introduction = gcnew String(System::IO::Directory::GetCurrentDirectory() + "\\Video\\" + Folder_name + "\\" + "introduction.mp4");
		Cold = gcnew String(System::IO::Directory::GetCurrentDirectory() + "\\Video\\" + Folder_name + "\\" + "cold.mp4");
		Forest = gcnew String(System::IO::Directory::GetCurrentDirectory() + "\\Video\\" + Folder_name + "\\" + "forest.mp4");
		Steppe = gcnew String(System::IO::Directory::GetCurrentDirectory() + "\\Video\\" + Folder_name + "\\" + "steppe.mp4");
		Desert = gcnew String(System::IO::Directory::GetCurrentDirectory() + "\\Video\\" + Folder_name + "\\" + "desert.mp4");
		Savanna = gcnew String(System::IO::Directory::GetCurrentDirectory() + "\\Video\\" + Folder_name + "\\" + "savanna.mp4");
		Jungle = gcnew String(System::IO::Directory::GetCurrentDirectory() + "\\Video\\" + Folder_name + "\\" + "jungle.mp4");
	}

	property String^ introduction {
		String^ get() {
			return Introduction;
		}
		void set(String^ introduction) {
			Introduction = introduction;
		}
	}

	property String^ cold {
		String^ get() {
			return Cold;
		}
		void set(String^ cold) {
			Cold = cold;
		}

	}

	property String^ forest {
		String^ get() {
			return Forest;
		}
		void set(String^ forest) {
			Forest = forest;
		}

	}

	property String^ steppe {
		String^ get() {
			return Steppe;
		}
		void set(String^ steppe) {
			Steppe = steppe;
		}

	}

	property String^ desert {
		String^ get() {
			return Desert;
		}
		void set(String^ desert) {
			Desert = desert;
		}

	}

	property String^ savanna {
		String^ get() {
			return Savanna;
		}
		void set(String^ savanna) {
			Savanna = savanna;
		}

	}

	property String^ jungle {
		String^ get() {
			return Jungle;
		}
		void set(String^ jungle) {
			Jungle = jungle;
		}

	}

};


//Изображение животного и звук к нему
public ref class Pair {
	Image^ Picture; //Для хранения изображения животного
	String^ Sound; //Для хранения звука этого животного

public:
	Pair()
	{
		Sound = gcnew String("");
	}

	Pair(Image^ picture, String^ sound)
	{
		Picture = picture;
		Sound = sound;
	}

	property String^ sound {
		String^ get() {
			return Sound;
		}
		void set(String^ sound) {
			Sound = sound;
		}
	}

	property Image^ picture {
		Image^ get() {
			return Picture;
		}
		void set(Image^ picture) {
			Picture = picture;
		}
	}
};
//Контейнер к классу Pair для работы с массивами изображений и адресов звуковых файлов
ref class List {
	array <Pair^>^ list; //массив - список из пар изображение-адрес звука
	int len; //длина массива

public:
	List()
	{
		len = 0;
		list = gcnew array <Pair^>(40);

		for (int i = 0; i < 40; i++) //цикл предназначен для выделения памяти каждому элементу массива
		{
			list[i] = gcnew Pair();
		}
	};

	void Fill(int k, String^ Folder_name) /*Заполнение массива данными. 
	Получает в качестве параметров количество элементов массива, 
	которые необходимо заполнить и имя папки, из которой необходимо загружать файлы. 
	Предполагается, что файлы именованы соответствующим образом: 
	каждое изображение имеет имя-число от 0 до некоторого числа, 
	файлы пронумерованы в строгом числовом порядке с интервалом в единицу, 
	каждому изображению с именем “i” соответствует звуковой файл с именем “iii”, 
	папки с изображениями и со звуками носят одинаковое имя. */
	{
		if (len == 0)
			for (int i = 0; i < k; i++)
			{
				list[i]->picture = gcnew Bitmap(System::IO::Directory::GetCurrentDirectory() + "\\Images\\" + Folder_name + "\\" + i + ".bmp");
				list[i]->sound = System::IO::Directory::GetCurrentDirectory() + "\\Sounds\\" + Folder_name + "\\" + i + ".wav";
				len++;
			}
	}

	void Play(int i) //получает в качестве параметра индекс элемента, хранящего адрес звука, который необходимо воспроизвести, и воспроизводит этот звук
	{
		System::Media::SoundPlayer^ player;
		player = gcnew System::Media::SoundPlayer();
		player->SoundLocation = list[i]->sound;
		player->Load();
		player->PlaySync();
	}

	Image^ Pict(int i) //позволяет получить конкретное изображение из массива по его индексу
	{
		return list[i]->picture;
	}

};

//Картинка с ключом (ID)
ref class Picture {
	Image^ pict; //Для хранения изображения
	int key; //Для хранения индекса изображения

public:
	Picture()
	{
		key = 0;
	}
	Picture(Image^ Pict, int Key)
	{
		key = Key;
	}

	property Image^ Pict {
		Image^ get() {
			return pict;
		}
		void set(Image^ Pict) {
			pict = Pict;
		}
	}

	property int Key {
		int get() {
			return key;
		}
		void set(int Key) {
			key = Key;
		}
	}


};
//Контейнер к классу Picture для работы с массивами изображений
ref class Many {
	array <Picture^>^ A; //Для хранения массива с изображениями животных
	array <Picture^>^ B; //Для хранения массива с изображениями для сопоставления
	int len; //Длина массивов

public:
	Many()
	{
		len = 0;
		A = gcnew array <Picture^>(15);
		B = gcnew array <Picture^>(15);

		for (int i = 0; i < 15; i++)
		{
			A[i] = gcnew Picture();
			B[i] = gcnew Picture();
		}
	};

	void Fill(int k, String^ Folder_name)/*Заполнение массива данными. 
	Получает в качестве параметров количество элементов массива, 
	которые необходимо заполнить и имя папки, из которой необходимо загружать файлы. 
	Предполагается, что файлы именованы соответствующим образом: 
	каждое изображение имеет имя-число от 0 до некоторого числа, 
	файлы пронумерованы в строгом числовом порядке с интервалом в единицу, 
	каждому изображению животного с именем “i” соответствует изображение 
	для сопоставления с именем “iii”, ключ обоих изображений идентичен и равен i. */
	{
		try
		{
			if (len != 0)
				len = 0;
			for (int i = 0; i < k; i++)
			{
				A[i]->Key = i;
				B[i]->Key = i;
				A[i]->Pict = gcnew Bitmap(System::IO::Directory::GetCurrentDirectory() + "\\Images\\" + Folder_name + "\\" + i + ".bmp");
				B[i]->Pict = gcnew Bitmap(System::IO::Directory::GetCurrentDirectory() + "\\Images\\" + Folder_name + "\\" + i + i + i + ".bmp");
				len++;
			}
		}
		catch (System::ArgumentException ^ e)
		{
			GC::Collect();
			GC::WaitForPendingFinalizers();
			if (len != 0)
				len = 0;
			for (int i = 0; i < k; i++)
			{
				A[i]->Key = i;
				B[i]->Key = i;
				A[i]->Pict = gcnew Bitmap(System::IO::Directory::GetCurrentDirectory() + "\\Images\\" + Folder_name + "\\" + i + ".bmp");
				B[i]->Pict = gcnew Bitmap(System::IO::Directory::GetCurrentDirectory() + "\\Images\\" + Folder_name + "\\" + i + i + i + ".bmp");
				len++;
			}
		}
	}

	void Sort() /*Метод для сортировки массива. Необходим для относительно рандомного
	расположения изображений и для возможности прохождения игр с отличными друг от друга
	исходными наборами. Сортировка выполняется с использованием функции rand() на определённых
	интервалах и функции srand(time(NULL)), которые позволяют генерировать разные наборы 
	псевдослучайных чисел. Сортировка происходит следующим образом: 1) синхронно перемешиваются
	оба массива изображений, 2) Массив А фиксируется, а массив В перемешивается 3мя частями,
	в соответствии с количеством уровней. Такая сортировка позволяет получать разные наборы животных
	на уровне при разных запусках и рандомный порядок изображений на сопоставление, но отсортированный
	в пределах своего уровня.*/
	{
		Random^ rand = gcnew Random();
		int k;
		array <Picture^>^ C;
		C = gcnew array <Picture^>(len);
		array <Picture^>^ D;
		D = gcnew array <Picture^>(len);
		int lenC = len;
		for (int i = 0; i < lenC - 1; i++)
		{
			k = rand->Next(0,len);
			C[i] = A[k];
			D[i] = B[k];
			for (int j = k + 1; j < len; j++)
			{
				A[j - 1] = A[j];
				B[j - 1] = B[j];
			}
			len--;
		}
		C[lenC - 1] = A[0];
		D[lenC - 1] = B[0];
		int q = lenC / 3;
		int w = q;
		for (int i = 0; i < q - 1; i++)
		{
			int k = rand->Next(0,w);
			B[i] = D[k];
			for (int j = k + 1; j < w; j++)
			{
				D[j - 1] = D[j];
			}
			w--;
		}

		B[q - 1] = D[0];
		w = lenC - q;

		for (int i = q; i < lenC - 1 - q; i++)
		{
			int k = rand->Next(q, w);
			B[i] = D[k];
			for (int j = k + 1; j < w; j++)
			{
				D[j - 1] = D[j];
			}
			w--;
		}

		B[lenC - 1 - q] = D[q];
		w = lenC;

		for (int i = q + q; i < lenC - 1; i++)
		{
			int k = rand->Next(q+q, w);
			B[i] = D[k];
			for (int j = k + 1; j < w; j++)
			{
				D[j - 1] = D[j];
			}
			w--;
		}

		B[lenC - 1] = D[q + q];

		A = C;
		len = lenC;
	} 

	//Методы ImA и ImB позволяют получать конкретные изображения по их индексу в массиве

	Image^ ImA(int i)
	{
		return A[i]->Pict;
	}

	Image^ ImB(int i)
	{
		return B[i]->Pict;
	}

	bool Check(int i) /*осуществялет проверку правильности расположения изображений зависимо от уровня,
	реализовано посредством операторф switch, на вход в качестве параметра получает номер уровня, проверку
	которого необходимо осуществить*/
	{
		switch (i)
		{
		case 1:
		{
			for (int j = 0; j < len / 3; j++)
				if (A[j]->Key != B[j]->Key)
					return false;
			return true;
		}
		case 2:
		{
			for (int j = len / 3; j < len-len/3; j++)
				if (A[j]->Key != B[j]->Key)
					return false;
			return true;
		}
		case 3:
		{
			for (int j = len - len / 3; j < len; j++)
				if (A[j]->Key != B[j]->Key)
					return false;
			return true;
		}
		}
	}

	void Change(int i, int j) /*Получает на вход в качестве параметра значение текущих выбранных
	изображения животного и  изображение, которое хотят сопоставить с этим животным. Происходит смена местами
	изображений из массива В: выбранное изображение становится на место изображения, индекс (в массиве) 
	которого, соответствует индексу (в массиве) выбранного изображения с животным, и наоборот.*/
	{
		Picture^ P;
		P = gcnew Picture();

		P = B[i];
		B[i] = B[j];
		B[j] = P;
	}

};