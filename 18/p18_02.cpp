//p18_02.cpp - последовательные контейнеры, сравнение

	#include <iostream>
	#include <deque>
	
	using namespace std;
	
	// шаблон функций для вывода последовательности
	#include "iterPrint.h"
	
	int main() {
		int ira[] = { 10, 20, 30, 40, 50, 60, 70, 80, 90 };
		
		deque <double> deq1(ira, ira + sizeof(ira) / sizeof (ira[0]));
		
		cout << "Двусторонняя очередь deq1: " << endl;
		
		// вывод на экран 
		iterPrint <2> (deq1.begin(), deq1.end());
		
		deque <double> deq2(ira, ira + 5);
		deque <double> deq3;
		
		if (deq1 < deq2) 
			deq3 = deq1;
		else
			deq3 = deq2;
		
		cout << "Итоговая очередь deq3: " << endl;
		
		iterPrint <2> (deq3.begin(), deq3.end());
		cout << endl;
		return 0;
	}
	
