//nPoint.h - правильное определение класса "точка в многомерном пространстве"

	#include <iostream>
	using namespace std;
	
	class nPoint { // ПРАВИЛЬНОЕ определение класса
		int size;  // размерность пространства
		double* coord; // указатель на массив координат точки
		
	public:
		// конструктор общего вида
		nPoint (int n = 1, double z = 0.0) : size(n) {
			coord = new double [size];
			for (int i = 0; i < size; i++) 
				coord[i] = z;
		}
		
		friend ostream& operator << (ostream& out, nPoint p);
		
		// деструктор
		~nPoint() {
			delete [] coord;
		}
		
		// конструктор копирования
		nPoint(const nPoint& point) : size(point.size) {
			coord = new double [size];
			for (int i = 0; i < size; i++)
				coord[i] = point.coord[i];
		}
		
		// операция присваивания
		nPoint& operator = (const nPoint& point) {
			if (this != &point) {
				delete [] coord; 
				coord = new double [size = point.size];
				for (int i = 0; i < size; i++) 
					coord[i] = point.coord[i];
			}
				return *this;
		}
	};
	
	// определение дружественной функции
	ostream& operator << (ostream& out, nPoint p) {
		out << "size = " << p.size;
		for (int i = 0; i < p.size; i++)
			out << "\t[" << i << "] = " << p.coord[i];
		out << endl;
		return out;
	}
	
