//p6-18.cpp - вызов функций по адресам через указатель
	#include <iostream>

	using namespace std;

	int add  (int n, int m)  { return n + m; }
	int divide  (int n, int m)  { return n / m; }
	int mult (int n, int m)  { return n * m; }
	int subt (int n, int m)  { return n - m; }

	int main () {
		int (*par) (int, int); // указатель на функцию
		int a = 6, b = 2;
		char ch = '+';
		while ( ch != ' ' ) {
			cout << "\n Аргументы: a = " << a << ", b = " << b;
			cout << ". Результат для c = \'" << ch << "\'" << " равен ";
		  
			switch(ch) { 
				case '+': par = add; ch = '/'; break;
				case '-': par = subt; ch = ' '; break;
				case '*': par = mult; ch = '-'; break;
				case '/': par = divide; ch = '*'; break;
			}
			cout << (a = (*par) (a, b)); // вызов по адресу
		}
		cout << endl;
		return 0;
	}
