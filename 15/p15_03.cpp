//p15_02.cpp - присваивания при наследовании

	#include <iostream>
	using namespace std;
	
	class BAS {
		int k;
	public:
		BAS(int ki = 0) : k(ki) { }
		
		// виртуальная операция-функция присваивания
		virtual BAS & operator = (const BAS & b) {
			k = b.k;
			return *this;
		}
		
		friend ostream & operator << (ostream & out, const BAS & b);
	};
	
	class DIR : public BAS {
		double z;
	public:
		DIR(int ki = 0, double zi = 0.0) : BAS(ki), z(zi) { }
		
		// виртуальная операция-функция присваивания
		virtual DIR & operator = (const BAS & d) {
			this->BAS::operator = (d);
			const DIR & r = dynamic_cast<const DIR &>(d);
			z = r.z;
			return *this;
		}
		
		friend ostream & operator << (ostream & out, const DIR & d);
	};
	
	ostream & operator << (ostream & out, const BAS & b) {
		out << "k = " << b.k << endl;
		return out;
	}
	
	ostream & operator << (ostream & out, const DIR & d) {
		out << "BAS:: ";
		
		// повышающее приведение
		out << dynamic_cast<const BAS &>(d);
		out << "DIR::z = " << d.z << endl;
		return out;
	}
	
	int main() {
		// объекты производного класса
		DIR one(15, 4.0), two;
		
		// указатели базового класса
		BAS *p1 = &one;
		BAS *p2 = &two;
		
		// присваивание только полей базового класса!!!
		*p2 = *p1;
		cout << "two: " << endl;
		cout << two << endl;
		
		// всё правильно!
		two = one;
		
		cout << "two: " << endl;
		cout << two << endl;
		return 0;
	}
	
	
