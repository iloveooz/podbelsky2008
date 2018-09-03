//figure.h - абстрактный класс "фигура на плоскости"

	#include "point.h"
	#include <string>
	
	using namespace std;
	
	class figure : public point {
		
	// защищённые поля данных
	protected:
		// габариты фигуры (размеры вдоль осей)
		double dx, dy;
	
	// методы класса	
	public:
		// универсальный конструктор
		figure(double xi = 0.0, double yi = 0.0, double dxi = 0.0, double dyi = 0.0) :
			point (xi, yi), dx(dxi), dy(dyi) { }
		
		// изменить на заданную величину габариты:
		void grow(double d) {
			dx += d;
			dy += d;
		}
		
		// вычислить площадь (ещё неизвестной!) фигуры:
		virtual double area() = 0;
		
		// получить название фигуры:
		virtual string className() = 0;
		
		friend ostream & operator << (ostream & out, figure &);
	};
	
	ostream & operator << (ostream & out, figure & fig) {
		out << fig.className() << " ->\tcenter: x = " << fig.x << ", y = " << fig.y;
		out << ";\n\t\tdx = " << fig.dx << ", dy = " << fig.dy << ";\n\t\tarea = " << fig.area();
		return out;
	}
