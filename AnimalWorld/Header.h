#pragma once
#include <cstdlib>
#include <ctime>

using namespace System;
using namespace System::Drawing;
using namespace System::Windows::Forms;


ref class Picture {
	//String^ name;
	Image^ pict;
	int key;

public:
	Picture()
	{
	//	name = "";
		key = 0;
	}
	Picture(String^ Name, Picture^ Pict, int X, int Y, int Key)
	{
	//	name = Name;
		key = Key;
	}
	//property String^ Name {
		//String^ get() {
		//	return name;
		//}
		//void set(String^ Name) {
		//	name = Name;
		//}
	//}
	property Image^ Pict {
		Image^ get() {
			return pict;
		}
		void set(Image^ Pict) {
			pict = Pict;
		}
	}
	property int X {
		int get() {
			return x;
		}
		void set(int X) {
			x = X;
		}
	}
	property int Y {
		int get() {
			return y;
		}
		void set(int Y) {
			y = Y;
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

ref class Many {
	array <Picture^>^ A;
	array <Picture^>^ B;
	int len;

public:
	Many()
	{
		len = 0;
		A = gcnew array <Picture^>(20);
		B = gcnew array <Picture^>(20);

		for (int i = 0; i < 20; i++)
		{
			A[i] = gcnew Picture();
			B[i] = gcnew Picture();
		}
	};

	bool IsDigit()
	{
		return len == 0;
	}

	bool IsFull()
	{
		return len == 20;
	}

	void Fill(int k)
	{
		String^ FN1 = gcnew String("");
		String^ FN2 = gcnew String("");

		for (int i = 0; i < k; i++)
		{
		//	A[i]->Name = System::IO::Directory::GetCurrentDirectory() + "\\Pictures\\" + i + ".bmp";
		//	B[i]->Name = System::IO::Directory::GetCurrentDirectory() + "\\Pictures\\" + i+i + ".bmp";
			A[i]->Key = i;
			B[i]->Key = i;
			//A[i]->Pict = gcnew Bitmap(System::IO::Directory::GetCurrentDirectory() + "\\Pictures\\" + i + ".bmp");
			FN1 = System::IO::Directory::GetCurrentDirectory() + "\\Pictures\\" + (i+1) + ".bmp";
			FN2 = System::IO::Directory::GetCurrentDirectory() + "\\Pictures\\" + (i+1) + (i+1) + ".bmp";
			//A[i]->Pict = gcnew Bitmap("D:\\Computer\\Documents\\0. Учебная практика\\Project1\\Pictures\\1.bmp");
			A[i]->Pict = gcnew Bitmap(System::IO::Directory::GetCurrentDirectory() + "\\Pictures\\" + (i + 1) + ".bmp");
			B[i]->Pict = gcnew Bitmap(System::IO::Directory::GetCurrentDirectory() + "\\Pictures\\" + (i + 1) + (i + 1) + ".bmp");
			len++;
		}
	}
	
	void Sort()
	{
		srand(time(NULL));
		int k;
		array <Picture^>^ C;
		C = gcnew array <Picture^>(len);
		array <Picture^>^ D;
		D = gcnew array <Picture^>(len);
		int lenC = len;
		for (int i = 0; i < lenC - 1; i++)
		{
 			k = rand() % len;
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
		int q = lenC / 2;
		int w = q;
		for (int i = 0; i < q-1; i++)
		{
			int k = rand() % w;
			B[i] = D[k];
			for (int j = k + 1; j < w; j++)
			{
				D[j - 1] = D[j];
			}
			w--;
		}

		B[q-1] = D[0];
		w = lenC;

		for (int i = q; i < lenC-1; i++)
		{
			int k = rand() % (w - q) + q;
			B[i] = D[k];
			for (int j = k + 1; j < w; j++)
			{
				D[j - 1] = D[j];
			}
			w--;
		}

		B[lenC-1] = D[q];
		A = C;
		len = lenC;
	}

	Image^ ImA(int i)
	{
		return A[i]->Pict;
	}

	Image^ ImB(int i)
	{
		return B[i]->Pict;
	}

	bool Check(int i)
	{
		switch (i)
		{
		case 1: 
		{
			for (int j = 0; j < len/2; j++)
				if (A[j]->Key != B[j]->Key)
					return false;
			return true;
		}
		case 2:
		{
			for (int j = len/2; j < len; j++)
				if (A[j]->Key != B[j]->Key)
					return false;
			return true;
		}
		}
	}
};