//p18_10.cpp - стандартные алгоритмы

	#include <iostream>
	using namespace std;
	
	#include <algorithm>
	
	#define PRINT(c) cout << #c << " = " << c << endl;
	
	bool minR(int x, int y) {
		return (x % 10 < y % 10);
	}
	
	int main() {
		int b = 13;
		int d = 41;
		
		PRINT(min(b, d, minR));
		
		swap(b, d);
		
		PRINT(b);
		PRINT(d);
		
		return 0;
	}
