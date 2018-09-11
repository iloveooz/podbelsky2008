//p16_11.cpp - использование объектов точка

	#define PRINT(o) { cout << #o << ": "; cout << o << endl; }

	#include <iostream>
	using namespace std;
	
	#include "massPoint.h"
	
	int main() {
		// объекты в автоматической памяти
		massPoint <int, double> obj1;
		massPoint <double, double> obj2(1.1f, 2.2f, 3.3f, 4.4);
		massPoint <double, double> obj3 = obj2;
		massPoint <double, double> obj4 = massPoint <double, double> (4.4, 3.3, 3.3, 1.1);
		
		massPoint <int, int> massiv[3] = { massPoint <int, int> (11, 11, 11, 11), 
			massPoint <int, int> (22, 22, 22, 22), massPoint <int, int> (33, 33, 33, 33) };
		
		PRINT(obj1);
		PRINT(obj2);
		PRINT(obj3);
		PRINT(obj4);
		
		cout << endl;
		
		PRINT(massiv[0]);
		PRINT(massiv[1]);
		PRINT(massiv[2]);
		
		// объекты в динамической памяти: 
		// указатель
		massPoint <double, int> *point;
		
		// конструктор умолчания
		point = new massPoint <double, int>;
		
		PRINT(*point);
		delete point;
		
		// используем конструктор общего вида
		point = new massPoint <double, int> (5.5, 5.5, 5.5, 5.5);
		PRINT(*point);
		delete point;
		
		massPoint <int, int> *pointer;
		pointer = new massPoint <int, int> (1, 2, 3, 4);
		PRINT(*pointer);
		delete pointer;
		
		return 0;
	}
