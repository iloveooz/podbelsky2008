//p11_06.cpp - "трудности" ресурсоёмких объектов (присваивание)

	#include <iostream>
	using namespace std;
	#include "badpoint.h"
	
	int main() {
		// определяем объект
		badpoint one (2, 12.3);
		
		{
			// вложенный блок
			// определяем объект
			badpoint two; 
			
			// присваивание
			two = one;
			cout << "two: \t" << two;
		
		} // неявный вызов деструктора
				
		cout << "one: \t" << one;
		return 0;
		
	}
		
