#include <iostream>
using namespace std;

class Date
{

private:
    int day;

public:
   Date( int mn, int dy, int yr ) 
   {
       month++;
   }

   static int month;

   static int getMonth()
   {
    //    cout << day;  // Not Possible
       return month;
   }
};

int Date::month = 111;

int main()
{
    Date MyDate( 7, 4, 1998 );
    cout << MyDate.month << endl;

    Date MyDate1( 7, 4, 1998 );
    cout << Date::getMonth() << endl;

    return 0;
}