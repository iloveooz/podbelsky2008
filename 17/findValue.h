//findValue.h - шаблон функции для поиска заданного значения

	using namespace std;

	template <typename T, typename It>
	T* findValue(It beg, It end, T value) {
		while (beg != end) {
			if (*beg == value) return beg;
			++beg;
		}
		return 0;
	}
