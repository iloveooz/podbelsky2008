//p06_23.cpp - ссылки на элементы "двухмерных" массивов
#include <iostream>

using namespace std;

// функция возвращает ссылку на обозначенный элемент матрицы
double & elem(double **matr, int k, int l) {
	return matr[k][l]; 
}

// функция заполняет матрицу значениями от 1 до 9
void matrix(int n, int m, double **pmatr) {
	int k = 0;
	for (int i = 0; i < n; i++)
		for ( int j = 0; j < m; j++)
			elem(pmatr, i, j) = k++ % 9 + 1;  
}

// функция выбирает адрес максимального элемента матрицы
double & maxelem(int n, int m, double ** pmatr) {
	int im = 0, jm = 0;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++) {
			if (pmatr[im][jm] >= pmatr[i][j]) continue;
			im = i; jm = j;
		}
	return pmatr[im][jm];  
}

// функция печатает матрицу по строкам
void matr_print(int n, int m, double **pmatr) {
	for ( int i = 0; i < n; i++) {
		cout << "\n Строка " << (i + 1) << ":";
		for (int j = 0; j < m; j++)
			cout << "\t" << pmatr[i][j];
	}
}

int main ( ) {
	double z[3][4];
	double *ptr[] = {(double *) & z[0], (double *) & z[1], (double *) & z[2] };
	
	matrix(3, 4, ptr); // заполняем матрицу
	matr_print(3, 4, ptr); // печатаем исходную матрицу
	
	for (int i = 0; i < 4; i++) // обнуляем четыре исходных элемента
		maxelem(3, 4, ptr) = 0.0;
	
	cout << endl;
	matr_print(3, 4, ptr);  // печать измененной матрицы
	
	cout << endl;
	return 0;
}
