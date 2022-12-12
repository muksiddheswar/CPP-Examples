#include <typeinfo>
#include <iostream>
#include <string>


int main()
{
    int i = 0;
    std::string s = "Here it goes.";
    std::cout << typeid(i).name() << std::endl;
    std::cout << typeid(s).name() << std::endl;
    return 0;

}