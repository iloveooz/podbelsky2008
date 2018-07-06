//p05_02.cpp - приведение типа void * к стандартным типам
#include <iostream>

using namespace std;

int main() {
	void *vp;
	int i = 77;
	
	float Euler = 2.718282;
	
	cout << "\nНачальное значение vp = " << vp;

	vp = &i; // настроились на int
	cout << "\nvp = " << vp << "\t*(int *)vp = " << *(int *)vp;

	vp = &Euler; // настроились на float
	cout << "\nvp = " << vp << "\t*(float *)vp = " << *(float *)vp;
	
	cout << '\n';	
	return 0;
}
