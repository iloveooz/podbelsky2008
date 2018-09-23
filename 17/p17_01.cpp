//p17_01.cpp - печать элементов целочисленного массива

	// для библиотечной функции rand()
	#include <cstdlib>
	#include <iostream>
	
	// шаблон функций вывода последовательности
	#include "iterPrint.h"
	
	using namespace std;
	
	int main() {
		int xMax, *array, n;
		cout << "Введите размер массива: ";
		cin >> n;
		
		cout << "Введите максимально допустимое значение элементов массива: ";
		cin >> xMax;
		
		array = new int[n];
		
		for (int i = 0; i < n; i++) 
			array[i] = rand() % xMax;
		
		// передаём начало и конец массива
		iterPrint <3> (array, array + n);
		return 0;
	}
