//p06_06.cpp - массивы строки в качестве параметров
#include <iostream>

using namespace std;

int len(char e[])
{
	int m = 0;
	while (e[m++]);
	return m - 1;
}
  
int main ()
{
	char E[] = "Slovo o polku Igoreve!"; // "былина" (лат.)
	cout << "\nДлина строки \"" << E << "\" равна " << len(E) << endl;
	
	char P[] = "Слово о полку Игореве!"; // "былина" (др.рус.)
	cout << "\nДлина строки \"" << P << "\" равна " << len(P) << endl;
	
	return 0;
}
