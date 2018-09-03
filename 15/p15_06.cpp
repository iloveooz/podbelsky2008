//p15_06.cpp - массивы и списки указателей на абстрактные классы

	#include <iostream>
	using namespace std;
	
	#include "realFigures.h"
	
	// функция печати значений объектов производных классов:
	void display(figure *fig[], int k) {
		for(int i = 0; i < k; i++) cout << *fig[i] << endl;
	}
	
	int main() {
		ellipse A(10.0, 8.0, 20.0, 20.0), B(6.0);
		square C(1.2, 3.3, 5.0, 6.0), D(12, 80), E;
	
		E = C;
		
		// массив указателей на объекты абстрактного класса
		figure *ar[] = {&A, &B, &C, &D, &E};
	
		cout << "Массив объектов:" << endl;
	
		display(ar, 5);
		cout << endl;
		return 0;
	}
