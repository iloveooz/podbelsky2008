//p01_03.cpp - строки в стиле c++

	#include <iostream>
	#include <string>
	
	using namespace std;
	
	int main () {
		string response = "Введите ваше имя:";
		cout << response << endl;
		
		string name;
		cin >> name;
		
		string greeting = "Hello, ";
		greeting = greeting + name + "!";
		
		cout << greeting << endl;
		
		return 0;
	}
