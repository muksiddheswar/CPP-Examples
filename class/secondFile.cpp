#include <iostream>
#include "secondFile.h"
using namespace std;

void myClass::func()
{
    cout << "this is a test function :)" << endl;
}

int myClass::getNumber()
{
    return number;
}