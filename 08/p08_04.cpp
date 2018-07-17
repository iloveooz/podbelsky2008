//p08_04.cpp - битовые поля, структуры, объединения
	#include <iostream>

	using namespace std;

	// функция упаковывает в один байт остатки от деления на 16 двух целых чисел - параметров:
	unsigned char cod(int a, int b) {
		union {	
				unsigned char z; 
				struct 	{
							unsigned int x:4; // младшие биты
							unsigned int y:4; // старшие биты
						} hh;
			  } un;
				
		un.hh.x = a % 16;
		un.hh.y = b % 16;
		return un.z;
	}

	// функция изображает на экране двоичное представление байта-параметра
	void binar (unsigned char ch)
	{ 
		union { unsigned char ss;
				struct { unsigned a0:1;
						 unsigned a1:1;
						 unsigned a2:1;
						 unsigned a3:1;
						 unsigned a4:1;
						 unsigned a5:1;
						 unsigned a6:1;
						 unsigned a7:1;
					   } byte;
			  } cod;
			  
	 cod.ss = ch; // занести значение параметра в объединение

	// вводим биты внутреннего кода значения параметра:
		cout << "\nНомера битов:   7 6 5 4 3 2 1 0";
		cout << "\nЗначения битов: ";
		cout << cod.byte.a7 << " " << cod.byte.a6 << " " << cod.byte.a5 << " " << cod.byte.a4 << " ";
		cout << cod.byte.a3 << " " << cod.byte.a2 << " " << cod.byte.a1 << " " << cod.byte.a0;
		cout << "\n";
		
	}

	int main ( )
	{
		int k;
		int m, n;
		cout << "\nm = "; cin >> m;
		cout << "n = "; cin >> n;
		
		k = cod(m, n);
		cout << "cod = " << k;
		binar(k);
		   
		return 0;
	}
