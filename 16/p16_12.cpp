//p16_12.cpp - массивы с объектами специализации шаблонного класса

	#include <iostream>
	using namespace std;
	
	#include "massPoint.h"
	
	int main() {
		// массив в автоматической памяти
		massPoint <int, int> piAr[] = { 
			massPoint <int, int> (1, 2, 3, 4),
			massPoint <int, int> (1, 2, 3, 2),
			massPoint <int, int> (1, 2, 3, 7),
			massPoint <int, int> (1, 2, 3, 5),
			massPoint <int, int> (1, 2, 3, 9)
		};
		
		// длина массива
		int len = sizeof(piAr) / sizeof(piAr[0]);
		
		// явная сортировка по убыванию масс
		
		// вспомогательный объект
		massPoint <int, int> work;
		
		for(int j = 0; j < len - 1; j++) 
			for(int k = j + 1; k < len; k++)
				if (piAr[j] < piAr[k]) {
					work = piAr[j];
					piAr[j] = piAr[k];
					piAr[k] = work;
				}
		cout << "Отсортированный массив <int, int>: " << endl;
		for (int i = 0; i < len; i++)
			cout << piAr[i] << endl;
		
		return 0;
		}
		
		
