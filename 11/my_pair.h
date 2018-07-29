//my_pair.h - класс myPair

	#include <iostream> 
	
	using namespace std; // доступ к пространству имён std
	
	// класс "пара чисел"
	class myPair {
		int n;
		double x;
		
		// дружественная функция для ПРЕфиксной операции ++
		friend myPair & operator ++ (myPair &);
		
		// дружественная функция для ПОСТфиксной операции --
		friend myPair & operator -- (myPair &, int);

		// дружественная функция для операции вывода
		friend ostream & operator << (ostream &, myPair);
		
	public:
		// конструктор
		myPair(int ni = 0, double xi = 0.0) : n(ni), x(xi) {	}
		
		// метод для постфиксной операции ++
		myPair & operator ++ (int i) {
			n += 10; 
			x += 10.0;
			return *this;
		}
		
		// метод для префиксной операции --
		myPair & operator -- () {
			n -= 1;
			x -= 1.0;
			return *this;
		}
	};
	
	ostream & operator << (ostream & out, myPair p) {
		out << "\tn = " << p.n << "\tx = " << p.x << endl;
		return out;
	}
	
	// префиксная операция ++
	myPair & operator ++ (myPair &p) {
		p.n += 1;
		p.x += 1.0;
		return p;
	}
	
	// постфиксная операция --
	myPair & operator -- (myPair &p, int i) {
		p.n -= 10;
		p.x -= 10.0;
		return p;
	}
	
	
