//p15_01.cpp - виртуальные функции

	#include <iostream>
	using std::cout;
	using std::endl;
	
	struct base {
		virtual void fun(int i) {
			cout << "base: " << i << endl;
		}

	};
	
	struct dir : base {
		// тоже виртуальный метод
		void fun(int i) {
			cout << "dir: " << i * i << endl;
		}
	};	
	
	int main() {
		// указатель на объект базового класса
		base B, *bp; 
		bp = &B;
		
		// указатель на объект производного класса
		dir D, *dp = &D;
		
		// указатель типа base *, адресует объект производного класса
		base *pbd = &D;
		
		// печатает base: 1
		bp->fun(1);
		
		// печатает dir: 25
		dp->fun(5);
		
		// печатает base: 4
		pbd->fun(4);			
		
		return 0;
	}	
