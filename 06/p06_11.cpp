//p06_11.cpp - матрица как набор одномерных массивов
	#include <iostream>

	using namespace std;

	// функция, определяющая значения элементов матрицы
	void fill(int n, int** mat) {
		int k = 0;
		for (int i = 0; i < n; i++)
			for (int j = 0; j < n; j++)
				mat[i][j] = k++;
	}

	void matPrint(int n, int ** matr) {
		// цикл перебора строк
		for (int i = 0; i < n; i++ ) {
			cout << "line " << (i + 1) << ':';
			// цикл печати элементов строки:
			for (int j = 0; j < n; j++) 
				cout << '\t' << matr[i][j];
			cout << '\n';
		}
	}

	// динамические массивы для представления матрицы
	int main () { 
		int **pi;  // указатель на массив указателей
		int m = 3; // размеры массивов, т.е. порядок матрицы
		
		cout << "Введите размерность матрицы - "; cin >> m;
		
		pi = new int * [m]; // вспомогательный массив указателей
	  
		for (int i = 0; i < m; i++)
			pi[i] = new int [m]; // формируем строки (одномерные массивы)
	  
		fill(m, pi); // заполнение матрицы
		
		matPrint(m, pi);
	  
		for (int i = 0; i < m; i++)
			delete pi[i];
		
		delete[] pi;
		
		cout << "\n";
		return 0;
	}
