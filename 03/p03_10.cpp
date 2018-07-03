//p03_10.cpp - динамическое распределение памяти

	#include <iostream>
	
	using namespace std;
	
	int main() {
		int *i;
		i = new int(1);
		cout << "*i = " << *i << "\t i = " << i << endl;
		
		i = new int(5);
		cout << "*i = " << *i << "\t i = " << i << endl;
		
		i = new int(2 * *i);
		cout << "*i = " << *i << "\t i = " << i << endl;

		i = new int(2 * *i);
		cout << "*i = " << *i << "\t i = " << i << endl;
		
		delete i;
		
		cout << "После освобождения памяти: " << endl;
		cout << "*i = " << *i << "\t i = " << i << endl;
		
		delete i;
		
		cout << "*i = " << *i << "\t i = " << i << endl;
		return 0;
	}
		
