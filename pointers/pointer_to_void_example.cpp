#include <iostream>

int main()
{
    int n = 1;
int* p1 = &n;
void* pv = p1;
int* p2 = static_cast<int*>(pv);
std::cout << *p2 << '\n'; // prints 1
// std::cout << *pv << '\n'; // 'void*' is not a pointer-to-object type
return 0;
}