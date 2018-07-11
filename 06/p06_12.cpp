//p06_12.cpp - единичная диагональная матрица с изменяемым порядком
	#include <iostream>
	#include "matPrint.h"

	using namespace std;

	// функция формирует единичную матрицу
	int **single_matr(int n)  // n - нужный размер матрицы
	{ 
		// вспомогательный указатель на формируемую матрицу
		int ** p;
	  
		// массив указателей на строки
		p = new int * [n];
		
		if (p == NULL)
		 { cout << "\n Не создан динамический массив!";
		   exit(1);
		 }
		// цикл создания одномерных массивов
		for (int i = 0; i < n; i++) { 
			// формирование строки элементов типа int:
			p[i] = new int [n];
			if (p[i] == NULL)
				{
					cout << "\n Не создан динамический массив!";
					exit(1);
				}
			// внутренний цикл заполнения строки
		   for (int j = 0; j < n; j++)
		   if (j != i) p[i][j] = 0; else p[i][j] = 1;
		}
		return p;
	}

	int main ()
	{
		int n;
		
		cout << "\nВведите порядок матрицы: ";
		cin >> n;
	  
		int **matr;  // указатель для формируемой матрицы
	  
		// обращение к функции для создания единичной матрицы
		matr = single_matr(n);
		matPrint(n, matr);
		
		// очистка динамической памяти
		for (int i = 0; i < n; i++)
			delete matr[i];
		delete[] matr;
		
		cout << "\n";
		return 0;
	}
