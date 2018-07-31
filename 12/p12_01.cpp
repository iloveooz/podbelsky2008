//p12_01.cpp - исключения типа int и string

	#include <iostream>
	#include <string>
	
	using namespace std;
	
	int GCD (int x, int y) {
		if (x == 0) throw y;
		if (y == 0) throw x;
		
		if (x < 0) throw string("\nОтрицательный параметр 1");
		if (y < 0) throw string("\nОтрицательный параметр 2");
		
		while (x != y) {
			if (x > y) x = x - y;
			else y = y - x;
		}
		
		return x;
	}
	
	int main() {
		try {
			cout << "GCD(66, 44) = " << GCD(66, 44) << endl;
			cout << "GCD(0, 7) = " << GCD(0, 7) << endl;
			cout << "GCD(-6, 4) = " << GCD(-6, 4) << endl;
		}
		
		catch (const string report) {
			cout << report << endl;
		}
		
		catch (const int ex) {
			cout << "Один из параметров равен 0! ";
			cout << "Другой параметр равен " << ex;
		}
		cout << '\n';
		return 0;
	}
