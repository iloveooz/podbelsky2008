//p16_05.cpp - явная специализация шаблонной функции

	#include <iostream>
	using namespace std;
	
	template <int N, typename T>
	T sum(T ar[], int len = 1) {
		T ss = T(0);
		for(int i = N; i < N + len; i++) 
			ss += ar[i];
		return ss;
	}
	
	// явная специализация шаблона
	template <> 
	char sum <0, char> (char ar[], int len) {
		int sr = 0;
		for(int i = 0; i < len; i++)
			sr += ar[i];
		return(char)(sr / len);
	}
	
	int main() {
		char hh[] = {'1', '2', '3', '4', '5', '6', '7', '8' };
		cout << "sum<0, char>(hh, 8) = " << sum<0, char>(hh, 8);
		cout << endl;
		return 0;
	}
