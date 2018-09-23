//evenArray.h - спецификация класса (контейнера с итератором)

	#define MAXSIZE 25
	
	class evenArray {
		// для хранения элементов последовательности
		int data[MAXSIZE];
		
		// количество элементов (включая неиспользуемые)
		int size;
		
	public:
		// конструктор умолчания
		evenArray() : size(0) { }
		
		// поместить значение в контейнер
		void push(int n) {
			data[size] = n;
			size += 2;
		}
		
		// локальный класс итераторов
		class evenIter {
			// адрес элемента в контейнере
			int* cur;
		public:
			// конструктор умолчания
			evenIter(int* init = 0) : cur(init) { }
			
			// вернуть значение элемента
			int operator *() {
				return * cur;
			}
			
			// префиксный инкремент
			evenIter & operator ++ () {
				cur += 2;
				return * this;
			}
			
			// префиксный декремент
			evenIter & operator -- () {
				cur -= 2;
				return * this;
			}
			
			// сравнение итераторов на неравенство
			bool operator != (evenIter who) {
				return who.cur != cur;
			}
			
			// сравнение итераторов на равенство
			bool operator == (evenIter who) {
				return who.cur == cur;
			}
		};
					
		// начало последовательности
		evenIter begin() {
			return evenIter(&data[0]);
		}	
		
		// конец последовательности
		evenIter end() {
			return evenIter(&data[size]);
		}
	};			
