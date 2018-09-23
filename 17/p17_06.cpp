//p17_06.cpp - контейнер evenArray с объектами типа int, применение алгоритмов STL

	#include <iostream>
	using namespace std;
	
	#include "evenArray.h"
	#include "iterPrint.h"
	
	// для библиотечной функции rand()
	#include <cstdlib>
	
	#include <algorithm>
	
	int main() {
		// инициализация случайных чисел
		srand(time(NULL));
		
		// создание, заполнение и печать контейнера
		evenArray series;
		
		int n = MAXSIZE / 2;
		int xMax = 100;
		
		for (int i = 0; i < n; i++)
			series.push(rand() % xMax);
		
		// вывод на экран
		iterPrint <6> (series.begin(), series.end());
		
		// прямой итератор контейнера
		evenArray::evenIter iterator;
		
		// поиск максимального элемента
		iterator = max_element(series.begin(), series.end());
		cout << "Максимальный элемент: " << *iterator << endl;
		
		// поиск минимального элемента
		iterator = min_element(series.begin(), series.end());
		cout << "Максимальный элемент: " << *iterator << endl;
		
		return 0;
	}


