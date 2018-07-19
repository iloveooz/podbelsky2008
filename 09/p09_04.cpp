//p09_04.cpp - рациональная дробь - применение методов
	
	#include <iostream>
	#include "fraction.h"
	
	int main() {
		fraction one(1, 2), two(1, 3), sum;
		
		sum = one.add(two);
		sum.print();
		
		fraction error(12, 0);
		
		cout << '\n';
		return 0;
	}
