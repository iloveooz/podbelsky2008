//p06_01.cpp - определения, прототипы и вызовы функций
#include <iostream>

using namespace std;

int max (int n, int m) {
	return n < m ? m : n;
}

void print (char *, int);
double cube (double x = 0);

int main() {
	
	int sum = 5, k = 2;
	sum = max((int)cube(double(k)), sum);

	print("Номер комнаты: ", sum);
		
	cout << endl;
	return 0;
}


void print (char * name, int value) {
	cout << "\n" << name << " " << value;
}

double cube (double x) {
	return x * x * x;
}
