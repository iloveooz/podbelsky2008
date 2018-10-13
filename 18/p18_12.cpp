//p18_12.cpp - применение алгоритмов for_each и generate_n

	#include <iostream>
	#include <algorithm>
	#include <deque>
	
	#include "functorRand.h"
	
	using namespace std;
	
	
	
	// функция для вывода элемента последовательности
	void printOne(const int & c) {
		cout << c << ' ';
	}
	
	int main() {
		srand(time(0));
		
		// создан пустой контейнер
		deque <int> drill;
		
		// создан функциональный объект
		functorRand fra(0, 10);
		
		// вставка 12-ти элементов, используя функц. объект fra
		generate_n(back_inserter(drill), 12, fra);
		for_each(drill.begin(), drill.end(), printOne);
		
		cout << endl;
		
		// сортировка первых шести элементов
					// начало интервала, конец сортировки, конец интервала
		partial_sort(drill.begin(), drill.begin() + 6, drill.end());
		for_each(drill.begin(), drill.end(), printOne);
		
		cout << endl;
		
		// перестановка элементов в обратном порядке
				// начало интервала, конец интервала
		reverse(drill.begin(), drill.end());
		for_each(drill.begin(), drill.end(), printOne);
		
		cout << endl;
		
		return 0;
	}
	
	
		
