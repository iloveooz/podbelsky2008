//p16_01.cpp - шаблон функций для поиска в массиве

	#include <iostream>
	using namespace std;
	
	// шаблонная функция, которая определяет ссылку на элемент с максим. значением
	template <typename type>
	type & rmax(int n, type d[]) {
		int im = 0;
		for(int i = 1; i < n; i++) 
			im = d[im] > d[i] ? im : i;
		return d[im];
	}
	
	int main() {
		int n = 4;
		int x[] = { 10, 20, 30, 14 };
		
		// аргумент - целочисленный массив:
		cout << "rmax(n, x[]) = " << rmax(n, x) << endl;
		
		// обращение с целочисленным массивом
		// правостороннее присваивание, максимальный элемент массива обнуляется
		rmax(n, x) = 0;
		
		for(int i = 0; i < n; i++) 
			cout << "x[" << i << "] = " << x[i] << '\t';
		cout << endl;
			
		double arx[] = { 10.3, 20.4, 10.5 };
		
		// аргумент - целочисленный массив:
		cout << "rmax(n, arx[]) = " << rmax(3, arx) << endl;
		
		// обращение с вещественночисленным массивом
		// правостороннее присваивание, максимальный элемент массива обнуляется
		rmax(3, arx) = 0;
		
		for(int i = 0; i < 3; i++) 
			cout << "arx[" << i << "] = " << arx[i] << '\t';
		cout << endl;	
		return 0;
	}
	
