//p6-03.cpp - индексация конца переменного списка параметров
#include <iostream>
#include <cstdarg>

using namespace std;

// фукнция вычисляет произведение параметров
double product (double par, ...) {
	
	if (par == 0.0) return 0.0;
	
		// double aa = 1.0;  // формируемое произведение
	double prod = par;  // формируемое произведение
	
		// double *ptr = &arg;  // настроили указатель на первый параметр
	double arg; // очередной (не первый) аргумент
	
	va_list ptr; // указатель для списка параметров
	va_start (ptr, par); // настроились на второй параметр
	
		// if (*ptr == 0.0) return 1.0;
		// for(; *ptr; ptr++) aa *= *ptr;
	
	while (arg = va_arg(ptr, double))
		prod *= arg;
	
	return prod;
}

int main () {
	// double prod(double, ...); // прототип функции
  
	cout << "\n prod(2e0, 4e0, 3e0, 0e0) = " << product(2e0, 4e0, 3e0, 0e0);
	cout << "\n prod(1.5, 2.0, 3.0, 0.0) = " << product(1.5, 2.0, 3.0, 0.0);
	cout << "\n prod(1.4, 3.0, 0.0, 16.0, 84.3, 0.0) = " << product(1.4, 3.0, 0.0, 16.0, 84.3, 0.0);
	cout << "\n prod(0e0) = " << product(0e0) << endl;
	return 0;
}
