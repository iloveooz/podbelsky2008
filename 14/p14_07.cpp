//p14_07.cpp - наследование и ресурсоемкие объекты (в базовых классов)

	#include <iostream>
	using namespace std;

	// базовый класс - массив изменяемой длины
	class base {

	protected:
		// размер массива
		int sizeB;

		// указатель на элементы массива
		double *data;

	public:
		// конструктор умолчания и общего вида
		base(int size = 1) : sizeB(size) {
			data = new double[sizeB];
		}

		// конструктор копирования
		base(const base & b) : sizeB(b.sizeB) {
			data = new double[sizeB];
			for (int i = 0; i < sizeB; i++) 
				data[i] = b.data[i];
		}
		
		// операция присваивания:
		base & operator = (const base & b) {
			
			// сравнение адресов !!!
			if (this == &b) return *this;
			delete [] data;
			data = new double[sizeB = b.sizeB];
			
			for (int i = 0; i < sizeB; i++) data[i] = b.data[i];
			return *this;
		}
		
		// деструктор
		~base() {
			delete [] data;
		}
	};
	
	// закрытое наследование
	class array : private base {
		int beg, end;
	
	public:
		// конструктор умолчания и общего вида
		array(int iBeg = 0, int iEnd = 1) :
			beg(iBeg > iEnd ? iEnd:iBeg), end(iBeg > iEnd ? iBeg:iEnd), 
			base(end - beg + 1) { }
		
		friend ostream & operator << (ostream & out, const array & ar);
		
		double & operator [] (int n) {
			return data[n - beg];
		}
	};
	
	ostream & operator << (ostream & out, const array & ar) {
		for(int i = ar.beg; i <= ar.end; i++) out << '[' << i << "] = " <<
			const_cast<array &>(ar)[i] << "\t";
		out << endl;
		return out;
	}
	
	int main() {
		// конструктор общего вида
		array s(5, 9);
		
		for(int k = 6; k < 10; k++) 
			s[k] = 2 * k;
		
		cout << s;
		
		// вложенный блок
		{
			// контруктор копирования
			array z(s);
			cout << z;
		}
		
		array r(12, 99);
		r = s;
		
		cout << r;
		return 0;
	}
	
	
		
