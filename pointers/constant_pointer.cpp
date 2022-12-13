// C++ program to illustrate concept
// of the constant pointers
#include <iostream>
using namespace std;

// Driver Code
int main()
{

	int a{ 90 };
	int b{ 50 };

	int* const ptr{ &a };
	cout << *ptr << "\n";
	cout << ptr << "\n";

	// Address what it points to

	*ptr = 56;

	// Acceptable to change the
	// value of a

	// Error: assignment of read-only
	// variable ‘ptr’
	// ptr = &b;

	cout << *ptr << "\n";
	cout << ptr << "\n";

	return 0;
}
