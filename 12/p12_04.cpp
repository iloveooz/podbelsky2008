//p12_04.cpp - ретрансляция и суффиксы исключений

	#include <iostream>
	using namespace std;
	
	void compare (int k) throw (int, const char *) {
		if (k % 2 != 0) throw k; // исключение int - "нечётный"
		else throw "Чётный";		// исключение char * - "чётный" 
	}
	
	// вызывающая функция
	void gg (int j) throw() {
		try {
			try { 
				compare(j);
			}
			catch (int) {
				cout << "Нечётный" << endl;
				throw; // ретрансляция исключения
			}
			
			catch (const char *) {
				cout << "Чётный" << endl;
			}
		}
		catch (int i) {
			cout << "Результат = " << i;
		}
		
		// catch (const char * str) {
		// 	cout << ", т.е. нечётный" << endl;
		// }
	}
	
	int main() {
		gg(4);
		gg(7);
		
		cout << endl;
		return 0;
	}
	
	
	
