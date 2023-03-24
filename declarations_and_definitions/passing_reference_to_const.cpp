#include <iostream>
using namespace std;

class Date
{
public:
    int month;
    int day;
    int year;

    Date( int mn, int dy, int yr ): month(mn), day(dy), year(yr) 
    {
        cout<<"3 argument constructor." << endl;
    } ;

    Date(const Date &d )
    {
        month = d.month;
        day = d.day;
        year = d.year;
        cout<<"Copy constructor." << endl;
    } ;

    ~Date()
    {
        cout<<"Destructor." << endl;
    }

    string getRealData() const
    {
        string s = to_string(day) + " " + to_string(month) + " " + to_string(year);
        return s;
    }

    void setMonth(int mm)
    {
        month = mm;
    }
};

void getData(Date d)
{
    cout<<d.getRealData()<<endl;
    d.setMonth(10);
}

void getDataReferece(Date& d)
{
    cout<<d.getRealData()<<endl;
    d.setMonth(10);
}

void getDataConst(const Date& d)
{
    cout<<d.getRealData()<<endl;    // Not possible unless getRealData() is a const member function.
    // d.setMonth(10);                 // Not allowed.
}

int main()
{
    Date MyDate( 7, 4, 1998 );
    cout << "Before: ";
    cout<<MyDate.getRealData()<<endl;
    getData(MyDate);
    cout << "After: ";
    cout<<MyDate.getRealData()<<endl;

    cout << "Before: ";
    cout<<MyDate.getRealData()<<endl;
    getDataReferece(MyDate);
    cout << "After: ";
    cout<<MyDate.getRealData()<<endl;

    cout << "Before: ";
    cout<<MyDate.getRealData()<<endl;
    getDataConst(MyDate);
    cout << "After: ";
    cout<<MyDate.getRealData()<<endl;

    return 0;
}