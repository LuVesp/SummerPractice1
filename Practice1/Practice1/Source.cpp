#include "Header.h"
using namespace System;

String^ M_Point::ToString() {
	return String::Format(" ({0},{1})  �����: {2}", X, Y, m);
}