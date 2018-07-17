//p08_01.cpp - структурный тип, структура и её поля
	#include <iostream>
	using namespace std;

	#define PRINT(c) cout << #c << " = " << c << endl;

	int main () {
		struct card { // определение структурного типа для книги
						char author[30]; // автор
						char title[80]; // название
						char city[20]; // место
						char firm[20]; // издательство
						int year; // год издания
						int pages; // количество страниц
					};

		card dictionary = { // инициализация структуры
			"Wiener R.S.", "Язык Турбо С", "Mосква", "Mup", 1991, 384
		};

		PRINT(dictionary.author);
		PRINT(dictionary.title);
		PRINT(dictionary.city);
		PRINT(dictionary.firm);
		PRINT(dictionary.year);
		PRINT(dictionary.pages);
		
		// PRINT(card.pages); - ошибочная конструкция
		
		cout << endl;
		return 0;
	}
