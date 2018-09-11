//p16_06.cpp - шаблоны классов

	#include <iostream>
	using namespace std;

	template <typename A>
	class ourPair {
		A x, y;
	public:
		// конструктор
		ourPair(A xn = A(0), A yn = A(1)) : x(xn), y(yn) { }
		
		// возвращает частное от деления полей данных объекта
		A getDiv(void) {
			return A(x / y);
		}
		
		// перегрузка операции сложения
		ourPair <A> operator + (ourPair <A> &p) {
			return ourPair <A> (x + p.x, y + p.y);
		}
		
		// вывод данных
		void display() {
			cout << "x = " << x << ", y = " << y << endl;
		}
		
		// деструктор (автоматически, динамических данных нет), КК и ОФ присваивания авто
	
	};
	
	template <typename B>
	class oneSpot {
		B i, j, k;
	public:
		// конструктор класса
		oneSpot(B ii = B(0), B jj = B(0), B kk = B(0)) : i(ii), j(jj), k(kk) { } 
		
		// возвращает сумму полей данных
		B getSum(void) {
			return B(i + j + k);
		}
		
		// перегрузка операции сложения
		oneSpot <B> operator + (oneSpot <B> &s) {
			return oneSpot <B> (i + s.i, j + s.j, k + s.k);
		}
		
		// перегрузка операции вычитания
		oneSpot <B> operator - (oneSpot <B> &s) {
			return oneSpot <B> (i - s.i, j - s.j, k - s.k);
		}
		
		// вывод данных
		void display() {
			cout << "i = " << i << ", j = " << j << ", k = " << k << endl;
		}
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
		one = one + two;
		
		cout << "one:\t";
		one.display();
		
		// объект другого класса
		ourPair <double> next(10.0, 3.0);
		cout << "next.getDiv() = " << next.getDiv() << endl << endl;
		
		oneSpot <int>three(5, 6, 7);
		oneSpot <int>four (-10, -12, -14);
		
		cout << "one:\t";
		one.display();
		
		cout << "two:\t";
		two.display();
		
		cout << "next:\t";
		next.display();
		
		cout << "three:\t";
		three.display();
		
		four = four - three;
		
		cout << "four:\t";
		four.display();
				
		return 0;
	}
		
		
