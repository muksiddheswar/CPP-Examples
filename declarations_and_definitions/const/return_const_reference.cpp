#include <iostream>
using namespace std;

class Date
{
public:
   Date( int mn, int dy, int yr ) {} ;
   int getMonth() const;     // A read-only function
   const int& getMonth();     
   
private:
   int month;
};

int Date::getMonth() const
{
   return month;        
}

const int& Date::getMonth() 
{
   month = 1;  
   cout<< "modified" <<endl;
   return month;        
}

int main()
{
   Date MyDate( 7, 4, 1998 );
   const int& i = MyDate.getMonth();
   // i += 1;  // Not possible.


}