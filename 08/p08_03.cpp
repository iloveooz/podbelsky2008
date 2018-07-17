//p08_03.cpp - размещение в памяти объединения
	#include <iostream>

	using namespace std;

	int main () {
		union 	{ 
					long L; 
					char C[3];
					double D; 
				} UNI = { 10L };
		
		cout << "\nsizeof(UNI) = " << sizeof(UNI);
		cout << "\nsizeof(UNI.L) = " << sizeof(UNI.L);
		cout << "\nsizeof(UNI.C) = " << sizeof(UNI.C);
		cout << "\nsizeof(UNI.D) = " << sizeof(UNI.D);
		
		cout << "\n&UNI = " << &UNI;
		cout << "\n&UNI.L = " << &UNI.L;
		cout << "\n&UNI.C = " << &UNI.C;
		cout << "\n&UNI.D = " << &UNI.D;
		
		// cout << "\nUNI = " << UNI;
		// cout << "\nUNI.L = " << UNI.L;
		// cout << "\nUNI.C = " << UNI.C;
		// cout << "\nUNI.D = " << UNI.D;		
				
		cout << endl;
		return 0;
	}
