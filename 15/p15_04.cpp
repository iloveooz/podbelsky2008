//p15_04.cpp - деструкторы при наследовании

	#include <iostream>
	using namespace std;
	
	// базовый класс
	class BAS {
		
	public:
	// деструкторы лучше делать виртуальными
		virtual ~BAS() {
			cout << "вызов ~BAS, объект уничтожен" << endl;
		}
	};
	
	// производный класс
	class DIR : public BAS {
		int *iArr;
	
	public:
		DIR() : iArr(new int[10]) { }
		
		~DIR() {
			delete [] iArr;
			cout << "вызов ~DIR, объект уничтожен" << endl;
		}
	};
	
	int main() {
		BAS *b1 = new DIR;
		delete b1;
		
		cout << "Новый объект: " << endl;
		
		DIR object;
		return 0;
	}
	
	
