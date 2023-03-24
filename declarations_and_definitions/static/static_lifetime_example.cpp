#include <iostream>
using namespace std;

void power()
{
    int i = 1;
    cout << i << endl;
    i *= 2;
}

void power1()
{
    static int x = 1;
    cout << x << endl;
    x *= 2;
}

int main()
{
    power();
    power();
    power();

    power1();
    power1();
    power1();
    return 0;
}