//p11_04.cpp - операция присваивания и конструктор копирования

	#include <iostream>
	
	using namespace std;
	
	// класс "треугольник"
	class triangle {
		// длины сторон треугольника
		double a, b, c;
	public:
		// конструктор умолчания
		triangle (double an = 0.0, double bn = 0.0, double cn = 0.0) : a(an), b(bn), c(cn) { }
		
		// дружественная функция
		friend ostream & operator << (ostream &, triangle);
	};
	
	ostream & operator << (ostream &, triangle tr) {
		cout << "a = " << tr.a << "\tb = " << tr.b << "\tc = " << tr.c << endl;
	}
	
	int main() {
		triangle one, two(3.0, 4.0, 5.0);
		
		cout << "one: " << one;
		one.operator = (two); // equal one = two, неявный operator =
		
		cout << "one: "  << one;
		
		triangle res(two); // конструктор копирования
		
		cout << "res: "  << res;
		return 0;
	}
