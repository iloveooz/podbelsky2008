//p06_02.cpp - заданное количество необязательных параметров

	#include <iostream>
	#include <cstdarg> // для макросредств перебора параметров
	
	using namespace std;

	//функция суммирует значения своих параметров типа int

	long summa(int k, ...) // k - число суммируемых параметров
	{
		// int *pik = &k;
		va_list pick; // указатель pick определён для доступа к списку параметров
		va_start (pick, k);
		
		long total = 0;
		
		for (; k; k--) 
			total += va_arg(pick, int);
		return total;
	}

	int main()
	{
		cout << "\n summa(2, 6, 4) = " << summa(2, 6, 4);
		cout << "\n summa(6, 1, 2, 3, 4, 5, 6) = " << summa(6, 1, 2, 3, 4, 5, 6) << endl;
		return 0;
	}
