//p06_07.cpp - одномерные массивы в качестве параметров
	#include <iostream> 
	#include <cmath>

	using namespace std;

	double cosinus(int n, double x[], double y[]) {
		double a = 0, b = 0, c = 0;
		
		for (int i = 0; i < n; i++) {
			a += x[i] * y[i];
			b += x[i] * x[i];
			c += y[i] * y[i];
		}
		
		return a / sqrt(double(b * c));
	}

	int main () {
		double vec1[] = { 1,  1,  1,  1,  1,  1,  1};
		double vec2[] = {-1, -1, -1, -1, -1, -1, -1};
	  
		cout << "\n Косинус cos(vec1, vec2) = " << cosinus(7, vec1, vec2) << endl;
		return 0;
	}
