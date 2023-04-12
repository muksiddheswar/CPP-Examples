#include <iostream>
using namespace std;

int main()
{
    int a = 10;

    // --------------------- INTIALISATION ---------------------
    int *pointer1 = &a;

    int *pointer2;
    pointer2 = &a;

    int &reference1 = a; // It is correct

    /*
    Not possible!
    int &reference2; // Reference variable needs an initialiser.
    reference2 = a; 
    */

    // --------------------- REASSIGNMENT ---------------------
    int b = 6;
    pointer2 = &b;

    // Not possible!
    // &reference1 = b; // Not a modifiable lvalue.

    // --------------------- MEMORY ---------------------
    cout << &pointer1 << endl << &a << endl;
    cout << &reference1 << endl << &a;

    // --------------------- NULL VALUE ---------------------
    pointer1 = NULL;

    // --------------------- INDIRECTION ---------------------
    int ** pointer3 = &pointer1;

    // Not possible
    //int && reference3 = reference1;

    return 0;
}