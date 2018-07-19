//p09_01.cpp - массив объектов класса goods
	#include <iostream>
	#include "goods.h"
	
	using namespace std;
	
	// инициализация статического компонента
	int goods::percent = 12;

	int main () {
		goods wares[] = {
			{ "Мужской костюм", 2300 },
			{ "Косметический набор", 276 },
			{ "Компьютер", 27000 },
			{ "Очки", 280 },
			{ "Кроссовки", 2040 }
		};

		int k = sizeof(wares) / sizeof(wares[0]);

		cout << "k = " << k << endl;

		cout << "\nСписок товаров при наценке " << wares[0].percent << '%';
		for (int i = 0; i < k; i++) wares[i].Display();
	
		// изменение статического компонента
		goods::percent = 10;

		cout << "\n\nСписок товаров при наценке " << wares[0].goods::percent << '%';
		goods *pGoods = wares;
		for (int i = 0; i < k; i++) pGoods++ -> Display();

		cout << endl;
		return 0;
	}
	
