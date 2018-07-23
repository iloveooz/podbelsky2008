//p10_03.cpp - работа со строками в стиле С++

	#include <iostream>
	#include <string>
	
	using namespace std;
	
	#define PRINT(x) cout << #x << " = " << x << endl;
	
	int main() {
		// в начале 11 пробелов
		string line ("           Cum grano salis!");
		PRINT(line.size());
		PRINT(line.capacity());
		
		int i;
		
		// ищем первый непробельный символ
		for (i = 0; i < line.length(); i++) 
			if (line.at(i) != ' ') break;
		
		// удаляем пробелы в начале строки
		if (i < line.length())
			line = line.erase(0, i);
			
		line.insert(string::size_type(0), 1,'(');
		
		int k;
		
		// ищем конец первого слова
		
		for (k = 0; k < line.length(); k++)
			if(line.at(k) == ' ') break;
			
		line.insert(k, 1LU, ')');
		
		PRINT(line);
		PRINT(line.size());
		PRINT(line.capacity());
		
		cout << endl;
		return 0;
	}
