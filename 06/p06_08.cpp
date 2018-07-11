//p06_08.cpp - указатели на массивы в качестве параметров
#include <iostream>

using namespace std;

void max_vect(int n, int *x, int *y, int *z)
{
	for (int i = 0; i < n; i++)
		z[i] = x[i] > y[i] ? x[i] : y[i];
		
	cout << *x << '\n';
	cout << *y << '\n';
	cout << *z << '\n';
}

int main ( )
{
	int a[] = { 1, 2, 3, 4, 5, 6, 7};
	int b[] = { 7, 6, 5, 4, 3, 2, 1};
	int c[7];
	
	max_vect(7, a, b, c);
	
	for (int j = 0; j < 3; j++) {
		for (int i = 0; i < 7; i++) {
			if (j == 0) cout << "\t" << a[i];
			if (j == 1) cout << "\t" << b[i];
			if (j == 2) cout << "\t" << c[i];
		}
		cout << '\n'; 
	}
	cout << endl;
	return 0;
}
