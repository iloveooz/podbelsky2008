//p09_05.cpp - связный список - указатель this

	#include <iostream>
	
	// определение класса member
	#include "membClass.h"
	
	using std::cout;
	
	// инициализация статического поля данных (указателя)
	member *member::last_memb = 0;
	
	int main() {
		// формированиеобъектов класса member
		member A('a');
		member B('b');
		member C('c');
		member D('d');
		
		// вызов статического метода
		member::reprint();
		
		// включение созданных объектов в двусвязный список
		A.add();
		B.add();
		C.add();
		D.add();
		
		// печать в обратном порядке значений элементов списка
		member::reprint();
		
		cout << '\n';
		return 0;
	}
	
		
