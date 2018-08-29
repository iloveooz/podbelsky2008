//p14_05.cpp - перегрузка операций при наследовании

	#include <iostream>
	using namespace std;

	class BAS {
		
	protected:
		int k;
		
		friend istream & operator >> (istream & in, BAS & b);
		friend ostream & operator << (ostream & out, const BAS & b);
	};
	
	istream & operator >> (istream & in, BAS & b) {
		cout << "k = ";
		in >> b.k;
		return in;
	}
	
	ostream & operator << (ostream & out, const BAS & b) {
		out << "k = " << b.k << endl;
		return out;
	}
	
	class DIR : BAS {
		double z;
		
		friend istream & operator >> (istream & in, DIR & b);
		friend ostream & operator << (ostream & out, const DIR & b);
	};
	
	istream & operator >> (istream & in, DIR & d) {
		cout << "BAS: ";
		operator >> (in, dynamic_cast<BAS&> (d));
		cout << "DIR::z = ";
		in >> d.z;
		return in;
	}
	
	ostream & operator << (ostream & out, const DIR & d) {
		out << "BAS:: ";
		out << dynamic_cast<const BAS &> (d);
		out << "DIR::z = " << d.z << endl;
		return out;
	}
	
	int main() {
		DIR one, two;
		cin >> one;
		two = one; 
		cout << two;
		return 0;
	}
	
	
			
