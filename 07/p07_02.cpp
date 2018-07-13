//p07_02.cpp - особенности макроопределений с параметрами
	#include <iostream>
	using namespace std;

	#define max(a,b) (a < b ? b : a)
	#define t(e) e * 3
	#define PRINT(c) { cout << #c << " равно "; cout << c << endl; }
	#define E x*x

	int main ( ) {  
		int x = 2;
		PRINT(max(++x, ++x));
		PRINT(t(x));
		PRINT(t(x + x));
		PRINT(t(x + x)/3);
		PRINT(E);
		
		cout << "\n\n\n" << __DATE__;
		cout << '\n' << __TIME__;
		cout << '\n' << __LINE__;
		cout << '\n' << __FILE__;
		cout << '\n' << __STDC__;
		cout << '\n' << __cplusplus;
				
		cout << endl;
		return 0;
	}
