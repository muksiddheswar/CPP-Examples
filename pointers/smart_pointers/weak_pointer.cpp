#include <iostream>
using namespace std;
#include <memory>

int main()
{
	 // empty definition
    std::shared_ptr<int> sptr;
    sptr.reset(new int);
    *sptr = 10;

    // get pointer to data without taking ownership
    std::weak_ptr<int> weak1 = sptr;

    if(auto tmp = weak1.lock())
        std::cout << "weak1 value is " << *tmp << '\n';
    else
        std::cout << "weak1 is expired\n";

    cout << sptr.use_count() << endl;
    sptr.reset(new int);
    *sptr = 5;

    cout << sptr.use_count() << endl;
    // weak1 is expired!
    if(auto tmp = weak1.lock())
        std::cout << "weak1 value is " << *tmp << '\n';
    else
        std::cout << "weak1 is expired\n";


	return 0;
}
