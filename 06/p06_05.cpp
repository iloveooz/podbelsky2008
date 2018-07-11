//p06_05.cpp - рекурсия при определении корня математической функции
	#include <iostream>
	#include <cmath>

	using namespace std;

	static int counter = 0; // счётчик обращений к текстовой функции

	// определение текстовой функции
	double f(double x) { 
		extern int counter;
		counter++;    // счётчик обращений
		return (2.0 / x * cos(x / 2.0)); 
	}

	// рекурсивная функция для поиска корня математической функции f() методом деления пополам:
	double recRoot(double a, double b, double eps) { 
		double fa = f(a), fb = f(b), c, fc;
		if (fa * fb > 0) {
			cout << "\n Неверен интервал локализации корня!";
			exit(1);
		}
		
		c = (a + b) / 2.0;
		fc = f(c);
		
		if (fc == 0.0 || b - a < eps) return c;
		
		return (fa * fc < 0.0) ? recRoot(a, c, eps) : recRoot(c , b, eps);
	}

	int main () {
		double root, a = 0.1, // левая граница интервала
		b = 4.5,  // правая граница интервала
		eps = 5e-5;  // точность локализации корня
		
		root = recRoot(a, b, eps);
		cout << "\nЧисло обращений к текстовой функции = " << counter;
		cout << "\nКорень = " << root << endl;
		return 0;
	}	
