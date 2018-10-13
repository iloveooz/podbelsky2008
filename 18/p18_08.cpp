//p18_08.cpp - контейнеры и их итераторы

	#include <iostream>
	#include <vector>
	
	using namespace std;
	
	int main() {
		// объявляем итераторы
		vector <int> :: iterator is;
		vector <int> :: reverse_iterator ri;
		
		int ari[] = { 1, 3, 5, 7, 11, 13, 17, 19 };
		
		// определяем контейнер
		vector <int> row(ari, ari + sizeof(ari) / sizeof(ari[0]));
		
		// определяем итератор
		is = row.begin();
		
		for (int i = 0; i < (sizeof(ari) / sizeof(ari[0])); i++) {
			cout << *(is + i) << '\t';
		}
		
		cout << endl;
		
		for (ri = row.rbegin(); ri != row.rend(); ri++)
			cout << *ri << '\t';
		
		cout << endl;
		return 0;
	}
