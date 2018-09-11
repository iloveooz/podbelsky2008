//p16_04.cpp - шаблон функций с параметром

	#include <iostream>
	using namespace std;
	
	template <int N, typename T>
	T sum(T ar[], int len = 1) {
		T ss = T(0);
		for(int i = N; i < N + len; i++) 
			ss += ar[i];
		return ss;
	}
	
	int main() {
		int A[] = { 11, 1, 0, 0, 6, 0, 4, 10 };
		int n = sizeof(A) / sizeof(A[0]);
		cout << "sum<3, int>(A, n - 3) = " << sum<3, int>(A, n - 3) << endl;
		cout << "sum<3>(A, n - 3) = " << sum<3>(A, n - 3) << endl;
		
		double X[] = { 10.0, 0.0, 3.3, 0.0, 2.1 };
		n = sizeof(X) / sizeof(X[0]);
		cout << "sum<0>(X) = " << sum<0>(X) << endl;
		cout << "sum<2, double>(X) = " << sum<2, double>(X) << endl;
		return 0;
	}
		
