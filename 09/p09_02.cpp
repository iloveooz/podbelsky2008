//p09_02.cpp - статические поля данных и деструктор

	#include <iostream>
	#include "symbol.h" // класс "символьный элемент"

	using std::cout;

	int symbol::Amount = 0;
	int symbol::Counter = 0;

	int main() {
		symbol A;
		symbol B('b');
		
		A.display(); // Number == 1, Amount == 2
		
		{ // вложенный блок
			symbol C('c');
			symbol *ptr = new symbol('*');
			
			ptr->display(); // Number == 4, Amount == 4
			delete ptr; // неявно вызван деструктор ptr->~symbol()
		}	// неявно вызван деструктор C.~symbol()
		
		symbol D('d'); // Number == 5, Amount == 3
		D.display();
				
		cout << '\n';
		return 0; // неявно вызван деструктор для D, B, A
	}

