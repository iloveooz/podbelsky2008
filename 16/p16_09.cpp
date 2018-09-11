//p16_09.cpp - пользовательская специализация шаблона классов outPair <A>

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

	// явная специализация шаблона класса
	template < >
	class ourPair <char> {
		char x, y;
	public:
		ourPair(char xn = 'A', char yn = 'Z') : x(xn), y(yn) { }
		
		char getDiv(void) {
			return char (x > y ? y + x / y : x + y / x);
		}
		
		ourPair <char> operator + (ourPair <char> &p) {
			return ourPair <char> (x + p.x, y + p.y);
		}
		
		void display() {
			cout << "x = " << x << ", y = " << y << endl;
		}
	};
	
	int main() {
		ourPair <int> one, two(12, 5);
		cout << "one:\t"; 
		one.display();
		cout << "two.getDiv(): " << two.getDiv() << endl;
		
		// объекты создаются с использованием пользовательской специализации
		ourPair <char> ch1, ch2('B', 'y'), ch3('<', '!');
		cout << "ch1:\t";
		ch1.display();
		cout << "ch2:\t";
		ch2.display();
		cout << "ch3:\t";
		ch3.display();
		
		cout << "ch2.getDiv(): " << ch2.getDiv() << endl;
		
		ch3 = ch1 + ch3;
		
		cout << "ch1 + ch3:\t";
		ch3.display();
		
		return 0;
	}
