//p18_03.cpp - последовательные контейнеры, обмен значениями.

	#include <iostream>
	#include <list>
	#include <string>
	
	using namespace std;
	
	#include "iterPrint.h"
	
	int main() {
		// массив строк
		string strArray[] = { "раз", "два", "три", "четыре", "пять", "шесть" };
		
		// размер массива
		int count = sizeof(strArray) / sizeof(strArray[0]);
		
		// двусвязный список
		list <string>  fig1(strArray, strArray + count);
		
		cout << "list fig1: " << endl;
		iterPrint <2> (fig1.begin(), fig1.end());
		
		list <string> fig2(strArray, strArray + 2);
		
		swap(fig1, fig2);
		
		cout << "list fig1 после swap(): " << endl;
		iterPrint <2> (fig1.begin(), fig1.end());		
		
		cout << endl;
		return 0;
	}
