//p16_10.cpp - пользовательская специализация шаблона классов lineT <T>

	#include <iostream>
	#include <cstring>
	using namespace std;
	
	#include "lineT.h"
	
	// явная специализация шаблона
	template < >
	class lineT <char> {
		char data[MAXSIZE];
		int size;
	
	public:
		// конструктор с параметром - строка в стиле С
		lineT(char *str = 0) {
			// получаем длину строки
			size = (int) strlen(str);
			if (size >= MAXSIZE) {
				cerr << "Превышен размер!";
				exit(1);
			}
			if (str != 0) strcpy(data, str);
		}
		
		// конкатенация строк (прототип)
		lineT <char> & operator += (lineT <char>);
		
		// вывод строки (дружественная функция)
		friend ostream & operator << (ostream & out, lineT <char> & lin);
	};
	
	// вывод строки без массива
	ostream & operator << (ostream & out, lineT <char> & arg) {
		out << "My string: size = " << arg.size << endl;
		out << arg.data << endl;
		return out;
	}
	
	lineT<char>& lineT<char>::operator += (lineT<char> arg) {
		if (size + arg.size >= MAXSIZE) {
			cerr << "Превышен размер!";
			exit(1);
		}
		
		strcat(data, arg.data);
		size += arg.size;
		return *this;
	}
	
	int main() {
		// специализация для char
		lineT <char> str("Figures: ");
		cout << str;
		
		// специализация для char
		lineT <char> row("0123456789");
		str += row;
		
		cout << str;
				
		int ar[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
		int len = sizeof(ar) / sizeof(ar[0]);
		
		// общий шаблон
		lineT <int> lar(ar, len);
		cout << lar;
		
		return 0;
	}
	
