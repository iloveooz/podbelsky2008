//realFigures.h - определения классов эллипс и квадрат

	// включаем абстрактный класс
	#include "figure.h"
	
	// ЭЛЛИПС - класс, производный от абстрактного figure
	struct ellipse : public figure {
		
		// универсальный конструктор
		ellipse (double xi = 0.0, double yi = 0.0, double dxi = 0.0, double dyi = 0.0) : 
			figure(xi, yi, dxi, dyi) { }
		
		virtual double area () {
			return (dx / 2) * (dy / 2) * 3.14159;
		}
		
		string className() {
			return string("ЭЛЛИПС");
		}
	};
	
	// КВАДРАТ - класс, производный от абстрактного figure
	struct square : public figure {
		
		// универсальный конструктор
		square (double xi = 0.0, double yi = 0.0, double dxi = 0.0, double dyi = 0.0) : 
			figure(xi, yi, dxi, dyi) { }
		
		virtual double area () {
			return (dx * dy);
		}
		
		string className() {
			return string("КВАДРАТ");
		}
	};
