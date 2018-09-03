//p15_05.cpp - объекты классов, производных от figure

	#include <iostream>
	#include "realFigures.h"
	
	using namespace std;
	
	int main() {
		ellipse A(10.0, 8.0, 20.0, 20.0), B;
		cout << "Объект А: \n" << A << endl;
		
		A.move(5.0, 5.0);
		cout << "А.move(5.0, 5.0): \n" << A << endl;
		
		A.grow(-18.0);
		
		B = A;
		cout << "Объект B: \n" << B << endl;		
		
		square C(1.0, 3.0, 5.0, 6.0), D;
		cout << "Объект C: \n" << C << endl;
		
		C.grow(-5.0);
		cout << "C.grow(-5.0): \n" << C << endl;
		
		D.move(-10, 50);
		cout << "D.move(-10, 50): \n" << D << endl;		
		
		// ficha
		operator << (cout, D) << endl;
		
		D.grow(10.0);
		cout << "D.grow(10.0): " << endl;
		
		cout << "D.className(): " << D.className() << ",\t" << "D.area() = " << D.area();
		
		cout << endl;
		return 0;
	}
