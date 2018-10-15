//p19_01.cpp - форматирование при выводе

	#include <iostream>
	
	using namespace std;
	
	void arPrint(int len, double ar[], int wid) {
		for(int i = 0; i < len; i++) {
			//  минимальная ширина поля
			cout.width(wid);
			cout << ar[i];
		}
		cout << endl;
	}
	
	int main() {
		double dar[] = { -12e-2, +34, -5678, 91.23 };
		int arLen = sizeof(dar) / sizeof(dar[0]);
		arPrint(arLen, dar, 1);
		
		cout.setf(ios::scientific);
		arPrint(arLen, dar, 1);
		
		// символ для заполнения пустых позиций
		cout.fill(' ');
		
		cout.setf(ios::left, ios::floatfield | ios::adjustfield);
		arPrint(arLen, dar, 12);
		
		cout.setf(ios::internal, ios::floatfield | ios::adjustfield);
		arPrint(arLen, dar, 12);
		
		cout.precision(2);
		cout.setf(ios::scientific | ios::right);
		arPrint(arLen, dar, 12);
		
		return 0;
	}
	
	
	
