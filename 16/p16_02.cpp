//p16_02.cpp - одноимённые параметр шаблона и переменная

	#include <iostream>
	using namespace std;
	
	// инициализирована по умолчанию нулевым значением
	int N;
	
	// функция определяет максимальное из двух значений параметров
	template <typename N>
	N myMax(N x, N y) {
		N a = x;
		cout << "Счётчик обращений N = " << ++::N << endl;
		if (a < y) a = y;
		return a;
	}
	
	int main() {
		int a = 12, b = 42;
		cout << "myMax(a, b) = " << myMax(a, b) << endl;
		
		double z = 66.3, f = 222.4;
		cout << "myMax(z, f) = " << myMax(z, f) << endl;
		return 0;
	}
