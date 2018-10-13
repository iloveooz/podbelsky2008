//p18_13.cpp - алгоритм set_difference

	#include <iostream>
	#include <string>
	#include <algorithm>
	
	using namespace std;
	
	int main() {
		string strArray[] = { "five", "four", "one", "six", "two", "three" };
		int lenStr = sizeof(strArray) / sizeof(strArray[0]);
		
		string line[] = { "four", "two" };
		int lenLine = sizeof(line) / sizeof(line[0]);
		
		string result[9];
		cout << "the begin figures: " << endl;
		
		for(int j = 0; j < lenStr; j++) 
			cout << strArray[j] << ' ';
			
		set_difference(strArray, strArray + lenStr, line, line + lenLine, result);
		
		cout << endl << "the result figures: " << endl;
		for (int j = 0; result[j].length() != 0; j++)
			cout << result[j] << ' ';
		
		cout << endl;
		return 0;
	}
