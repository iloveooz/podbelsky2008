//p10_01.cpp - работа со строками в стиле C++

	#include <iostream>
	#include <string>
	
	#define integer int
	
	using namespace std;
	
	integer main() {
		string name("Введите ваше имя: ");
		string surname("Введите вашу фамилию: ");
		
		// конструктор умолчания
		string result; 
		
		// выводим подсказку и вводим имя
		cout << name;
		cin >> name;
		
		// выводи подсказку и вводим фамилию
		cout << surname;
		cin >> surname;
		
		result = "Hello, " + name + " " + surname + "!";
		cout << result << endl;
		
		cout << name.max_size() << endl;
		
		return 0;
	}

