//massPoint.h - шаблон классов "точечная масса"

	using namespace std;
	
	// typename T - задает тип полей данных для координат точки
	// typename D - задаёт тип полей данных для массы точки
	
	template <typename T, typename D>
	class massPoint {
		// координаты точки
		T x, y, z;
		
		// масса точки
		D mass;
	
	public:
		// конструктор общего вида и умолчания
		massPoint(T xn = T(0), T yn = T(0), T zn = T(0), D mn = D(0)) : x(xn), y(yn), z(zn), mass(mn) { }
		
		// прототип шаблона функций для перегрузки вывода
		template <typename X, typename Z>
		friend ostream & operator << (ostream & out, massPoint <X, Z> & point);
		
		// сравнение точечных масс по массам
		bool operator < (massPoint<T, D> & point) {
			return (mass < point.mass ? true : false);
		}
	};
	
	template <typename T, typename D>
	ostream & operator << (ostream & out, massPoint <T, D> & point) {
		out << "x = " << point.x;
		out << "\ty = " << point.y;
		out << "\tz = " << point.z;
		out << "\tmass = " << point.mass;
		return out;
	}
	
		
