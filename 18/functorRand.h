//functorRand.h - функтор (класс функциональных объектов)

	#ifndef _functorRand_
	#define _functorRand_
	
	#include <cstdlib>
	
	using namespace std;
	
	class functorRand {
		int miR, maR;
		
	public:
		functorRand(int x = 0, int y = 100) : miR(x), maR(y) { }
		
		int operator () () {
			return rand() % (maR - miR) + miR;
		}
	};
		
	#endif	
