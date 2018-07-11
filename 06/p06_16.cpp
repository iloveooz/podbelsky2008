//p06_16.cpp - указатель на функцию как параметр функции
#include <iostream>
#include <сmath>

using namespace std;

// определение типа указателя на функцию
typedef double (*pointfunc)(double);

// определение функции для вычисления корня
double root(pointfunc F, double A, double B, double EPS) {
	double x, y, c, Fx, Fy, Fc;
	x = A; y = B;
	
	Fx = (*F)(x); // значение функции на левой границе интервала
	Fy = (*F)(y); // значение функции на правой границе интервала

	if ( Fx * Fy > 0.0 || x > y) { 
		cout << "\n Неверен интервал локализации!" << endl;
		exit(1);  // аварийное завершение программы
    }
	
	do {
		c = (y + x) / 2; // центр интервала локализации
		Fc = (*F)(c); // значение функции в с
		
		if (Fc * Fx > 0) { x = c; Fx = Fc; }
			else { y = c; Fy = Fc; };

    }	
    while (Fc != 0 && y - x > EPS);
	return c;
}
// определение текстовой функции
double textfunc(double x)	{ return x * x - 1;}

int main () {
	double root(pointfunc, double, double, double); // прототип
	
	double result;
	
	result = root(textfunc, 0.5, 2.0, 1e-5);
  
	cout << "\n Корень текстовой функции: " << result << endl;
	return 0;
}
