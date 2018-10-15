//p19_03.cpp - переписать файл

	#include <string>
	#include <fstream>
	#include <iostream>
	
	using namespace std;
	
	int main() {
		char next;
		
		// имя исходного файла
		string source;
		
		cout << "Введите имя исходного файла: ";
		cin >> source;
		
		// входной файловый поток
		ifstream inFile(source.c_str());
		
		if (!inFile) {
			cerr << "\nОшибка открытия файла - " << source;
			exit(1);
		}
		
		// имя создаваемого файла
		string result;
		
		cout << "Введите имя выходного файла: ";
		cin >> result;
		
		// выходной файловый поток
		ofstream outFile(result.c_str());
		
		if (!outFile) {
			cerr << "\nОшибка открытия файла - " << result;
			exit(1);
		}
		
		while(inFile.get(next)) 
			outFile.put(next);
		cout << endl;
		return 0;
	}
