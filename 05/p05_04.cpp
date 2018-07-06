//p05_04.cpp - вычитание адресов и указателей разных типов
#include <iostream>

using namespace std;

int main() {
	double aa = 0.0, bb = 1.0;
	
	double *pda = &aa, *pdb = &bb;
	
	int *pia = (int *)&aa, *pib = (int *)&bb;
	
	char *pca = (char *)&aa, *pcb = (char *)&bb;

	cout << "\nАдреса объектов: &aa = " << &aa << "\t&bb = " << &bb;
	cout << "\nРазность объектов: (&bb - &aa) = " << (&bb - &aa);
	cout << "\nРазность числовых значений адресов: " << "((int *)&bb - (int *)&aa) = " << ((int *)&bb - (int *)&aa);
	cout << "\nРазности указателей: ";

	cout << "\n double *: (pdb - pda) = " << (pdb - pda);
	cout << "\n int *: (pib - pia) = " << (pib - pia);
	cout << "\n char *: (pcb - pca) = " << (pcb - pca) << endl;
	
	return 0;
}
