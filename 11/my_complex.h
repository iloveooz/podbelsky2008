// my_complex.h - определение класса комплексных чисел

	using namespace std;
	
	class myComplex {
		double re, im;
	public:
	
		// конструктор одновременно общего вида, умолчания и приведения типов
		myComplex(double xre = 0.0, double xim = 0.0) : re(xre), im(xim) { }
		
		double real() { return re; }
		double imag() { return im; }
		
		// перегрузка операции
		myComplex operator - () { return myComplex(-re, -im); }
		
		friend ostream & operator << (ostream &, const myComplex &); 
		friend istream & operator >> (istream &, myComplex &); 
	};
	
	ostream & operator << (ostream & output, const myComplex & cc) {
		output << "\treal = " << cc.re << ",\t imag = " << cc.im << endl; 
		return output;
	}
	
	istream & operator >> (istream & in, myComplex & cc) {
		cout << "real = ";
		cin >> cc.re;
		
		cout << "imag = ";
		cin >> cc.im;
		
		return in;
	}
	
	myComplex operator + (myComplex Z, myComplex E) {
		return myComplex(Z.real() + E.real(), Z.imag() + E.imag()); 
	}
	
