//new_complex.h - расширение класса комплексных чисел

	#ifndef NEW_COMPLEX // защита от повторных включений
	#define NEW_COMPLEX
	
	#include <iostream>
	#include "my_complex.h"
	
	using namespace std;
	
	// перегрузка операции вычитания
	myComplex operator - (myComplex one, myComplex two) {
		return myComplex (one.real() - two.real(), one.imag() - two.imag());
	}
	
	// перегрузка операции умножения (*)
	myComplex operator * (myComplex p, myComplex z) {
		return myComplex (p.real() * z.real() - p.imag() * z.imag(), \
		p.real() * z.imag() + z.real() * p.imag());
	}
	
	// бинарная операция сравнения объектов 
	bool operator == (myComplex c1, myComplex c2) {
		return (c1.real() == c2.real() && c1.imag() == c2.imag());
	}
	
	#endif
	
