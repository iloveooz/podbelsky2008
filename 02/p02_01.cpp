//P2_01.cpp - предельные значения и размеры целых констант

#include <iostream>
#include <climits>

using namespace std;

	int main ()
	{
		cout << "INT_MIN = " << INT_MIN << endl;
		cout << "INT_MAX = " << INT_MAX << endl;
		cout << "UINT_MAX = " << UINT_MAX << endl;
		cout << "LONG_MAX = " << LONG_MAX << endl;


		cout << "\n sizeof 111 = " << sizeof 111;
		cout << "\n sizeof 111u = " << sizeof 111u;
		cout << "\n sizeof 111L = " << sizeof 111L;
		cout << "\n sizeof 111ul = " << sizeof 111ul;
		cout << "\n\t sizeof 40000 = " << sizeof 40000;
		cout << "\n\t sizeof 40000u = " << sizeof 40000u;
		cout << "\n\t sizeof 40000L = " << sizeof 40000L;
		cout << "\n\t sizeof 40000LU = " << sizeof 40000LU;

		cout << endl;

		return 0;
	}
