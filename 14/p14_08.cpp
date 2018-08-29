//p14_08.cpp - ресурсоёмкий производный класс

	#include <iostream>
	using namespace std;
	
	// базовый класс - интервал изменения индекса
	class indexSegment {
	protected:
		int beg, end;
	public:
		// конструктор умолчания и общего вида:
		indexSegment(int iBeg = 1, int iEnd = 1) : beg(iBeg > iEnd ? iEnd:iBeg),
			end(iBeg > iEnd ? iBeg:iEnd) { }
		// деструктор, конструктор копирования и операция присваивания 
		// будут добавлены автоматически
	};
	
	// массив с произвольными границами индекса
	class newArray : private indexSegment {
		double *data;
	public:
		// конструктор общего вида:
			newArray(int iBeg = 1, int iEnd = 1) : indexSegment(iBeg, iEnd) {
				data = new double[end - beg + 1];
		}
		
		// конструктор копирования:
		newArray(const newArray & a) : indexSegment(a.beg, a.end) {
			data = new double[end - beg + 1];
			for(int i = 0; i < end - beg + 1; i++)
				data[i] = a.data[i];
		}
		
		// операция присваивания 
		newArray & operator = (const newArray & a) {
			// сравнение адресов!!!
			if (this == &a) return *this;
			delete [] data;
			beg = a.beg;
			end = a.end;
			data = new double[end - beg + 1];
			
			for(int i = 0; i < end - beg + 1; i++)
				data[i] = a.data[i];
			return *this;
		}
		
		// деструктор
		~newArray() {
			delete [] data;
		}
		
		friend ostream & operator << (ostream & out, const newArray & ar);
		
		// перегрузка операции индексирования
		double & operator [](int n) {
			return data[n - beg];
		}
	};
	
	// внешняя функция
	ostream & operator << (ostream & out, const newArray & ar) {
		for(int i = ar.beg; i <= ar.end; i++) out << '[' << i << "] = " <<
			const_cast<newArray &>(ar)[i] << "\t";
		out << endl;
		return out;
	}
	
	
	
	int main() {
		// конструктор общего вида
		newArray s(4, 9);
		newArray e(1, 0);
		
		for(int k = 4; k < 10; k++)
			s[k] = 2 * k;
		
		for(int l = 0; l < 2; l++) 
			e[l] = 2 * l;
		
		cout << " Объект s" << endl;
		cout << s;
		
		cout << " Объект e" << endl;
		cout << e;
		// вложенный блок
		{
			// контруктор копирования
			newArray z(s);
			cout << " Объект z" << endl;
			cout << z;
		}
		
		newArray r(12, 99);
		r = s;
		
		cout << " Объект r" << endl;
		cout << r;
		return 0;
	}
