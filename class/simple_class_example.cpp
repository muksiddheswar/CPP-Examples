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
};

int main() {
    MyClass myObj;  // Create an object of MyClass
    MyClass myObj1("Here", 1);  // Create an object of MyClass

    // Print attribute values
    cout << myObj.myNum << "\n";
    cout << myObj.myString << "\n";

    // Access attributes and set values
    myObj.myNum = 15; 
    myObj.myString = "Some text";

    cout << myObj.myNum << "\n";
    cout << myObj.myString << "\n";

    cout << myObj1.myNum << "\n";
    cout << myObj1.myString;
  
    return 0;   
}