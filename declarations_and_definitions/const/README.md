# CONST

## Bitwise constness:
Const variable is not editable by itself.

```
int x = 10;
const int* z = &x;
x = 11
// *z = 999;  <----- Not permissible.
```


## CONST values:

```
char * p1 = x; // Non Const pointer; Non Const data

const char * p2 = x; // Non Const pointer; Const data
char const *  p4 = x; // Non Const pointer; Const data

char * const p3 = x; // Const pointer; Non Const data
```

RULE: const binds left, unless there is nothing on the left, then it binds right.

```
(const --->> char)*
(char <<--- const)*
```


https://stackoverflow.com/q/4949254/4168707
https://stackoverflow.com/q/8091770/4168707

## CONST Member Variable
- CONST member  variables are possible.
- They must be initialise within the class body.



## CONST Member Functions

- CONST member function cannot modify any member variable (except mutable).
- CONST member function can only  call other const member functions.
- Member functions  can be overloaded purely (based) on CONST.

```
// Doesn't modify anything. Will be called for const objects.
int Date::getMonth() const 
{
   return month;        
}

// Modifies member. 
int Date::getMonth() 	
{
   month = 1;  
   return month;        
}
```


## Removing constness

- `const_cast` can be used to remove the constness of a class.

```
const Date BirthDate( 1, 18, 1953 );
Date& DatePointer = const_cast<Date &> (BirthDate);
DatePointer.setMonth(); // Possible because of const_cast
```

## Passing const reference to a function
- Copy of object not created.
- Reduces overhead of calling (cascading) constructor/destructor calls.
- Passed object reference cannot be used to modify.
- Overloading is not possible on this. 

Pass by value
	`int myFunc(Student S)`
	
Pass by non-const reference
	`int myFunc_NonConstReference(Student& S)`
	
Pass by const reference
In this case only const member functions can be called.
	`int myFunc_ConstReference(const Student& S)`
