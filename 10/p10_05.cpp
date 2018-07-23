//p10_05.cpp - работа с методами строк в стиле С++

	// упорядочить по алфавиту слова в строке
	#include <iostream>
	#include <string>
	
	using namespace std;
	
	// начало и длина расположенного раньше по алфавиту слова
	void firstWord(string line, int &beg, int &len) {
		
		string::size_type wordBeg = 0, wordEnd = 0, resBeg = 0, resEnd = line.length();
		
		string model(	"ABCDEFGHIJKLMNOPQRSTUVWXYZ" 
						// "abcdefghijklmnopqrstuvwxyz");
						   "zyxwvutsrqponmlkjihgfedcba");
		
		// выделяем и анализируем первое слово
		wordBeg = line.find_first_of(model, wordBeg);
		if (wordBeg == string::npos) { // нет слов в строке 
			beg = len = 0;
			return;
		}
		
		wordEnd = line.find_first_not_of(model, wordBeg);
		if (wordEnd == string::npos) { // в строке только одно слово
			beg = wordBeg;
			len = line.length() - wordBeg;
			return;
		}
		
		resBeg = wordBeg;
		resEnd = wordEnd;
		wordBeg = wordEnd;
		
		// в цикле сравниваем по алфавиту слова (со второго по последнее)
		while ((wordBeg = line.find_first_of(model, wordBeg)) != string::npos) {
			wordEnd = line.find_first_not_of(model, wordBeg);
			
			if (wordEnd == string::npos) wordEnd = line.length();
			if (line.substr(resBeg, resEnd - resBeg).compare(line.substr(wordBeg, wordEnd - wordBeg)) > 0) {
					resEnd = wordEnd;
					resBeg = wordBeg;
				}
			wordBeg = wordEnd;
			// cout << wordBeg << endl;
			// cout << "beg = " << beg << ", len = " << len << endl;
			// cout << "wordBeg = " << wordBeg << ", wordEnd = " << wordEnd << endl;
			// cout << "resBeg  = " << resBeg << ", resEnd = " << resEnd << endl;
		}
		beg = resBeg;
		len = resEnd - resBeg;
		return;
	}
	
	int main() {
		string phrase("one two three four five six seven eight nine ten LED APPLE");
		string result;
		int beg = 0, len = phrase.length();
		
		while (len != 0) {
			firstWord(phrase, beg, len);
			// cout << phrase << endl;
			// cout << result << ' ' << beg << ' ' << len << endl;
			
			
			result.append(phrase.substr(beg, len) + "  ");
			phrase.erase(beg, len);
		}
		
		// const char * ptr = result.c_str();
		// cout << ptr << endl;
		cout << result << endl;
		return 0;
	}
