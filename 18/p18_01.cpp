//p18_01.cpp - последовательные контейнеры. конструкторы

	#include <iostream>
	#include <vector>
	#include <list>
	
	using namespace std;
	
	int main() {
		int ira[] = { 10, 20, 30, 40, 50, 60, 70, 80, 90 };
		
		vector <double> series(ira, ira + sizeof(ira) / sizeof (ira[0]));
		
		// CT K(beg, end)
		list <long double> myList(series.begin(), series.end() - 4);
		list <long double> oneList(series.begin(), series.begin() + 5);
		
		// CT K1(K2)
		list <long double> twoList(myList);
		
		// возвращает число элементов
		cout << "twoList.size() = " << twoList.size() << endl;
		
		// возвращает максимально-возможное число элементов в контейнере
		cout << "twoList.max_size() = " << twoList.max_size() << endl;
		
		// возвращает размер типа контейнера
		cout << "sizeof(twoList) = " << sizeof twoList << endl;
		
		cout << endl;
		return 0;
	}
