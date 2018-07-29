//p11_02.cpp - неявные и явные вызовы операций-функций для ++ и --

	#include <iostream>
	#include "my_pair.h"
	
	using namespace std;
	
	int main() {
		myPair set(3, 3.0);
		
		cout << "set: " << set;
		
		// operator++(set)
		cout << "++set: " << ++set;
		
		// set.operator++(0)
		cout << "set++: " << set++;
		
		// set.operator--()
		cout << "--set: " << --set;
		
		// operator--(set, 0)
		cout << "set--: " << set--;
		
		// operator++(set)
		cout << "operator++(set): " << operator++(set);
		
		// set.operator++(0)
		cout << "set.operator++(0): " << set.operator++(0);
		
		// set.operator--()
		cout << "set.operator--(): " << set.operator--();
		
		// operator--(set, 0)
		cout << "operator--(set, 0): " << operator--(set, 0);
		
		cout << endl;
		return 0;
	}
		
		
