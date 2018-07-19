// fraction.h - class fraction
	using std::cout;
	
	class fraction {
		int a;
		int b;
	public:
		fraction(int ai = 1, int bi = 1); // прототип конструктора
		
		fraction(const fraction & fra) : a(fra.a), b(fra.b) {
			cout << "Конструктор копирования"; 
			print();
		}
		
		// прототип метода add
		fraction add(const fraction &);
		void print();
	};
	
	// внешнее определение конструктора
	fraction::fraction(int ai, int bi) : a(ai), b(bi) {
		if (bi <= 0) {
			cout << "Ошибка!" << '\n';
			print(); // обращение к методу класса
			exit(1);
		}
	}
	
	// внешнее определение метода add
	fraction fraction::add(const fraction & fra) {
		fraction temp;
		temp.a = a * fra.b + fra.a * b;
		temp.b = b * fra.b;
		return temp;
	}
	
	void fraction::print() {
		cout << "  Числитель = " << a;
		cout << "\nЗнаменатель = " << b << '\n';
	}
