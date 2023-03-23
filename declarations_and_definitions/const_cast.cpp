#include <iostream>
using namespace std;

class Date
{
public:
   Date( int mn, int dy, int yr ) {} ;
   int getMonth() const;     // A read-only function
   int getMonth();     
   
private:
   int month;
};

int Date::getMonth() const // Doesn't modify anything
{
   // month = 1;  Not allowed
   return month;        
}

int Date::getMonth() 
{
   month = 1;  
   cout<< "modified" <<endl;
   return month;        
}

int main()
{
    Date MyDate( 7, 4, 1998 );
    Date* DatePtr = & MyDate;
    Date& DatePtr1 = MyDate;
    DatePtr->getMonth();
    
    const Date BirthDate( 1, 18, 1953 );
    // Date* DatePtr = & BirthDate;     // Not Allowed
    // Date& DatePtr1 = BirthDate;      // Not Allowed
    Date& DatePointer = const_cast<Date &> (BirthDate);
    DatePointer.getMonth();

    Date const * DatePointer2 = &BirthDate;
    DatePointer2->getMonth();
    
 

}