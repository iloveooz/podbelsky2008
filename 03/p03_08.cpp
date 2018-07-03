//p03_08.cpp - опережающее описание глобального объекта

	#include <iostream>
	
	using namespace std;
	
	void f1() {
		extern int ex; // описание внешней переменной
		cout << "f1.exe = " << ex << endl;
	}
	
	int main() {
		f1();
		return 0;
	}
	
	int ex = 33;
	
