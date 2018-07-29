// badpoint.h - ошибочное определение класса "точка в многомерном пространстве"

	class badpoint { // неверное определение класса
		int size; // размерность пространства
		double* coord; // указатель на массив координат точки
		
	public:
		badpoint (int n = 1, double z = 0.0) : size(n) { // конструктор
			coord = new double [size];
			for (int i = 0; i < size; i++) coord[i] = z;
		}
		
		friend ostream& operator << (ostream& out, badpoint p);
		
		~badpoint() { // деструктор
			delete [] coord;
		}
	};
	
	// определение дружественной функции
	ostream& operator << (ostream& out, badpoint p) {
		out << "size = " << p.size;
		for (int i = 0; i < p.size; i++)
			out << "\t[" << i << "] = " << p.coord[i];
			out << endl;
			return out;
	}
