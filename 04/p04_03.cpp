//p04_03.cpp - разные формы цикла for
#include <iostream>

using namespace std;

int main() { 
	int k = 3, s = 0, i = 1;
	
	for (; i <= k; i++) s += i * i; // первый цикл
	cout << "s(3) = " << s << '\n';
	
	s = 0; // восстанавливаем начальное значение s
	
	for (int i = 0, k = 4; i < k;) s += ++i * i; // второй цикл
	cout << "s(4) = " << s << '\n';
	
	for (i = 0, s = 0, k = 5; i <= k; s += i * i, i++); // третий цикл
	cout << "s(5) = " << s << '\n';
		
	cout << '\n';  
	return 0;
}
