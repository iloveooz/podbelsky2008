//p03_03.cpp - область действия глобальных имён
#include <iostream>

using namespace std;

int LC;
char scope[] = "Declaration region";

	void WW() {
		LC = sizeof(scope); 
	}

void prin() {
	cout << "\nДлина строки sсope = " << LC << "\n";
  
  for (int i = 0; i <= LC; i++) cout << scope[i];
}

int main(void) {
	WW();
	prin();
	
	cout << endl;
	return 0;
}
