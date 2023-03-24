#include <iostream>
using namespace std;

class Date
{
public:
   Date( int mn, int dy, int yr ) 
   {
    //    month++;
   }

   const int month = 99;
};

// int Date::month = 111;

int main()
{
    Date MyDate( 7, 4, 1998 );
    cout << MyDate.month << endl;

    return 0;
}