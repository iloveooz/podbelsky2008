//p09_06.cpp - класс с дружественной функцией
	#include <iostream> 	// cout, cin, 
	
	using std::cout;
	using std::cin;
	
	// класс - "символ в заданной позиции экрана"
	class charlocus {
		// координата знакоместа на экране дисплея
		int x, y; 
		
		// значение символа связанного со знакоместом:
		char cc;
		
		// прототип дружественной функции для замены символа:
		friend void friend_put(charlocus *, char);
		
		public:
		
		// конструктор
		charlocus(int xi = 1, int yi = 1, char ci = 'a') : x(xi),y(yi), cc(ci) {
			cout << "\n Отработал конструктор!" << '\n';
			}
		
		// вывод символа на экран
		void display (void) {
			cout << "x = " << x << "\ty = " << y << "\tcc = " << cc << '\n';
		}
	};
	
	// дружественная функция для замены символа в конкретном объекте
	void friend_put(charlocus *p, char c) {
		cout << "\n p->cc = " << p->cc << '\n';
		cout << "\n c = " << c << '\n';
		p->cc = c;
		cout << "\n p->cc = " << p->cc << '\n';
	}
	
	int main() {
		// создание объекта D
		charlocus D(20, 4, 'd'); 
		
		// создание объекта S
		charlocus S;
		
		D.display(); cin.get();
				
		S.display(); cin.get();
				
		friend_put(&D, '*');
		D.display(); cin.get();
				
		friend_put(&S, '#');
		S.display(); cin.get();
		
		cout << '\n';
		return 0;
	}
