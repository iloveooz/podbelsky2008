//p10_07.cpp - вывести на экран строки файла, содержащие заданную последовательность символов (или предложение)

	#include <iostream>
	#include <fstream>
	#include <string>
	
	using namespace std;
	
	int main() {
		string sentence; // искомое предложение
		string source; // имя файла
		cout << "Введите имя файла: "; 

		getline(cin, source);
		
		// открыть файл source и связать его с потоком inFile
		ifstream inFile(source.c_str());
		if (!inFile) {
			cerr << "Ошибка при открытии файла: " << source;
			cin.get();
			exit(1);
		}
		
		// сформировать имя выходного файла
		string result;
		int pos;
		pos = source.find('.');
		result = source.erase(pos) + ".res";
		
		// открыть выходной файл и связать его с потоком outFile
		ofstream outFile(result.c_str());
		if (!outFile) {
			cerr << "Ошибка при открытии файла: " << source;
			cin.get();
			exit(1);
		}
		
		cout << "Введите строку - ";
		getline(cin, sentence);
		string line;
		
		while(1) {
			getline(inFile, line);
			if (inFile.eof()) break;
			string::size_type res; // позиция в строке
			res = line.find(sentence);
			
			if (res == string::npos) continue; // нет в строке
			outFile << line << '\n'; // запись строки в файл
		}
		
		cout << "Смотри файл \"" + result + "\"!" << endl;
		return 0;
	}
