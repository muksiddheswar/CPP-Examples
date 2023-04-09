#include <iostream>
using namespace std;

int main()
{
    int a = 10;

    // -------------------
    // -- INTIALISATION -- 
    int *pointer1 = &a;

    int *pointer2;
    pointer2 = &a;

    int &reference1 = a; // It is correct

    /*
    -- NOT POSSIBLE --
    int &reference2; // Reference variable needs an initialiser.
    reference2 = a; 
    */

    // -------------------
    // -- REASSIGNMENT --
    int b = 6;
    pointer2 = &b;

    // -- NOT POSSIBLE --
    // &reference1 = b; // Not a modifiable lvalue.

    return 0;
}