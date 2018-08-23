//p13_01.cpp - включение классов

	#include <iostream>
	using namespace std;
	
	// класс "точка"
	class point {
		double x;
		double y;
	public:
		// конструктор общего вида, конструктор приведения типов, конструктор умолчания
		point (double xi = 0.0, double yi = 0.0) : x(xi), y(yi) { }
		
		friend ostream & operator << (ostream& out, point p);
	};
	
	ostream & operator << (ostream & out, point p) {
		out << "x = " << p.x << ", y = " << p.y;
		return out;
	}
	
	// класс "окружность"
	class circle {
		point center;
		double radius;
	public:
		// конструктор, center(c) - вызов конструктора копирования
		circle (point c, double r) : center(c), radius(r) { } 
		
		// конструктор, center(xi, yi) - обращение к конструктору общего вида 
		circle (double xi, double yi, double r) : center(xi, yi), radius(r) { }
		
		friend ostream & operator << (ostream & out, circle cir);
	};
	
	ostream & operator << (ostream & out, circle cir) {
		out << "Центр окружности: " << cir.center;
		out << ", радиус окружности: " << cir.radius << endl;
		return out;
	}

	int main() {
		point tip;
		circle oval(tip, 12.0);
		cout << oval;
		
		circle obod(10, 20, 2.0);
		cout << obod;
		
		cout << "sizeof(tip) = " << sizeof(tip) << endl;
		cout << "sizeof(oval) = " << sizeof(oval) << endl;
		cout << "sizeof(obod) = " << sizeof(obod) << endl;
		return 0;
		
	}
