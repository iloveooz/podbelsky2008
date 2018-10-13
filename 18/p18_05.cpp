//p18_05.cpp - вставка в последовательный контейнер

	#include <iostream>
	#include <vector>
	
	using namespace std;
	
	int main() {
		vector <int> myVec;
		
		myVec.insert(myVec.end(), 44);
		
		cout << "*myVec.begin() = " << *myVec.begin() << endl;
		
		return 0;
	}
