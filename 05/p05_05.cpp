//p05_05.cpp - увеличение указателя
#include <iostream>

using namespace std;

int main()
{
	float zero = 0.0, pi = 3.141593, Euler = 2.718282;
	float *ptr = &Euler;

	cout << "\n ptr = " << ptr << " &ptr = " << &ptr << " *ptr = " << *ptr;
	cout << "\n(ptr + 1) = " << (ptr + 1) << " *(ptr + 1) = " << *(ptr + 1);
	cout << "\n(ptr + 2) = " << (ptr + 2) << " *(ptr + 2) = " << *(ptr + 2) << endl;

	return 0;
}
