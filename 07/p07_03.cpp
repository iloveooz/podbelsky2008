//p07_03.cpp - макрос как аналог функции
	#include <iostream>
	using namespace std;
	
	// макрос для печати массива в виде таблицы
	#define ARRAY_PRINT(ARRAY, N) \
		{ 	int _i; \
			for(_i = 0; _i < sizeof(ARRAY)/sizeof(ARRAY[0]); _i++) { \
				cout << #ARRAY"[" << _i << "] = " 	\
					<< ARRAY[_i] << '\t';		\
				if ((_i + 1) % N == 0) cout << endl;	\
			}	\	
		}
	
	int main() {
		int ar[] = { 1111, 222, 3, 444, 5555, 6, 7, 8, 9, 10, 11, 12, 134, 14, 15};
		
		// обращение к массиву
		ARRAY_PRINT(ar, 4); 
		cout << endl;
		return 0;
	}
