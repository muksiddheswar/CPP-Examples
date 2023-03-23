#include <iostream>
using namespace std;

int main() {

    int x = 10;
    int* y = &x;
    cout << y << endl;
    cout << &y << endl;
    cout << *y << endl;
    *y = 111;
    cout << x << endl;

    const int* z = &x;
    cout << *z << endl;
    // *z = 999;  <----- Not permissible.
    x = 88;
}