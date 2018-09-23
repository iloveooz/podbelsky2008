//listStr.h - определения классов node, listIter, listStr и методов к ним
	
	using namespace std;
	
	// узел (элемент) связного списка для контейнера строк
	class node {
		// на следующий узел списка
		node *next;
		
		// строка, сохраняемая в списка
		string str;
		
		// односвязный список
		friend class listStr;
		
		// класс итераторов
		friend class listIter;
	};
	
	// класс итераторов для списка с узлами типа node:
	class listIter {
		// указатель на элемент списка
		node *current;
	public:
		// конструктор
		listIter (node *newNode = 0) : current(newNode) { }
		
		// разыменование итератора
		string & operator * () {
			return current->str;
		}
		
		// инкремент
		listIter & operator ++ () {
			current = current->next;
			return *this;
		}
		
		// сравнение итераторов на неравенство
		bool operator != (listIter other) {
			return other.current != current;
		}
		
		// сравнение итераторов на равенство
		bool operator == (listIter other) {
			return other.current == current;
		}
	};
	
	// класс контейнеров "односвязный список"
	class listStr {
		// первый элемент
		node *begNode;
		// последний элемент
		node *endNode;
	public:
		// конструктор
		listStr (string & st);
		
		// добавить элемент в конец списка
		void append (string & st);
		
		// деструктор (при его добавлении программа не компилируется)
		//~listStr();
		
		// начало списка
		listIter begin() {
			return listIter(begNode);
		}
		
		// конец списка
		listIter end() {
			// вернуть ссылку на пустой элемент
			return listIter(endNode->next);
		}
	};
		
		// конструктор (внешнее определение)
		listStr::listStr (string & st) {
			node *temp = new node;
			temp->next = 0;
			temp->str = st;
			begNode = temp;
			endNode = temp;
		}
		
		// добавить элемент в конец списка
		void listStr::append(string & newStr) {
			node *temp = new node;
			temp->next = 0;
			temp->str = newStr;
			endNode->next = temp;
			endNode = temp;
		}
		
		
