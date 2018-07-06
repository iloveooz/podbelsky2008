//p05_01.cpp - указатели разных типов
#include <iostream>

using namespace std;

int main() {
	unsigned int I = 0x12345678;
		
	char *cp = (char *)&I; // *cp равно 0x78
	int *ip = (int *)&I;   // *ip равно 0x5678

	cout << "sizeof *cp = " << sizeof *cp << '\n';
	cout << "sizeof *ip = " << sizeof *ip << '\n';
	
	cout << hex; // шестнадцатеричное представление выводимых значений
	
	cout << "\nАдрес \'I\' (&I) = " << &I;
	cout << "\nip = " << (void *)ip << "\t*ip = 0x" << *ip << '\n';
	
	for (; cp < (char *)ip + 4; cp++) {
		cout << "cp = " << (void *)cp << "\t*cp = 0x" << (int)*cp << '\n';
	}
	return 0;
}
