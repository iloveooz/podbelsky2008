// symbol.h - class symbol
	using std::cout;
	
	// класс "символьный элемент"
	class symbol { 
		int static Amount; 	// общее количество элементов
		int static Counter; // счётчик всех созданных элементов
		int Number; 		// порядковый номер элемента
		char Meaning;		// значение элемента
		
	public:
		// конструктор
		symbol(char value = 'a') : Meaning(value) {
			// увеличиваем счётчик и количество элементов:
			Amount++;
			Counter++;
			Number = Counter;
		}
		// деструктор:
		~symbol() {
			Amount--;
			cout << "Destructed!\n";
			display();
		}
		// вывод сведений об объекте и общем количестве элементов:
		void display() {
			cout << "Number = " << Number;
			cout << ",\tMeaning = " << Meaning;
			cout << ",\t Amount = " << Amount << '\n';
		}
	};
