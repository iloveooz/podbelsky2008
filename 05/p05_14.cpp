//p05_14.cpp - выделение и освобождение памяти для массива
#include <iostream>

using namespace std;

int main() {
	long (*lp) [2] [4], (*beg)[2][4];
	beg = lp = new long [3] [2] [4];

	cout << "Память выделена\n";

	for (int i = 0; lp < beg + 3; lp++, i++) {
		cout << "\n";
		for (int j = 0; j < 2; j++)
			for ( int k = 0; k < 4; k++)
				{
					lp[0][j][k] = long(i + j + k);
					cout << '\t' << lp[0][j][k];
				}
	}

	delete [] beg;

	cout << "\nПамять освобождена" << endl;
	return 0;
}
