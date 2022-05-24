#pragma once
using namespace System;
using namespace System::IO;
using namespace System::Windows::Forms;

public ref class Pair {
	String^ word;
	String^ defenition;

public:
	Pair()
	{
		word = "";
		defenition = "";
	}
	Pair(String^ wo, String^ def)
	{
		word = wo;
		defenition = def;
	}
	property String^ wo {
		String^ get() {
			return word;
		}
		void set(String^ wo) {
			word = wo;
		}
	}
	property String^ def {
		String^ get() {
			return defenition;
		}
		void set(String^ def) {
			defenition = def;
		}
	}
};

ref class My_Dictionary {
	array <Pair^>^ A;
	int len;

public:
	My_Dictionary()
	{
		len = 0;
		A = gcnew array <Pair^>(1000);
	};

	bool IsDigit()
	{
		return len == 0;
	}

	bool IsFull()
	{
		return len == 1000;
	}

	void Add(Pair^ Dic)
	{
		if (!IsFull())
		{
			A[len] = Dic;
			len++;
		}
	}

	void Del(String^ Word)
	{
		Word = Word->ToUpper() + " ";
		for (int i = 0; i < len; i++)
			if (Word == A[i]->wo)
			{
				for (int j = i; j < len; j++)
					A[j] = A[j + 1];
				len--;
			}
	}

	void Add_New(Pair^ Dic)
	{
		Dic->wo = Dic->wo->ToUpper();
		bool key = true;
		for (int i = 0; i < len; i++)
			if (Dic->wo == A[i]->wo)
				key = false;
		if (!IsFull() && key)
		{
			Pair^ help = gcnew Pair();
			A[len] = Dic;
			len++;
			for (int i = len-2; i >= 0; i--)
			{
					if (String::Compare(A[i]->wo, Dic->wo, true) > 0)
					{
						help = A[i];
						A[i] = A[i + 1];
						A[i + 1] = help;
					}
			}
			
		}
		else
		{
			if (key)
				MessageBox::Show("Словарь заполнен!", "Little Text Editor", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
			else
				MessageBox::Show("Такое слово уже есть в словаре!", "Little Text Editor", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		}
	}

	void Change(Pair^ pair)
	{
		pair->wo = pair->wo->ToUpper() + " ";
		for (int i = 0; i < len; i++)
			if (pair->wo == A[i]->wo)
				A[i]->def = pair->def;
	}

	void Load(String^ File_name)
	{
		StreamReader^ SR = gcnew StreamReader(File_name);
		String^ Str = gcnew String("");
		while (Str = SR->ReadLine())
		{
			Pair^ A = gcnew Pair();
			A->wo = Str->Substring(0, Str->IndexOf("#"));
			A->wo = A->wo->ToUpper();
			A->def = Str->Substring((Str->IndexOf("#") + 1));
			Add(A);
		}
		SR->Close();
	}

	void Unload(String^ File_name)
	{
		StreamWriter^ SW = gcnew StreamWriter(File_name);
		String^ Str = gcnew String("");
		for (int i = 0; i < len; i++)
		{
			Str = A[i]->wo + "#" + A[i]->def;
			SW->WriteLine(Str);
		}
		SW->Close();
	}

	void View(System::Windows::Forms::ListBox^ list)
	{
		String^ D = gcnew String("");
		for (int i = 0; i < len; i++)
		{
			D = A[i]->ToString();
			list->Items->Add(A[i]->wo);
		}
	}

	void Mean(int p, System::Windows::Forms::TextBox^ Tb)
	{
		Tb->Text = A[p]->def;
	}

	int Find(String^ What)
	{
		String^ S = gcnew String("");
		for (int i = 0; i < len; i++)
		{
			S = A[i]->wo;
			if (String::Compare(S, What, true) == 1)
				return i;
		}
		return -1;
	}

	
};