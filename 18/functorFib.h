// functorFib.h - функтор (класс функциональных объектов)

	class functorFib {
		int one;
		int two;
	public:
		functorFib (int x = 1, int y = 1) : one(x), two(y) { }
		
		// функциональный объект
		int operator ( ) (void) {
			int z; 
			z = one + two;
			one = two;
			two = z;
			return z;
		}
	};
	
	
