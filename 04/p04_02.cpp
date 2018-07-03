//p04_02.cpp - названия нечётных целых цифр, не меньших заданной
#include <iostream>

using namespace std;

int main()
{	int ic;
	cout << "\nВведите любую десятичную цифру: ";
	cin >> ic;
	cout << '\n';
  
	switch (ic)
	{
		case 0: case 1: cout << "Один, " << endl;
		case 2: case 3: cout << "Три, " << endl; 
		case 4: case 5: cout << "Пять, " << endl; 
		case 6: case 7: cout << "Семь, " << endl; 
		case 8: case 9: cout << "Девять, " << endl; 
        
        break; // выход из переключателя
		default: cout << "Ошибка! Это не цифра!";
	}       //конец переключателя
    
return 0;
}
