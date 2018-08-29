//p14_04.cpp - присваивание и конструкторы при наследовании

	#include <iostream>
	using namespace std;
	
	struct BAS {
		int b;
	};
	
	struct DIR : BAS {
		double d;
		
		// конструктор приведения типов
		DIR(const BAS& bi) : BAS(bi), d(2.71828) { }
	};
	
	int main() {
		// конструктор умолчания BAS
		BAS bas;
		// конструктор приведения типов
		DIR one(bas);
		
		bas.b = 10;
		one.d = 0.0;
		
		// правильно при наличии DIR (const BAS & bi)
		one = bas;
		
		cout << "one.b = " << one.b << "\tone.d = " << one.d << endl;
		return 0;
	}
