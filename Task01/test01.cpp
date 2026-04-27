#include <iostream>
using namespace std;

int main() {
	int a;
	short h;
	float f;
	double d;
	string s;
	long long l;
	char n;
	bool b;
	int array[10];

	cout << "Size of int type: " << sizeof(a) << endl;
	cout << "Size of double type: " << sizeof(d) << endl;
	cout << "Size of float type: " << sizeof(f) << endl;
	cout << "Size of string type: " << sizeof(s) << endl;
	cout << "Size of char type: " << sizeof(n) << endl;
	cout << "Size of long long type: " << sizeof(l) << endl;
	cout << "Size of short type: " << sizeof(h) << endl;
	cout << "Size of bool type: " << sizeof(b) << endl;
	cout << "Size of int array type: " << sizeof(array) << endl;

	return 0;
}