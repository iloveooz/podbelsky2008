//p11_07.cpp - копирование и присваивание ресурсоёмких объектов

	#include <iostream>
	using namespace std;
	#include "nPoint.h"
	
	int main() {
		nPoint temp (3, 0.33);
		
		// конструктор копирования
		nPoint real = nPoint(temp); 
		cout << "real: \t" << real;
		
		// явный вызов деструктора
		temp.~nPoint(); 
		
		cout << "real: \t" << real;
		
		
		// определяем объект
		nPoint one (2, 12.3);
		
		{
			// вложенный блок
			// определяем объект
			nPoint two; 
			
			// присваивание
			two = one;
			cout << "two: \t" << two;
		
		} // неявный вызов деструктора
				
		cout << "one: \t" << one;
		
		return 0;
		
	}
		
