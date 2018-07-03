//p02_16.cpp - запятая как разделитель и как знак операция
	#include <iostream>

	using namespace std;

	int main() { 
		int i = 1, m[] = {i, (i = 2, i * i), i };
		cout << "\ni = " << i << "\nm[0] = " << m[0];
		i++;
		cout << "\nm[1] = " << m[1] << "\nm[2] = " << m[2] << endl;

		return 0;
	}
