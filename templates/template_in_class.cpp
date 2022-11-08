#include <iostream>
#include <unordered_map>
using namespace std;

template <typename T> void assign_val(T x)
    {
        // return (x > y) ? x : y;
        // return x.do_it();
        x.do_it();
    }

template <typename T> void find_val(int i, const T& x)
    {
        // if (is_same<x, unordered_map<int, MyClass>::value)
        //     cout << "MyClass";

        auto& g = x.find(i);
        // unordered_map<int, T>::const_iterator got = x.find (i);
        // return (x > y) ? x : y;
        // return x.do_it();
        // x.do_it();
    }


class MyClass1 {       // The class
    public:             // Access specifier

    MyClass1() { // Constructor with parameters
        myNum = 1;
        myString = "yYy";

        unordered_map<int, string> sales;
        // Mapping values to keys
        sales[5] = "10";
        sales[3] = "5";
        sales[20] = "100";
        sales[1] = "1";

    }

    void do_it()
    {
        cout << "Sales.";
    }

    private:
        int myNum;        // Attribute (int variable)
        string myString;  // Attribute (string variable)

};


class MyClass {       // The class
    public:             // Access specifier

    MyClass() 
    { 
        myNum = 1;
        myString = "xXx";

        unordered_map<int, int> order;
        // Mapping values to keys
        order[5] = 10;
        order[3] = 5;
        order[20] = 100;
        order[1] = 1;

    }

    void do_it()
    {
        cout << "Order.";
    }
    

    private:
        int myNum;        // Attribute (int variable)
        string myString;  // Attribute (string variable)

};

// int main() {
//     MyClass myObj;  // Create an object of MyClass

//     // Print attribute values
//     cout << myObj.myNum << "\n";
//     cout << myObj.myString << "\n";

//     // Access attributes and set values
//     myObj.myNum = 15; 
//     myObj.myString = "Some text";

//     cout << myObj.myNum << "\n";
//     cout << myObj.myString << "\n";

//     cout << myObj1.myNum << "\n";
//     cout << myObj1.myString;
  
//     return 0;   
// }

int main()
{
    MyClass myObj;  // Create an object of MyClass
    MyClass1 myObj1;  // Create an object of MyClass
    assign_val(myObj);
    assign_val(myObj1);
    
    unordered_map<int, MyClass> order_map;
    order_map[5] = myObj;
    find_val(5, order_map);
    

	return 0;
}