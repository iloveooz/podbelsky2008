//p03_14.cpp - ����� ����� ��������� ����� ������� ����������
	#include <iostream>

	using namespace std;

	int x;  // ����������� ���������� ����������

	void func(); // ����������� �������� �������


	int main() {

		extern int x;    // �������� ��������
		x = 4;
		func();
		cout << "\nx = " << x << endl;
		return 0;
	}

	void func(void) {
		extern int x;  // �������� �������� 
		x += 2;
	}
