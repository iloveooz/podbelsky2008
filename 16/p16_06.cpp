//p16_06.cpp - шаблоны классов

	#include <iostream>
	using namespace std;

	template <typename A>
	class ourPair {
		A x, y;
	public:
		ourPair(A xn = A(0), A yn = A(1)) : x(xn), y(yn) { }
		
		// возвращает частное от деления полей данных объекта
		A getDiv(void) {
			return A(x / y);
		}
		
		// перегрузка операции сложения
		ourPair <A> operator + (ourPair <A> &p) {
			return ourPair <A> (x + p.x, y + p.y);
		}
		
		void display() {
			cout << "x = " << x << ", y = " << y << endl;
		}
		
		// деструктор (автоматически, динамических данных нет), КК и ОФ присваивания авто
	
	};
	
	int main () {
		// два объекта одного класса
		ourPair <int> one, two(12, 5);
		cout << "one:\t";
		
		// one.ourPair <int>::display();
		one.display();
		
		cout << "two.getDiv() = " << two.getDiv() << endl;
		
		//one.ourPair <int>::operator = (two)
		one = two;
		
		cout << "one:\t";
		one.display();
		
		// one = one.ourPair<int>::operator + (two)
		one = one - two;
		
		cout << "one:\t";
		one.display();
		
		// объект другого класса
		ourPair <double> next(10.0, 3.0);
		cout << "next.getDiv() = " << next.getDiv() << endl;
				
		return 0;
	}
		
		
