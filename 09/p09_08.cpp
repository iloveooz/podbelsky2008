//p09_08.cpp - дружественные классы
	#include <iostream>
	#include <cmath>
		
	using namespace std;

	// класс "точка на плоскости":
	class point {
		// координаты точки:
		double x, y;
		
		// описание дружественного класса:
		friend class vector;
		
	public:
		// конструктор "точек"
		point(double xi = 0.0, double yi = 0.0) : x(xi), y(yi)
		{	}
	};
	
	// класс "радиус-вектор":
	class vector {
		// начало вектора
		double xBeg, yBeg;
		// конец вектора
		double xEnd, yEnd;
		// длина вектора
		double norma;
		
	public:
		// конструктор "векторов"
		vector(point, point);
		
		// длина (норма) вектора
		double norm() { return norma; }
	};
	
	// внешнее определение конструктора
	vector::vector(point beg, point end) : xBeg(beg.x), yBeg(beg.y), xEnd(end.x), yEnd(end.y) {
		double dx, dy;
		dx = xEnd - xBeg;
		dy = yEnd - yBeg;
		
		norma = sqrt(dx * dx + dy * dy);	
	}
	
	int main() {
		point A(2.0, 4.0);
		point B(12.0, 14.0);
		
		vector V(A, B);
		
		cout << "\n Норма вектора: " << V.norm();

		cout << '\n';
		return 0;
	}
	
