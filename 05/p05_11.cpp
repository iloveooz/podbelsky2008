//p05_11.cpp - адреса элементов многомерных массивов
#include <iostream>

using namespace std;

int main() {
	int arr3[4][3][6][7][7];
	
	cout << "\n &arr3[0] = " << &arr3[0];
	cout << "\n &arr3[1] = " << &arr3[1];
	cout << "\n &arr3[2] = " << &arr3[2];
	cout << "\n &arr3[3] = " << &arr3[3];

	cout << "\n &arr3[2][2][2] = " << &arr3[2][2][2];
	cout << "\n &arr3[2][2][3] = " << &arr3[2][2][3];

	cout << "\n\"Расстояние\" в байтах:\n (unsigned long)&arr3[1] - (unsigned long)&arr3[0] = " <<
		(unsigned long)&arr3[1] - (unsigned long)&arr3[0];
		
	cout << "\n" << sizeof(arr3) << endl;
	return 0;
}
