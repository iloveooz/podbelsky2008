//p05_09.cpp - работа с элементами массива без скобок []
#include <iostream>

using namespace std;

int main( ) {
	char x[] = "DIXI DIZZY BUSY"; // Я сказал (Высказался)"
	
	int i = 0;
	
	while (*(x + i) != '\0')
	cout << *(x + i++) << '\n';;
	
	cout << endl;
	return 0;
}
