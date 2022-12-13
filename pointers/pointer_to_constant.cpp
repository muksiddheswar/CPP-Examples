// C++ program to illustrate concept of the pointers to constant.

#include <iostream>
using namespace std;

// Driver Code
int main()
{

	int high{ 100 };
	int low{ 66 };
	const int* score{ &high };

	// Pointer variables are read from the right to left.
	cout << *score << "\n";

	// Score is a pointer to integer
	// which is constant 
    // *score = 78;

	// It will give you an Error:
	// assignment of read-only location
	// ‘* score’ because value stored in
	// constant cannot be changed
	score = &low;

	// This can be done here as we are
	// changing the location where the
	// score points now it points to low
	cout << *score << "\n";

	return 0;
}
