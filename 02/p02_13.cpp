//p02_13.cpp - операции присваивания
	#include <iostream>

	using namespace std;

	int main()
	{ 
		int k;
		cout << "\n k = 35 / 4		PABHO " << (k = 35 / 4);
		cout << "\n k /= 1 + 1 + 2 	PABHO " << (k /= 1 + 1 + 2);
		cout << "\n k *= 5 - 2 		PABHO " << (k *= 5 - 2);
		cout << "\n k %= 3 + 2 		PABHO " << (k %= 3 + 2);
		cout << "\n k += 21 / 3		PABHO " << (k += 21 / 3);
		cout << "\n k -= 6 - 6/2		PABHO " << (k -= 6 - 6 / 2);
		cout << "\n k <<= 2		PABHO " << (k <<= 2);
		cout << "\n k >>= 6 - 5		PABHO " << (k >>= 6 - 5);
		cout << "\n k &= 9 + 4 		PABHO " << (k &= 9 + 4);
		cout << "\n k |= 8 - 2 		PABHO " << (k |= 8 - 2);
		cout << "\n k ^= 10 		PABHO " << (k ^= 10);
		cout << endl;
		return 0;
	}
