//p17_07.cpp - обобщенные алгоритмы и контейнер

	#include <iostream>
	#include <vector>
	#include <cstdlib>
	using namespace std;
	
	#include "iterPrint.h"
	#include "findValue.h"
	
	const int DIMENSION = 25;
	
	int main() {
		// инициализация случайных чисел
		srand(time(NULL));
		
		// определение вектора
		vector <int> variety;
		
		// предельное значение элементов
		int xMax = 100;
		int SN = 10;
		
		for (int i = 0; i < DIMENSION; i++) 
			// добавление элемента
			variety.push_back(rand() % xMax);
		
		iterPrint <7> (variety.begin(), variety.end());
		
		// определение итератора
		vector <int>::iterator iT;
		
		iT = findValue <>(variety.begin(), variety.end(), SN);
		
		cout << "Поиск элемента: [" << iT - variety.begin() << "] = " << *iT << endl;
		return 0;
	}
	
	
