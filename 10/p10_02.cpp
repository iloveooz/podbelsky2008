//p10_02.cpp - работа со строками в стиле С++

	#include <iostream>
	#include <string>
	
	using namespace std;
	
	int main() {
		
		// конструктор умолчания
		string line, str, result;
		
		// выводим подсказку
		cout << "Введите строку: ";
		
		// читаем данные
		cin >> line;
		
		cout << line.length() << endl;
		cout << line.at(3) << endl; // если строка будет меньше 3, прога упадёт
		
		// цикл по всем символам
		for (int i = 0; i < line.length(); i++) {
		
			// присваивание символа
			str.assign(5, line.at(i));
			// добавление пробела
			result.append(str + ' ');
		}
		
		// вывод результата
		cout << result << endl;
		return 0;
	}
		
		
