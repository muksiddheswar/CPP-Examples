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

//    std::reference_wrapper<int> reference2;

    // --------------------- REASSIGNMENT ---------------------
    int b = 6;
    pointer2 = &b;

    // Not possible!
    // &reference1 = b; // Not a modifiable lvalue.

    // --------------------- MEMORY ---------------------
    cout << &pointer1 << endl << &a << endl;
    cout << &reference1 << endl << &a << endl;

    // --------------------- NULL VALUE ---------------------
    pointer1 = NULL;

    // --------------------- INDIRECTION ---------------------
    int ** pointer3 = &pointer1;

    // Not possible
    //int && reference3 = reference1;

    *pointer2 += 1; // This will adjust a.
    pointer2 += 1; // This will increase the memory address being pointed to.
    cout << b << endl;

    reference1 += 1;
    // Not possible
    // &reference1 += 1;

    cout << a << endl;

    return 0;
}