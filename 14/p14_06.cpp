//p14_06.cpp - нарушение и выполнение принципа подстановки

	#include <iostream>
	using namespace std;
	
	class circle {
	
	protected:
		double rad, len;
		int xc, yc;
	
	public:
		circle(double ri = 0.0, int xi = 0, int yi = 0) : 
			rad(ri), xc(xi), yc(yi), len(2 * 3.14159 * ri) { }
		
		void move(int dx, int dy) {
			xc += dx;
			yc += dy;
		}
		circle compress(double k) {
			rad *= k;
			len *= k;
			return *this;
		}
		
		friend ostream & operator << (ostream & out, const circle & cir);
	};
	
	ostream & operator << (ostream & out, const circle & cir) {
		out << "rad = " << cir.rad << ", len = " << cir.len << 
			", xc = " << cir.xc << ", yc = " << cir.yc << endl;
		return out;
	}
	
	class disk : public circle {
		double sqr;
	
	public:
		// конструктор общего вида
		disk(double ri = 0.0, int xi = 0, int yi = 0) : 
			circle(ri, xi, yi), sqr(3.14159 * ri * ri) {}
		
		// конструктор приведения типов
		disk(const circle & cir) : circle(cir) {
			sqr = 3.14159 * rad * rad;
			cout << "Площадь посчиталась!" << endl; 
		}
		
		disk compress(double k) {
			circle::compress(k);
			sqr *= k * k;
			return *this;
		}
		
		friend ostream & operator << (ostream & out, const disk & dis);
	};
	
	ostream & operator << (ostream & out, const disk & dis) {
		// вывод на экран инфы из объекта базового класса
		out << dynamic_cast<const circle &>(dis);
		
		out << "sqr = " << dis.sqr << endl;
		return out;
	}
	
	int main() {
		
		disk one(0.1), two;
		cout << "one: " << one;
		cout << "two: " << two;
		
		one.move(10, 5);
		cout << "one.move(10, 5): " << one;
		
		two = one.compress(100);
		cout << "two: " << two;
		
		cout << "one.compress(10): " << one.compress(10);
			
		return 0;
	}
