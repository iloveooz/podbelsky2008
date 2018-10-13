//p18_11.cpp - применение алгоритма for_each к массиву и вектору

	#include <iostream>
	#include <algorithm>
	#include <vector>
	
	using namespace std;
	
	// функция для вывода элемента последовательности
	void printOne(const int & c) {
		cout << c << ' ';
	}
	
	// функция для изменения элемента последовательности
	void div10(int &e) {
		e /= 10;
	}
	
	int main() {
		int ira[] = { 10, 20, 30, 40, 50, 60, 70, 80, 90 };
		for_each(ira, ira + sizeof(ira) / sizeof(ira[0]), printOne);
		
		cout << endl;
		
		vector <int> series(ira, ira + sizeof(ira) / sizeof(ira[0]));
		for_each(series.begin(), series.end(), printOne);
		
		cout << endl;
		
		for_each(series.begin(), series.end(), div10);
		for_each(series.begin(), series.end(), printOne);
		
		cout << endl;
		
		return 0;
		
	}
	
	
		
