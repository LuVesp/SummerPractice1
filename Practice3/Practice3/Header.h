#pragma once
using namespace System;

String^ Transform(int x)
{
	int rub = x / 100;
	int copeck = x % 100;
	return String::Format("{0} ���., {1} ���.", rub, copeck);
}

String^ findReplace(String^ Where, String^ What, String^ Change)
{
	String^ chars = gcnew String(" ,.!?:"); // ��������� ������ ������� �������������
	Where = " " + Where; //��������� ���� � ������ ������, ����� ����������� ������ �����

	int len = chars->Length;

	//������������� ��� ��������� ���������� �������� ����� �� ������� � ������ ������
	//������ �������� �������� ������ � ������, ������� �������� � ���� ������� ����� ��� ��������
	for (int i = 0; i < len; i++)
		for (int j = 0; j < len; j++)
			Where = Where->Replace(chars[i] + What + chars[j], chars[i] + Change + chars[j]);

	Where = Where->Substring(1); //����������� �� ����������� ������� �������
	return Where;
}



