#pragma once
#include <cmath>
using namespace System;
public ref class My_Point {
	double x, y;
public:
	My_Point() 	{
		x = y = 0;
	};
	My_Point(double X, double Y) 	{
		x = X;
		y = Y;
	};
	property double X 	{
		double get() {
			return x;
		}
		void set(double X) {
			x = X;
		}
	}
	property double Y 	{
		double get() {
			return y;
		}
		void set(double Y) {
			y = Y;
		}
	}
	double Lenght() 	{
		return sqrt(x * x + y * y);
	}
};

ref class mPoint : public My_Point
{
	double mass;
public:
	mPoint() 	{
		mass = 0;
	};
	mPoint(double X, double Y, double M) : My_Point(X, Y)
	{
		mass = M;
	};
	property double M
	{
		double get() {
			return mass;
		}
		void set(double M) {
			mass = M;
		}
	}
	bool operator > (mPoint^ L)
	{
		return this->mass > L->mass;
	}
	virtual String^ ToString() override
	{
		return String::Format("({0},{1})  m = {2}", X, Y, M);
	}

};



