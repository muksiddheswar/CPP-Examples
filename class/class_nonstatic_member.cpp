#include <tuple>
#include <iostream>
#include <vector>

using namespace std;

class MyClass {       // The class
  public:             // Access specifier
    int myNum;        // Attribute (int variable)
    string myString;  // Attribute (string variable)

    MyClass() { // Constructor with parameters
      myNum = 1;
      myString = "xXx";
    }

    MyClass(string x, int z) { // Constructor with parameters
      myNum = z;
      myString = x;
    }

    int this_func()
    {
        int l;
        int m;
         tie(l, m)= get_input();
        cout << l << m;
    }

    tuple<int, int> get_input()
    {
        int i;
        int j;
        cin>> i;
        cin>> j;
        return make_tuple(i, j);
    }
};

int main() {
    MyClass myObj;  // Create an object of MyClass
    MyClass myObj1("Here", 1);  // Create an object of MyClass

    myObj1.this_func();

    return 0;   
}