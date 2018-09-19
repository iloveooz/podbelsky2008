//p01_02.cpp - ввод данных в цикле

	#include <iostream>
	
	using namespace std;
	
	int main () {
		int x, summa = 0, counter = 0;
		
		cout << "Введите целые числа (0 - конец ввода): " << endl;
		
		while (cout << "x" << counter + 1 << " = ", cin >> x, x != 0) {
			counter++;
			summa += x;
		}
		
		cout << "counter = " << counter << ", summa = " << summa << endl;
		
		return 0;
	}
