//p18_07.cpp - дополнение, удаление, индексирование

	#include <iostream>
	#include <deque>
	
	using namespace std;
	
	int main() {
		deque <char> deck;
		char ch;
		
		cout << "Введите символы (! - конец списка): ";
		while (cin >> ch, ch != '!')
			deck.push_front(ch);
		
		for (int i = 0; i != deck.size(); i++)
			cout << deck[i] << "\t";
		
		cout << endl;
		
		// удаляем последний элемент
		deck.pop_back(); 
		
		// удаляем первый элемент
		deck.pop_front();
		
		// удаляем последний элемент
		deck.pop_back();
		
		for (int i = 0; i != deck.size(); i++) 
			cout << deck[deck.size() - i] << '\t';
		
		cout << endl;
		return 0;
	}
