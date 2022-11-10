#include <iostream>
#include <vector>

using namespace std;

class MyClass {       // The class
  public:             // Access specifier

    MyClass() { // Constructor with parameters
      myNum1 = 1;
      myNum2 = 100;
    }

    template <typename T> T user_login(string user_type)
    {
        if (user_type = "E")
            T = 1;
        else
            T = "no";
        return T;
    }

    private:
        int myNum1;
        int myNum2;

};

int main() {
    MyClass myObj;
    int i = myObj.user_login("E");
    string l = myObj.user_login("23");
  
    return 0;   
}