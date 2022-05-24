#pragma once
using namespace System;

String^ Transform(int x)
{
	int rub = x / 100;
	int copeck = x % 100;
	return String::Format("{0} руб., {1} коп.", rub, copeck);
}

String^ findReplace(String^ Where, String^ What, String^ Change)
{
	String^ chars = gcnew String(" ,.!?:"); // заполняем массив нужными разделителями
	Where = " " + Where; //добавляем знак в начале строки, чтобы учитывалось первое слово

	int len = chars->Length;

	//просматриваем все возможные комбинации искомого слова со знаками и делаем замену
	//способ помогает избежать замены в словах, которые содержат в себе искомое слово как фрагмент
	for (int i = 0; i < len; i++)
		for (int j = 0; j < len; j++)
			Where = Where->Replace(chars[i] + What + chars[j], chars[i] + Change + chars[j]);

	Where = Where->Substring(1); //избавляемся от дописанного лишнего символа
	return Where;
}



