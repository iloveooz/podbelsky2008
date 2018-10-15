//p19_04.cpp - сортировка строк файла

	#include <iostream>
	#include <fstream>
	#include <string>
	#include <vector>
	#include <algorithm>
	
	using namespace std;
	
	// позиции и длины строк исходного файла
	struct comp {
		// позиция начала строки
		long beg;
		// длина строки
		size_t len;
	} ruct; // конкретная структура
	
	// предикат - сравнение длин строк при сортировке структур:
	bool op(comp a, comp b) {
		return a.len < b.len;
	}
	
	int main(int k, char * args[]) {
		if (k < 2) {
			cerr << "Ошибки аргументов main()" << endl;
			exit(1);
		}
		
		// входной файловый поток
		ifstream inFile(args[1]);
		if (!inFile) {
			cerr << "Ошибка файла" << args[1];
			exit(1);
		}		
		
		string line;
		
		// выходной файловый поток
		ofstream outFile("result.txt");
		if (!outFile) {
			cerr << "Ошибка файла result.txt" << args[1];
			exit(1);
		}		
		
		// позиции и длины строк файла
		vector <comp> begins;
		
		while (!inFile.eof()) {
			// позиция начала очередной строки
			ruct.beg = inFile.tellg();
			// чтение строки из файла
			getline(inFile, line);
			// длина строки
			ruct.len = line.size();
			// запись структуры в вектор
			begins.push_back(ruct);
		}
		
		// сортировка элементов вектора по значениям длин строк
		sort(begins.begin(), begins.end(), op);
		// сброс флагов потока
		inFile.clear();
		// закрытие файла
		inFile.close();
		// повторное открытие файла для чтения
		inFile.open(args[1], ios::in);
		
		// для позиции начала строки в файле
		long pos;
		// для чтения очередного символа из файла
		char next;
		
		// цикл переписывания строк
		for(unsigned int i = 0; i < begins.size(); i++) {
			pos = begins[i].beg;
			// установка позиции чтения
			inFile.seekg(pos, ios::beg);
			line = "";
			// цикл чтения символов и формирование выходной строки:
			for(unsigned int j = 0; j < begins[i].len; j++) {
				inFile.get(next);
				if(next != '\n' && next != '\r') line += next;
				else j--;
			}
			// запись строки в файл результатов
			if(line.size() != 0)
				outFile << line << '\n';
		}
		cout << endl;
		return 0;
	}
	
	
			
