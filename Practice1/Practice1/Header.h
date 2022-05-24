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

	//void Set(int,int);
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
};

ref class M_Point : public My_Point {
	double m; //масса
public:
	M_Point()
	{
		m = 0;
	};

	M_Point(double M)
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

	virtual String^ ToString() override;
};