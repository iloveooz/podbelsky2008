//p14_01.cpp - базовый и производный классы

	#include <iostream>
	using namespace std;
	
	struct BAS {
		int b;
	};
	
	struct DIR : BAS {
		double d;
	};
	
	int main() {
		// конструктор умолчания DIR()
		DIR one, two;
		
		one.b = 12;
		one.d = 8.8;
		
		// выполняется DIR::operator = ()
		two = one;
		
		cout << "two.b = " << two.b << "\ttwo.d = " << two.d << endl;
		return 0;
	}
	
	
