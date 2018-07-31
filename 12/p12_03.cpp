//Р12_03.cpp - исключения без передачи данных
	#include <iostream>
	
	using namespace std;
		
	class ZeroDivide {}; // Класс объектов-исключений
	class overflow {}; // Класс объектов-исключений
	
	// функция для деления значений параметров:
	double div(double n, double d)
	{
		if (d == 0.0 && n == 0.0) 
			throw 0.0;
		if (d == 0.0)
			throw ZeroDivide(); // Вызов констрyктора
	
		double b = n / d;
	
		if (b > 1e+30) 
			throw overflow(); // Вызов констрyктора
		return b;
	}
	
	// глобальные данные	
	double x = 1e-20, z = 1e+20, w = 0.0;
	
	// Вызывающая фyнкция с выявлением и обработкой исключений:
	// применение функции деления div
	void RR(void) { 
		// Контролирyемый блок;

		try {
			w = div(4.0, w);
			z = div(z, x);
			w = div(0.0, 0.0);
		}
		// Последовательность обработчиков исключений:

		catch (overflow) { 
			cerr << "\n Переполнение (overflow)"; 
			z = 1e+30;
			x = 1.0;
		}

		catch (ZeroDivide) { 
			cerr << "\n Деление на ноль! (ZeroDivide)"; 
			w = 1.0; 
		}
		
		catch (...) {
			cerr << "\n Неопределённость!" << endl;
		}
	}


	int main () { 
		// Вызов фyнкции div() с нyлевым делителем w:
		RR();

		// Вызов фyнкции div() с арифметическим переполнением
		RR();
		
		RR();
	
		// cout << "\n Result: y = " << y;
		// cout << "\n Result: z = " << z;
		// cout << '\n';
		return 0;
	}
