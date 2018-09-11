//p16_03.cpp - прототип шаблона функции

	#include <iostream>
	using namespace std;
	
	// прототип шаблона
	template <typename D>
		long count0(int, D*);
	
	template <typename Type>
		long count_non0(int, Type*);
		
	int main() {
		int A[] = { 0, 1, 0, 0, 6, 0, 4, 10, 15, 16, 16, 17 };
		int n = sizeof(A) / sizeof(A[0]);
		
		cout << "count0(n, A) = " << count0(n, A) << endl;
		cout << "count_non0(n, A) = " << count_non0(n, A) << endl;
		
		double X[] = { 10.0, 0.0, 3.3, 0.0, 2.1, 0.001 };
		n = sizeof(X) / sizeof(X[0]);
		
		cout << "count0(n, X) = " << count0(n, X) << endl;
		cout << "count_non0(n, X) = " << count_non0(n, X) << endl;
		return 0;
	}
	
	// шаблон функций для определения количества нулевых элементов в массиве
	template <typename T>
	long count0(int size, T* array) {
		long k = 0;
		for(int i = 0; i < size; i++)
			if(array[i] == T(0)) k++;
		return k;
	}
	
	// шаблон функций для определения количества ненулевых элементов в массиве
	template <typename Type>
	long count_non0(int size, Type* array) {
		long k = 0;
		for(int i = 0; i < size; i++) 
			if(array[i] != Type(0)) k++;
		return k;
	}
