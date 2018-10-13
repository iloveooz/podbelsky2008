//iterPrint.h - обобщённый алгоритм печати элементов последовательности

	using namespace std;

	// k - количество столбцов
	template <int k, typename E>
		void iterPrint(E beg, E end) {
			int i = 1;
			while (beg != end) {
				cout << "[" << i++ << "] = " << *beg << ((i + 1) % k ?  "\t" : "\n");
				++beg;
			}
			cout << endl;
		}
	
	
