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
   const Date BirthDate( 1, 18, 1953 );
   BirthDate.getMonth();
   MyDate.getMonth();

}