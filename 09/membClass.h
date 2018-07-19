// membClass.h - определение функций класса member

	#ifndef _MEMB_CLASS_
	#define _MEMB_CLASS_
	
	#include <iostream>
	
	using std::cout;
	
	// включение спецификации класса
	#include "member.h"
	
	// добавление элемента в конец списка
	void member::add() {
		if (last_memb == 0) 
			this->prev = 0;
		else {
			last_memb->next = this;
			this->prev = last_memb;
		}
		last_memb = this;
		this->next = 0;
	}
	
	// вывод содержимого списка
	void member::reprint() {
		// вспомогательный указатель
		member *uk;
		uk = last_memb;
		if (uk == 0) {
			cout << " Список пуст!\n";
			return;
		}
		
		cout << " Содержимое списка: \n";
		
		// печать в обратном порядке значений элементов списка
		while (uk != 0) {
			cout << uk->letter << '\t';
			uk = uk->prev;
		}
		
		cout << '\n';
	}
	
	#endif
