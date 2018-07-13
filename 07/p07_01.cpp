//p07_01.cpp - цепочки подстановок и директива #undef

#include <iostream>

using namespace std;

int main() {
	#define K 50
	#define PE cout << "K = " << K << endl;
	
	PE;
	
	#undef K
	#define K 30
	
	PE;
	
	cout << '\n';
	return 0;
}
