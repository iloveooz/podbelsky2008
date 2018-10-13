// последовательные контейнеры, обратные итераторы

	#include <iostream>
	#include <list>
	#include <string>
	
	using namespace std;
	
	#include "iterPrint.h"
	
	int main() {
		// массив строк
		string strArray[] = { "раз", "два", "три", "четыре", "пять", "шесть" };
		
		list <string> fig(strArray, strArray + 5);
		
		cout << "Список: " << endl;
		iterPrint <2> (fig.begin(), fig.end());
		
		cout << "Обратный список: " << endl;
		iterPrint <2> (fig.rbegin(), fig.rend());
		
		cout << endl;
		return 0;
	}
		
		
		
