//p06_20.cpp - ссылка и указатель на функцию
	#include <iostream>

	using namespace std;

	// определение функции
	void func (char c) {
		cout << "\n " << c << endl; 
	}

	int main () {
		void (*pf) (char); 			// указатель на функцию
		void (&rf) (char) = func; 	// ссылка на функцию
	  
		func('A');  // вызов по имени
	  
		pf = func;  // указателю присваивается адрес функции
		(*pf)('B'); // вызов по адресу с помощью указателя
		
		rf('C'); // вызов по ссылке
		return 0;
	}
