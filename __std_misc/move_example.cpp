#include <iostream>
using namespace std;

class MyClass {       // The class
  public:             // Access specifier
    int myNum;        // Attribute (int variable)
    string myString;  // Attribute (string variable)

    MyClass() { // Constructor with parameters
      myNum = 0;
      myString = "xXx";
    }

    MyClass(string x, int z) { // Constructor with parameters
      myNum = z;
      myString = x;
    }

    MyClass(MyClass& m) { // Copy constructor
        cout << "Copy" << endl;
        myNum = m.myNum;
        myString = m.myString;
    }

    string getData() const
    {
        return "Num: " + to_string(myNum) + " String: " + myString;
    }
};

template <class T> void swap (T& a, T& b)
{
    T tmp(a);
    a = std::move(b);   
    b = std::move(tmp);
}

template <class T> void swap_without_move (T& a, T& b)
{
    T tmp(a);
    a = b;   
    b = a;
}

int main() {
    MyClass myObj;  // Create an object of MyClass
    MyClass myObj1("Here", 1);  // Create an object of MyClass

    cout << myObj.getData() << endl;
    cout << myObj1.getData() << endl;
    swap(myObj, myObj1);
    cout << myObj.getData() << endl;
    cout << myObj1.getData() << endl;

    swap_without_move(myObj, myObj1);

    return 0;   
}