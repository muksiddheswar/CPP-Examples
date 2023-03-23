#include <iostream>
using namespace std;

class Date
{
public:
   Date( int mn, int dy, int yr ): month(mn), day(dy), year(yr) {} ;
   int getMonth() const;     // A read-only function
   void addDay() const;
   void setMonth( int mn );   // A write function; can't be const
private:
   int month;
   mutable int day;
   int year;
};

int Date::getMonth() const // Doesn't modify anything
{
   // month = 1;  Not allowed
   addDay();
   // setMonth(4); Not allowed
   return month;        
}

void Date::setMonth( int mn ) // Modifies data member
{
   month = mn;          
}

void Date::addDay() const // Modifies mutable
{
   // month = 1;  Not allowed
   day = day + 1;
}


int main()
{
   Date MyDate( 7, 4, 1998 );
   MyDate.setMonth( 4 );       // Okay

   const Date BirthDate( 1, 18, 1953 );
   // BirthDate.setMonth( 4 ); // Error
   BirthDate.getMonth();       // Okay
   BirthDate.addDay();         // Okay

}