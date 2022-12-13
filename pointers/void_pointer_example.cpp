#include <iostream>
using namespace std;

int main()
{
	int a = 10;
    char b = 'b';
	void* ptr = &a;

	cout << *(int *)ptr << endl;

    ptr = &b;
    cout << *(char *)ptr << endl;

	return 0;
}
