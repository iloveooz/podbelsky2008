//p05_10.cpp - коммутативность сложения
#include <iostream>

using namespace std;

int main()
{
	int m[ ] = { 10, 20, 30, 40 };
	int j = 1;

	cout << "m[j] \t\t= " 		<< m[j] 		<< ";\t  j = " << j << endl;
	cout << "*(m + j++) \t= " 	<< *(m + j++) 	<< ";\t  j = " << j << endl;
	cout << "*(++j + m) \t= " 	<< *(++j + m) 	<< ";\t  j = " << j << endl;
	cout << "j[m] \t\t= " 		<< j[m] 		<< ";\t  j = " << j << endl;
	cout << "*(j-- + m) \t= " 	<< *(j-- + m) 	<< ";\t  j = " << j << endl;
	cout << "j--[m] \t\t= " 	<< j--[m] 		<< ";\t  j = " << j << endl;
	cout << "*(--j + m) \t= " 	<< *(--j + m) 	<< ";\t  j = " << j << endl;
	cout << "--j[m] \t\t= " 	<< --j[m] 		<< ";\t  j = " << j << endl;
	
	cout << "3[m] = " << 3[m] << "  2[m] = " << 2[m] << ";\t  j = " << j << endl;  
	cout << "1[m] = " << 1[m] << "  0[m] = " << 0[m] << ";\t  j = " << j << endl;
	
	return 0;
}
