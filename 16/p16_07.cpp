//p16_07.cpp - применение шаблона классов

	#include <iostream>
	using namespace std;
	
	# include "lineT.h"
	
	int main() {
		int ar[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
		int len = sizeof(ar) / sizeof(ar[0]);
		
		lineT <int> lar(ar, len);
		cout << lar;
		
		lineT <int> lor(ar, len);
		lar += lor;
		cout << lar;
				
		double dom[] = { 2.2, 4.4, 6.6, 8.8 };
		lineT <double> lineD(dom, sizeof(dom) / sizeof(dom[0]));
		cout << lineD;
		
		// segmentation fault (core dumped)
		cout << "getFirst(lineD) = " << getFirst(lineD) << endl;
		
		char ch[] = {'a', 's', 'd', 'f', 'g', 'h'};
		lineT <char> str(ch, 6);
		cout << str;
		
		char ch2[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'}; 
		lineT <char> row(ch2, 10);
		str += row;
		
		cout << str << endl;
		return 0;
	}
