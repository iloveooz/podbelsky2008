//p03_02.cpp - сфера действия имён параметров

#include <iostream>

using namespace std;

int main()
{
	int m = 0;
	double d = 5.0;
	
	double expon(double d, int m);
	
	for (; m <= 2; m++)
		cout << "expon(" << d << ',' << m << ") = " << expon(d, m) << endl;
	
	cout << endl;
	return 0;
}

double expon (double d, int m) {
	double res = 1.0;
	
	for (int i = 1; i <= m; i++, res *= d);
	return res;

}
