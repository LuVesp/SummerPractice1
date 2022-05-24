#pragma once
#include <cmath>
using namespace System;

public ref class My_Point {
	double x, y;		// Координаты точки.
public:
	My_Point()
	{
		x = y = 0;
	};
	My_Point(double X, double Y)
	{
		x = X;
		y = Y;
	};

	property double X {
		double get() {
			return x;
		}
		void set(double X) {
			x = X;
		}
	}
	property double Y {
		double get() {
			return y;
		}
		void set(double Y) {
			y = Y;
		}
	}

	double Distance()
	{
		return sqrt(pow(x, 2) + pow(y, 2));
	}

	virtual String^ ToString() override
	{
		return String::Format(" ({0},{1}) ", X, Y);
	};
};

ref class M_Point : public My_Point {
	double m; //масса
public:
	M_Point() : My_Point()
	{
		m = 0;
	};

	M_Point(double M) : My_Point()
	{
		m = M;
	};

	M_Point(double X, double Y, double M) : My_Point(X, Y)
	{
		m = M;
	};

	property double M {
		double get() {
			return m;
		}
		void set(double M) {
			m = M;
		}
	}

	bool operator > (M_Point^ T)
	{
		return this->m > T->m;
	}

	bool operator == (M_Point^ T)
	{
		if (this->X == T->X && this->Y == T->Y && this->m == T->m)
			return true;
		else
			return false;
	}

	virtual String^ ToString() override{
		return String::Format(" ({0},{1})  Масса: {2}", X, Y, m);
	}
}; 

ref class Many
{
private:
	array <M_Point^> ^A;
	int len;

public:

	Many()
	{
		len = 0;
		A = gcnew array <M_Point^>(100);
	}

bool IsDigit()
{
	return len == 0;
}

bool IsFull()
{
	return len == 100;
}

void Add(M_Point ^T)
{
	if (!IsFull())
	{
		A[len] = T;
		len++;
	}
}

void DelPoint(M_Point^ T)
{
	int k = 0;
 	for (int i = 0; i < len; i++)
		if (A[i] == T)
			k++;
	while (k > 0)
	{
		for (int i = 0; i < len; i++)
			if (A[i] == T)
			{
				for (int j = i; j < len; j++)
					A[j] = A[j + 1];
				len--;
				break;
			}
		k--;
	}
}

void DelX(double xx)
{
	int k = 0;
	for (int i = 0; i < len; i++)
		if (A[i]->X == xx)
			k++;
	while (k > 0)
	{
		for (int i = 0; i < len; i++)
			if (A[i]->X == xx)
			{
				for (int j = i; j < len; j++)
					A[j] = A[j + 1];
				len--;
				break;
			}
		k--;
	}
}

void DelY(double yy)
{
	int k = 0;
	for (int i = 0; i < len; i++)
		if (A[i]->Y == yy)
			k++;
	while (k > 0)
	{
		for (int i = 0; i < len; i++)
			if (A[i]->Y == yy)
			{
				for (int j = i; j < len; j++)
					A[j] = A[j + 1];
				len--;
				break;
			}
		k--;
	}
}

void DelM(double mm)
{
	int k = 0;
	for (int i = 0; i < len; i++)
		if (A[i]->M == mm)
			k++;
	while (k > 0)
	{
		for (int i = 0; i < len; i++)
			if (A[i]->M == mm)
			{
				for (int j = i; j < len; j++)
					A[j] = A[j + 1];
				len--;
				break;
			}
		k--;
	}
}

void DelAll()
{
	len = 0;
}

void DelInd(double index)
{
	for (int i = index; i < len; i++)
		A[i] = A[i + 1];
	len--;
}

void View(System::Windows::Forms::DataGridView^ DGV)
{
	DGV->RowCount = 0;
	for (int i=0; i < len; i++)
	{
	array <String^>^ row;
	row = gcnew array <String^> {A[i]->X.ToString(), A[i]->Y.ToString(), A[i]->M.ToString()};
	DGV->Rows->Add(row);
	}
}

double Mass()
{
	double mass = 0;
	for (int i = 0; i < len; i++)
		mass = mass + A[i]->M;
	return mass;
}

My_Point^ massСenter()
{
	My_Point ^T;
	T = gcnew My_Point();
	double summ1 = 0;
	double summ2 = 0;
	double summ3 = 0;
	for (int i = 0; i < len; i++)
	{
		summ1 = summ1 + A[i]->M * A[i]->X;
		summ2 = summ2 + A[i]->M * A[i]->Y;
		summ3 = summ3 + A[i]->M;
	}
	T->X = summ1 / summ3;
	T->Y = summ2 / summ3;
	return T;
}

M_Point^ maxMass()
{
	M_Point^ T;
	T = gcnew M_Point();
	double max = A[0]->M;
	T->X = A[0]->X;
	T->Y = A[0]->Y;
	T->M = A[0]->M;
	for (int i = 1; i < len; i++)
		if (A[i]->M > max)
		{
			max = A[i]->M;
			T->X = A[i]->X;
			T->Y = A[i]->Y;
			T->M = A[i]->M;
		}
	return T;
}
};
