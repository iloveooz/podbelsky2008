//p12_02.cpp - исключения пользовательского типа

	#include <iostream>
	#include <string>
	
	using namespace std;
	
	// класс объектов-исключений
	struct DATA {
		int n, m;
		string s;
		
		// конструктор
		DATA(int x, int y, string str) : n(x), m(y), s(str) { }
	};
	
	// определение функции
	int GCD_ONE (int x, int y) {
		if (x == 0 || y == 0) throw DATA(x, y, "НОЛЬ!");
				
		if (x < 0) throw DATA(x, y, "Отрицательный параметр 1");
		if (y < 0) throw DATA(x, y, "Отрицательный параметр 2");
		
		while (x != y) {
			if (x > y) x = x - y;
			else y = y - x;
		}
		
		return x;
	}
	
	int main() {
		try {
			cout << "GCD_ONE(66, 44) = " << GCD_ONE(66, 44) << endl;
			// cout << "GCD_ONE(0, 7) = " << GCD_ONE(0, 7) << endl;
			cout << "GCD_ONE(-6, 4) = " << GCD_ONE(-6, 4) << endl;
		}
		
		catch (DATA d) {
			cerr << d.s << ", x = " << d.n << ", y = " << d.m;
		}
		
		cout << '\n';
		return 0;
	}
