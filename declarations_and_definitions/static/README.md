# STATIC

## Storage Classes:
- Automatic
- Register
- External
- Static


## Static Type specifier governs:
- Lifetime: Object persists between different function calls
- Default Value: 0 (int and float), \o (char)
- Memory Location: Memory

</br>

- Static member functions and variables are shared by all objects of a class. (no copies)
- Static member variables must be defined outside the class body. (.cpp file and not .h file)
- Static member functions can only access other static members.

- Const Static member variables are possible.
    - There are two ways to initialise them

```
class Date
{

public:
   Date( int mn, int dy, int yr ) {}
   const static int month;   // Method 1
   const static int day = 88; // Method 2
};

const int Date::month = 111;   // Method 1
const int Date::day;   // Method 2
```


