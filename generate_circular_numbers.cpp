#include<iostream>
using namespace std;


int main()
{
    int i, offset, range;
    cin >> i;
    cin >>offset;
    cin >>range;

    for (int l = 1; l <= i; l++ )
    {
        int p = l % range;
        if ((offset == 0) & (p == 0))
            cout << range << " ";
        else
            cout << p + offset << " ";
    }
}