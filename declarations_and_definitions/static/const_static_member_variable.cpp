#include <iostream>
using namespace std;

class Date
{

public:
   Date( int mn, int dy, int yr ) {}
   const static int month;
   const static int day = 88;
};

const int Date::month = 111;
const int Date::day;

int main()
{
    Date MyDate( 7, 4, 1998 );
    cout << MyDate.month << endl;

    Date MyDate1( 7, 4, 1998 );
    cout << Date::month << endl;

    return 0;
}