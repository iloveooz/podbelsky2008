//p21_05.cpp - исключения в конструкторе

	#include <iostream>
	#include <string>
	
	using namespace std;
	
	#define PRINT(X) cout << #X " = " << X << endl;
	
	class point2 {
		double x, y;
		
		// статическое поле данных
		static int N;
	public:
	
		// прототип конструктора
		point2 (double xn = 0.0, double yn = 0.0);
		
		static int &count() { // статическая функция
			return N; 
		}
	};
	
	// инициализация N
	int point2::N = 0;
	
	// определение конструктора
	point2::point2 (double xn, double yn) try : x(xn), y(yn) {
		N++;
		// if (N == 1) throw string("Начало!"); 
		if (N == 1) throw "Начало!"; 
		if (N > 2) throw string("Конец!");
	}
	
	catch(const char *ch) {
	// catch(string ch) {
		cout << ch << endl;
	}
	
	int main() {
		try {
			PRINT(point2::count());
			
			point2 A(0.0, 1.0);
			PRINT(A.count());
			
			point2 B;
			PRINT(point2::count());
			
			point2 C;
			PRINT(point2::count());
			
			point2 D(1.0, 2.0);
			PRINT(D.count());
		}
		
		catch (string str) {
			cout << str << endl;
		}
		
		return 0;
	}
	
	
	
			
