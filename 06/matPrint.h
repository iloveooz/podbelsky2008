	using namespace std;
	
	void matPrint(int n, int ** matr) {
		// цикл перебора строк
		for (int i = 0; i < n; i++ ) {
			cout << "line " << (i + 1) << ':';
			// цикл печати элементов строки:
			for (int j = 0; j < n; j++) 
				cout << '\t' << matr[i][j];
			cout << '\n';
		}
	}
