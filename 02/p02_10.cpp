//p02_10.cpp - изменение видимости внешней переменной
#include <iostream>

using namespace std;

int k = 15;

int main() {
	int k = 10;
	cout << "\n Внешняя переменная k = " << ::k;
	cout << "\n Внутренняя переменная k = " << k;
  
	::k = 0;
  
	cout << "\n Внешняя переменная k = " << ::k;
	cout << "\n Внутренняя переменная k = " << k;
	cout << '\n';
	return 0;
}
