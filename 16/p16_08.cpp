//p16_08.cpp - шаблон класса с нетипизирующим параметром

	#include <iostream>
	using namespace std;
	
	// шаблон с умалчиваемыми значениями
	template <typename T = char, int size = 64>
	class row {
		T data[size];
		int length;
	public:
		// конструктор
		row() : length(size) { }
		
		// операция-функция для индексирования
		T & operator [] (int i) {
			if (i < 0 || i >= size) {
				cerr << "Index error!" << endl;
				exit(1);
			}
			return data[i];
		}
	};
	
	#define LENGTH 19
	
	int main() {
		row <double, LENGTH> rf;
		
		// умалчиваемое значение для size
		row <int> ri; 
		
		// умолчание для обоих параметров
		row <> rc;
		
		for (int i = 0; i < LENGTH; i++) {
			rf[i] = i;
			ri[i] = i * i;
			rc[i] = 'A' + i; 
		}
		
		for (int i = 0; i < LENGTH; i++)
			cout << rf[i] << ' ' << ri[i] << ' ' << rc[i] << '\n';
		cout << endl;
		return 0;
	}
