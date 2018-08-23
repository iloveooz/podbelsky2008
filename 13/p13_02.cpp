//p13_02.cpp - наследование классов

	#include <iostream>
	using namespace std;
	
	// класс "точка"
	class point {
		// координаты точки
		double x, y;
	public:
		point (double xi = 0.0, double yi = 0.0) : x(xi), y(yi) { }
		
		// перемещение точки
		void move(double dx, double dy) {
			x += dx;
			y += dy;
		}
		
		// вывод значений координат
		void display() {
			cout << "x = " << x << "\ty = " << y << endl;
		}
	};
	
	class ellipse : point {
		double dmin, dmax;
	public:
		ellipse (double xi, double yi, double din, double dax) : 
			point(xi, yi), dmin(din), dmax(dax) { }
		
		using point::move;
		
		void display() {
			cout << "Центр: \t";
			point::display(); 
			cout << "dmin = " << dmin << "\tdmax = " << dmax << endl;
		}
		
		double square() {
			return 3.14159 * dmin * dmax;
		}
	};
	
	int main() {
		ellipse oval(10, 20, 5.0, 12.0);
		// метод класса ellipse
		oval.display();
		// cout << oval.x << oval.y << endl; // ошибка
		
		// метод класса point
		oval.move(-10.0, -5);
		
		oval.display();
		cout << "Площадь эллипса = " << oval.square() << endl;
		
		cout << "sizeof(point) = " << sizeof(point) << endl;
		cout << "sizeof(ellipse) = " << sizeof(ellipse) << endl;
		
		return 0;
	}
