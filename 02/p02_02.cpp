//p02_02 - размеры памяти для вещественных констант

	#include <iostream>

	using namespace std;

	int main () {
		cout << "\n sizeof 3.141592653589793 = ";
		cout << sizeof 3.141592653589793;
		cout << "\n sizeof 3.14159 = " << sizeof 3.14159;
		cout << "\n sizeof 3.14159f = " << sizeof 3.14159f;
		cout << "\a\n sizeof 3.14159L = " << sizeof 3.14159L;

		cout << '\n';
		return 0;

	}
