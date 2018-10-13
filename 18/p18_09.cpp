//p18_09.cpp - функторы и последовательные контейнеры

	#include <iostream>
	#include <vector>
	
	using std::cout;
	using std::endl;
	using std::vector;
	
	#include <algorithm>
	#include "functorFib.h"
	
	#define PRINT_ELEM(CONT,IT) \
		for (IT = CONT.begin(); IT != CONT.end(); ++IT) cout << *IT << '\t'; \
		cout << endl;
	#define NUM 7
	
	int main() {
		functorFib fib(2, 3);
		
		vector <int> series1(NUM);	
		vector <int> series2(NUM);	
		
		vector <int>::iterator is;
		
		generate(series1.begin(), series1.end(), functorFib(-1, -2));
		generate(series2.begin(), series2.end(), fib);
		
		PRINT_ELEM(series1, is);
		PRINT_ELEM(series2, is);
		
		return 0;
	}
	
