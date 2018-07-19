//goods.h - класс "Товары на складе магазина"

	using namespace std;

// определение класса "товары"
	struct goods {
		char name[40]; 			// наименование товара
		double price;			// оптовая (закупочная) цена товара
		static int percent;		// торговая наценка, в %

		// вывод данных о товаре
		void Display() {
			cout << "\n" << name;
			cout << ", розничная цена: ";
			cout << long(price * (1.0 + goods::percent * 0.01)); 
		} 
	};




