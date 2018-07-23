//p10_06.cpp - массивы строк, обмены значений строк

	#include <iostream>
	#include <string>
	
	using namespace std;
	
	int main() {
		string array[] = {"Варшава", "Буэнос-Айрес", "Венеция", "Бонн", "Акра", "Рим", "Москва", "Монтевидео", "Яя"};
		
		int len = sizeof(array) / sizeof(array[0]);
		
		for (int j = 0; j < len -1; j++)
			for (int k = 0; k < len; k++)
				if (array[j].length() > array[k].length()) array[j].swap(array[k]);
		for (int i = 0; i < len; i++)
			cout << array[i] << endl;
		return 0;
	}
