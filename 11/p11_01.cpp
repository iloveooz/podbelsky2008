//p11_01.cpp - перегрузка операций в классе комплексных чисел

	#include <iostream>
	#include "my_complex.h"
	
	using namespace std;
	
	int main() {
		myComplex beta(4.3, -6.1);
		myComplex gamma;
		myComplex alfa;
		
		myComplex delta;
		
		// operator >> (cin, gamma)
		cout << "Введите число gamma:" << endl;
		cin >> gamma;
		
		// operator + (beta, gamma)
		cout << "Складываем beta и gamma, получаем alfa:" << endl;
		alfa = beta + gamma;
		
		// operator << (cout, alfa)
		cout << "alfa: " << alfa;
		
		// alfa.operator-()
		cout << "Меняем знак у alfa:" << endl;
		alfa = -alfa;
		
		// operator >> (cin, delta)
		cout << "Введите число delta:" << endl;
		cin >> delta;
		
		// delta.operator-()
		cout << "Меняем знак у delta:" << endl;
		delta = -delta;
		
		
		// "chain"
		cout << "alfa: " << alfa << "beta: " << beta << "gamma: " << gamma << "delta: " << delta;
		
		cout << endl;
		return 0;
	}
	
