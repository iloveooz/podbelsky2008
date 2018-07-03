//p03_09.cpp - инициализация и существование локальных статических объектов
#include <iostream>

using namespace std;

int counter() // Определение функции
{ static int K;   // Статическая переменная, локализованная в теле функции
  return ++K;
}

int main() {  
	// Прототип функции
	int K = 3;          // Локальная переменная функции main
	
	for (; K != 0; K--) {
		cout << "\n Автоматическая K = " << K;
		cout << "\tСчётчик = " << counter();
	}

cout << endl;  
return 0;
}
