	#include <iostream>
	#include <string>
	#define integer int
	using namespace std;
	integer main() {
		string name("Введите ваше имя: ");
		string surname("Введите вашу фамилию: ");
		string result; 
		cin >> name;
		cin >> surname;
		cout << name.max_size() << endl;
