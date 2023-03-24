#include <iostream>
using namespace std;

class Date
{
public:
   Date( int mn, int dy, int yr ) 
   {
       month++;
   }

   static int month;
};

int Date::month = 111;

int main()
{
    Date MyDate( 7, 4, 1998 );
    cout << MyDate.month << endl;

    Date MyDate1( 7, 4, 1998 );
    cout << Date::month << endl;

    return 0;
}