//p17_04.cpp - итератор как дружественный класс

	#include <iostream>
	using namespace std;
	
	#include "listStr.h"
	#include "iterPrint.h"
	
	int main() {
		// создание строки
		string num = "12345";
		// создание списка
		listStr spisok(num);
		
		string abc = "abcde";
		// дополнение списка
		spisok.append(abc);
		
		abc = "word";
		spisok.append(abc);
		
		abc = "new word";
		spisok.append(abc);
		
		iterPrint<2> (spisok.begin(), spisok.end());
		return 0;
	}
