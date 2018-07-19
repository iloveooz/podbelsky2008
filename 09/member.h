// member.h - класс member (элементы двусвязного списка)
	
	#ifndef _MEMBER_
	#define _MEMBER_
	
	class member {
		// адрес последнего элемента списка
		static member *last_memb;
		
		// на предыдущий элемент списка
		member *prev;
		
		// на следующий элемент списка
		member *next;
		
		// содержимое (значение) элемента списка
		char letter;
		
	public:
		// прототипы функций для работы со списком
		
		// конструктор
		member (char cc) { letter = cc; }
		
		// добавление элемента в конец списка
		void add(void);
		
		// вывод содержимого списка:
		static void reprint();
	};
	
	#endif
