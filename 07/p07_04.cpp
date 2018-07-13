//p07_04.cpp - макросы, предопределенные имена, директива #line

	#include <iostream>
	using namespace std;
	
	#define INPUT(x) { cout << #x" = "; cin >> x; }
	#define OUTPUT(x) cout << #x" = " << x << endl;
	
	// макрос ввода и суммирования чисел
	#define CYCLE(SUMMA) { \
		double _MEMB; \
		SUMMA = 0.0; \
		do { INPUT(_MEMB) \
			SUMMA += _MEMB; } \
			while (_MEMB); }
			
	int main() {
		double result;
		OUTPUT(__FILE__);
		OUTPUT(__LINE__);
		
		CYCLE(result);
		
		#line 100 "file_fantom.cpp"
			OUTPUT(__FILE__);
			OUTPUT(__LINE__);
			OUTPUT(result);
		
		return 0;
	}
