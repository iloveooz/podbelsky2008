//p06_24.cpp - перегрузка функций
#include <iostream> 

using namespace std;

// функция для массивов с элементами типа int
long max_element(int n, int array[])  {
	int value = array[0];
	for (int i = 1; i < n; i++)
		value = value > array[i] ? value : array[i];
    
    return long (value);
}

// функция для массивов с элементами типа long
long max_element(int n, long array[]) {
	long value = array[0];
	for (int i = 1; i < n; i++)
		value = value > array[i] ? value : array[i];
    
    return value;
}

// функция для массивов с элементами типа float
double max_element(int n, float array[]) {
	float value = array[0];
	for (int i = 1; i < n; i++)
		value = value > array[i] ? value : array[i];
    
    return double(value);
}

// функция для массивов с элементами типа double
double max_element(int n, double array[])  {
	double value = array[0];
	for (int i = 1; i < n; i++)
		value = value > array[i] ? value : array[i];
    
    return value;
}

int main () { 

	int x[] = {10, 20, 30, 40, 50, 60};
	long f[] = {12l, 44l, 5l, 22l, 37l, 30l};
	float y[] = {0.1, 0.2, 0.3, 0.4, 0.5, 0.6};
	double z[] = {0.01, 0.02, 0.03, 0.04, 0.05, 0.06};

    cout << "\n Для (int)   :";
	cout << " max_element(6, x) = " << max_element(6, x);
    cout << "\n Для (long)  :";	
	cout << " max_element(6, f) = " << max_element(6, f);
	cout << "\n Для (float) :";
	cout << " max_element(6, y) = " << max_element(6, y);
    cout << "\n Для (double):";
	cout << " max_element(6, z) = " << max_element(6, z);
	cout << endl;
	return 0;
}
