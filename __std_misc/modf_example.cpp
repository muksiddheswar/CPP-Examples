#include<cmath>
#include<iostream>
using namespace std;


int main()
{

float n = 12.34;
float whole, fractional;

fractional = modf(n, &whole);

cout<<fractional<<endl;
cout<<&whole <<endl;
cout<<whole << endl;

return 0;

}