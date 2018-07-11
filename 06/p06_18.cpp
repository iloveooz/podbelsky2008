//p06_18.cpp - обращение к значению переменной по ссылке
#include <iostream>

using namespace std;

int main () {
	long z = 12345678l;  // выделяется память для переменной
	long &sz = z;       // определяется синоним для z
  
	cout << "\n sz = " << sz << "\t z = " << z;
	
	z = 87654321l;
  	cout << "\n sz = " << sz << "\t z = " << z;
	
	z = 0;
	cout << "\n sz = " << sz << "\t z = " << z << endl;
	
	return 0;
}
