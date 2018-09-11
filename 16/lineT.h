//lineT.h - шаблон классов "последовательность значений"

	using namespace std;
	
	const int MAXSIZE = 255;
	
	template <typename T>
	class lineT {
		// массив для хранения значений последовательности
		T data[MAXSIZE];
		
		// реальная длина последовательности (сколько из MAXSIZE занято)
		int size;
		
	public:
		// конструктор общего вида, формирует объект по массиву-параметру
		lineT(T array[], int k);
		
		// конструктор умолчания, формирует пустую последовательность
		lineT() : size(0) { }
		
		// ОФ - конкатенация последовательностей
		lineT <T> & operator += (lineT<T>);
		
		// шаблон дружественной операции-функции для вывода
		template <typename M>
		friend ostream & operator << (ostream &, lineT <M> &);
		
		// первый элемент последовательности
		template <typename F> // F - проверить
		friend F getFirst(lineT <F>);
	};
	
	// метод конкатенации последовательностей
	template <typename T> 
	// можно и так
	// lineT<T> & lineT<T>::operator += (lineT<T> ar) {
	
	lineT<T> & // типа возвращаемого значения
	lineT<T>:: // пространство имён
	
	operator += (lineT<T> ar) {
		if (size + ar.size >= MAXSIZE) {
			cerr << "Превышен максимальный размер!";
			exit(1);
		}
		for(int i = 0; i < ar.size; i++)
			data[i + size] = ar.data[i];
		size += ar.size;
		return *this;
	}
	
	// конструктор общего вида, формирует объект по массиву-параметру
	template <typename T>
	lineT<T>::lineT(T array[], int k) {
		if (k < 0 || k >= MAXSIZE) {
			cerr << "Превышен максимальный размер!";
			exit(1);
		}
		size = k;
		for(int i = 0; i < k; i++) 
			data[i] = array[i];
	}
	
	// перегруженная операция-функция для вывода
	template <typename T>
	ostream & operator << (ostream & out, lineT<T> & ar) {
		out << "size = " << ar.size << "\n Line elements:" << endl;
		// цикл для вывода последовательностей общего вида
		for(int i = 0; i < ar.size; i++) 
			out << ar.data[i] << ((i + 1) % 11 ? "; " : ";\n");
		out << endl;
		return out;
	}
	
	// обращение к первому элементу последовательности
	template <typename T>
	T getFirst(lineT <T> line) {
		// cout << line.data[0] << endl;
		return line.data[0];
	}
	
	
