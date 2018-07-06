//p05_06.cpp - изменения указателей на произвольную величину
#include <iostream>

using namespace std;

int main()
{
	long double L1 = 9.1082e-28; // масса покоя электрона (г)
	int ii = 6;
	char ch = '&';
	double d = 299972.5; // скорость света
	long double L2 = 1.0011596; // аномальный момент электрона

	cout << "\nНе кратные для long адреса: &L1 = " << &L1 << " &L2 = " << &L2;
	
	long dis; // расстояние в памяти между L2 и L1
	dis = long(&L2) - long(&L1);
	
	cout << "\nРазность числовых значений адресов: &L1 - &L2 = " << dis;
	
	long double *pl = &L1;

	cout << "\npl = " << pl << " *pl = " << *pl;
	//явно переместим указатель
	pl = (long double *) (long(pl) + dis);
	
	cout << "\nИзменённый указатель:";
	cout << "\npl = " << pl << " *pl = " << *pl;

	cout << '\n';
	return 0;
}
