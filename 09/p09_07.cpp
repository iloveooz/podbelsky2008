//p09_07.cpp - классы с общей дружественной функцией
#include <iostream>

using std::cout;

// предварительное описание для того, чтобы корректно описать дружественную функцию
class line2; 

// класс "точка на плоскости"
class point2 {
	// координаты точки на плоскости
	double x, y;
	
	public:
	// конструктор
	point2(double xn = 0, double yn = 0) : x(xn), y(yn) 
	{	}
	
	friend double deviation(point2, line2);
};

// класс "прямая на плоскости"
class line2 {
	// параметры прямой
	double A, B, C;
	
	public:
	// конструктор
	line2(double a = 1, double b = 2, double c = 3) : A(a), B(b), C(c)
	{	}
	
	friend double deviation(point2, line2);
};

// внешнее определение дружественной функции
double deviation (point2 p, line2 line) {
	return line.A * p.x + line.B * p.y + line.C; 
}

int main () {
	// определение точки Р
	point2 P(16.0, 12.3);
	
	// определение прямой L
	line2 L(10.0, -42.3, 24.0);
	
	cout << "\n Уклонение точки P от прямой L: ";
	cout << deviation (P, L) << '\n';
	return 0;
}
