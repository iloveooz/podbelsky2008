//p14_02.cpp - явное определение операции-функции для перегрузки

	#include <iostream>
	using namespace std;
	
	struct BAS {
		int b;
	};
	
	struct DIR : BAS {
		double d;
		
		// параметр функции - константная ссылка на объект производного класса
		DIR& operator = (const DIR& x) {
			// если присваивается сам себе, никаких действий не требуется, возвр. & на объект-операнд
			if (this == &x) return *this;
			
			BAS::operator = (x);
			this->d = 3.14159;
			return *this;
		}
	};
	
	int main() {
		// конструктор умолчания DIR()
		DIR one, two;
		BAS bas;
		
		one.b = 12;
		one.d = 8.8;
		
		one = bas;
		
		// выполняется DIR::operator = ()
		two = one;
		
		cout << "two.b = " << two.b << "\ttwo.d = " << two.d << endl;
		return 0;
	}
	
	
