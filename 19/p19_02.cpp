//p19_02.cpp - функции для обменов с потоками

	#include <iostream>
	
	using namespace std;
	
	#define PRINT(c) cout << #c << " = " << c << endl;
	
	int main() {
		char ss[] = "Merci";
		cout.put('\t').write(ss, sizeof(ss) - 1).put('!') << endl;
		cout << "Введите символы: " << endl;
		char cim;
		
		while(cin.peek() != '\n') {
			cin.get(cim);
			cout.put(cim);
		}
		
		cout << endl;
		
		return 0;
	}
	
	
	
