//p18_06.cpp - вставки в последовательные контейнеры

	#include <iostream>
	#include <deque>
	
	using namespace std;
	
	#include "iterPrint.h"
	
	int main() {
		deque <int> myDeque;
		int z;
		
		cout << "Введите целые числа (0 - конец ввода): " << endl;
		while (cin >> z, z != 0)
			myDeque.insert(myDeque.begin(), z);
			
		cout << "MyDeque: " << endl;
			
		iterPrint <2> (myDeque.begin(), myDeque.end());
		return 0;
	}
