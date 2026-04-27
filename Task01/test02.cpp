//pointer
#include <iostream>
using namespace std;

int main() {
	int* ptr_a;
	short* ptr_h;
	float* ptr_f;
	double* ptr_d;
	long long* ptr_l;
	char* ptr_n;
	bool* ptr_b;
	void* ptr_v;

	cout << "Size of int type: " << sizeof(ptr_a) << endl;
	cout << "Size of double type: " << sizeof(ptr_d) << endl;
	cout << "Size of float type: " << sizeof(ptr_f) << endl;
	cout << "Size of char type: " << sizeof(ptr_n) << endl;
	cout << "Size of long long type: " << sizeof(ptr_l) << endl;
	cout << "Size of short type: " << sizeof(ptr_h) << endl;
	cout << "Size of bool type: " << sizeof(ptr_b) << endl;
	cout << "Size of void type: " << sizeof(ptr_v) << endl;

	return 0;
}