#pragma once
#define SIZE  10
using namespace System;
// ��������� ����� - ������.

public ref class One
{
public:
int x,y;
	One(void)
	{
		x=y=0;
	}
		One(int xx, int yy)
	{
		x=xx;
		y=yy;
	}
// ����� ToString ���������� ��� �������.
public:
virtual  String ^ ToString()  override
    {
        return String::Format("({0}, {1})", x, y);		// (����1, ����2)
    }
// CompareTo ()
};

// ����� ��������.
class Native
{
public:
	int a,b;
};

// ����� ������������ ������� ����������� ������.

// ������������� ������� �������� ���������� ���� One.
array <One^> ^Init_class()
{
	array <One ^> ^Loc=gcnew array <One ^> (SIZE);
	for(int i=0; i<SIZE;i++)
	{
		Loc[i]=gcnew One;
	    Loc[i]->x=i+1;
        Loc[i]->y=SIZE-i;
	}
	return Loc;	// ����������� ������ ���������� ����.
}

// ������������� ������� �������� ���� Native.
void Init_native(array <Native *> ^Loc)
{
for(int i=0; i<SIZE; i++)
{
   Loc[i]->a=i*10;
   Loc[i]->b=i+10;
   }
}

public ref class Person
{
public:
   String ^ Name;
   String ^ NickName;
   int Age;
// System::Drawing::Bitmap ^ Face;
public:
	Person(String ^ N, String ^ NN, int A )
	{
	   Name = gcnew String(N);
	   NickName = gcnew String(NN);
	   Age = A;
	}
   Person(void)
	{
	   Name = gcnew String("");
	   NickName = gcnew String("");
	   Age = 0;
	}
virtual  String ^ ToString()  override
    {
		return String::Format("{0}, {1}, {2} ", Name, NickName, Age);
    }
void Set(String ^ N, String ^ NN, int A )
	{
	   Name = gcnew String(N);
	   NickName = gcnew String(NN);
	   Age = A;
	}
};

