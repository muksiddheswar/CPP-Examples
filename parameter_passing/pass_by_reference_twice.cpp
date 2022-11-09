#include <iostream>
#include <vector>

using namespace std;

class MyClass {       // The class
  public:             // Access specifier

    MyClass() { // Constructor with parameters
      myNum1 = 1;
      myNum2 = 100;
    }

    void change_my_num1()
    {
        int i = change_my_num2(& myNum1);
        cout<< endl << "Here1: " <<i;

    }

    int change_my_num2(int* num)
    {
        int i = change_value(num);
        cout<< endl<<"Here2: " <<i;
        return i;
    }

    int change_value(int* num )
    {
        *num += 1;
        return *num;
    }

    void value_print()
    {
        cout<< endl<<myNum1;
        cout<< endl<<myNum2;
    }

    private:
        int myNum1;
        int myNum2;



};

int main() {
    MyClass myObj;  // Create an object of MyClass
    myObj.value_print();
    myObj.change_my_num1();
    myObj.value_print();
  
    return 0;   
}