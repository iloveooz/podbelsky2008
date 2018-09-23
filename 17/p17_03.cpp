//p17_03.cpp - контейнер evenArray c объектами типа int
// итератор evenIter как внутренний класс контейнера

	#include <iostream>
	using namespace std;
	
	#include "evenArray.h"
	#include "iterPrint.h"
	
	int main() {
		// создание, заполнение и печать контейнера
		evenArray row;
		int d;
		
		cout << "Введите целые числа (0 - окончание ввода): " << endl;
		
		while (cin >> d, d != 0)
			row.push(d);
			
		iterPrint <3>(row.begin(), row.end());
		
		// определяем итератор, настроенный на начало последовательности:
		evenArray::evenIter etr(row.begin());
		
		// значением итератора станет &d[2]
		++etr;
		
		// выводится значение d[2]
		cout << *etr << endl;
		
		// значением итератора станет &d[0]
		etr = row.begin();
		
		// выводится значение d[0]
		cout << *etr << endl;
		
		// значением итератора станет &d[end]
		etr = row.end();
		
		// значением итератора станет &d[end - 2]
		--(--etr);		

		// выводится значение d[end -2]
		cout << *etr << endl;		
		
		return 0;
	}
	
