//p11_05.cpp - "трудности" ресурсоёмких объектов (копирование)

	#include <iostream>
	using namespace std;
	#include "badpoint.h"
	
	int main() {
		badpoint temp (3, 0.33);
		
		// конструктор копирования
		badpoint real = badpoint(temp); 
		cout << "real: \t" << real;
		
		// явный вызов деструктора
		temp.~badpoint(); 
		
		cout << "real: \t" << real;
		return 0;
		
	}
		
