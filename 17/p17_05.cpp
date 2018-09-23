//p17_05.cpp - определение минимального и максимального значений контейнера

	// для алгоритмов STL
	#include <iostream>
	#include <algorithm>
	#include "listStr.h"
	
	using namespace std;
	
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
		
		// прямой итератор контейнера listStr
		listIter iterator;
		
		// поиск максимального элемента
		iterator = max_element(spisok.begin(), spisok.end());
		cout << "Максимальный элемент: " << *iterator << endl;
		
		// поиск минимального элемента
		iterator = min_element(spisok.begin(), spisok.end());
		cout << "Максимальный элемент: " << *iterator << endl;
		
		return 0;
	}
