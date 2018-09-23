//p17_02.cpp - обобщённые алгоритмы

	#include <iostream>
	#include <cstdlib>
	using namespace std;
	
	// шаблон функции для вывода последовательности
	#include "iterPrint.h"
	
	// шаблон функции для поиска значения
	#include "findValue.h"
	
	int main() {
		double xMax, *array;
		int n;
		
		cout << "Введите размер массива: ";
		cin >> n;
		
		cout << "Введите максимально допустимое значение элементов массива: ";
		cin >> xMax;
		
		array = new double [n];
		
		for (int i = 0; i < n; i++)
			array[i] = rand() % int(xMax);
			
		iterPrint <3> (array, array + n);
		
		double xVal = 13, *result;
		
		result = findValue(array, array + n, xVal);
		cout << endl;
		
		if (result == 0) {
			cout << xVal << " отсутствует в массиве." << endl;
			return 0;
		}
		cout << "Индекс [" << xVal << "] - " << result - array << endl;
		return 0;
	}
