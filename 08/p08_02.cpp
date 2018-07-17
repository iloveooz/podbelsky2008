//p08_02.cpp - размещение в памяти элементов структуры
#include <iostream>

using namespace std;

int main () {
	struct 	{ 
				long L; 
				char C[3];
				double D;
			} 	STR = {10L, 'a', 'b', '\0', 20.3 };
	
	cout << "\n sizeof(STR) = " << sizeof(STR);
	cout << "\n sizeof(STR.C) = " << sizeof(STR.C);
	cout << "\n &STR.L = " << &STR.L << "  " << STR.L;
	cout << "\n &STR.C = " << &STR.C << "  " << STR.C;
	cout << "\n &STR.D = " << &STR.D << "  " << STR.D << endl;
	return 0;
}
