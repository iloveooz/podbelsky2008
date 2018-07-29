//p11_03.cpp - класс комплексных чисел с новыми операциями
	
	#include <iostream>
	#include "new_complex.h"
	
	using namespace std;
	
	int main() {
		// определение объектов - комплексных чисел
		myComplex beta(10, -10); // re = 10.0, im = -10.0
		myComplex gamma(-10, 10); // re = -10.0, im = 10.0 
		
		cout << "beta * gamma: " << beta * gamma;
		cout << "beta - gamma: " << beta - gamma;
		cout << "beta == gamma: " << (beta == gamma) << endl;
		cout << "-(beta - gamma): " << -(beta - gamma) << endl;
		 
		return 0;
	}
