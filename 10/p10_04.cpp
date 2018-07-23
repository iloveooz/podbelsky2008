//p10_04.cpp - работа с методами класса string

	#include <iostream>
	#include <string>
	
	using namespace std;
	
	// функция выбирает из строки самое короткое слово
	string minWord(string line) {
		string::size_type wordBeg = 0, wordEnd = 0, resBeg = 0, resEnd = line.length();
		string model("ABCDEFGHIJGKLMNOPQRSTUVWXYZ");
		while ((wordBeg = line.find_first_of(model, wordBeg)) != string::npos) {
			
			cout << line.substr(resBeg, resEnd - resBeg) << endl;
			cout << wordBeg << ' ' << wordEnd << ' ' << resBeg << ' ' << resEnd << endl;
			wordEnd = line.find_first_not_of(model, wordBeg);
			
			if (wordEnd == string::npos) wordEnd = line.length();
			
			if (wordEnd - wordBeg < resEnd - resBeg) { 
				resEnd = wordEnd;
				resBeg = wordBeg;
			}
			wordBeg = wordEnd;
		}
		return line.substr(resBeg, resEnd - resBeg);
	}
	
	int main() {
		string phrase("QUOD LICET JOVI, NON LICET BOVI");
		cout << minWord(phrase) << endl;
		return 0;
	}
