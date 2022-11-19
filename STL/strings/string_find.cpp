# include <iostream>

#include <string>
using namespace std;


int main()
{
    string test = "!@#$%^&*()-+";
    string res = ".";

    if (test.find(res)!= string::npos )
        cout << "YES";

    return 0;
}