//p13_03.cpp - локализация класса

	#include <iostream>
	using namespace std;
	
	// внешняя функция
	int g() {
		return 22; 
	}
	
	// глобальная переменная
	int x;
	
	void f() {
		// локальная статическая переменная
		static int s = 37;
		
		// локальная автоматическая переменная
		int x = 0;
		
		// локальный класс
		struct local {
		
			// ошибка: х в автоматической памяти
			// int g() {return x; }
		
			// ОК - метод класса
			int g() {
				return s;
			}
		
		
			// ОК - обращение к статической S
			int h() {
				return s;
			}
		
			// ОК - обращение к глобальной х
			int k() {
				return ::x;
			}
		
			// ОК - обращение к методу
			int l() {
				return g();
			}
		
			// ОК - обращение к внешней функции
			int e() {
				return ::g();
			}
		};
		
		// ОК - массив объектов локального класса
		local array[8];
		cout << array[2].e() << '\t' << array[2].l() << endl;
		// ...
	}
		// ошибка: local вне видимости
		// local* p = 0;
		
		int main() {
			f();
			cout << x << endl;
			return 0;
		}
		
		
		
