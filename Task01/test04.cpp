#include <iostream>
using namespace std;

// &
// *

int main() {
	int* ptr = NULL;

	int number = 10;
	ptr = &number;

	cout << "Before: number = " << number << endl;

	*ptr = *ptr + 5;

	cout << "After: number = " << number << endl;
	
	return 0;
}