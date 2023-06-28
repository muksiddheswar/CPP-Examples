#include <iostream>
using namespace std;
#include <memory>

int main()
{
    std::shared_ptr<int> sptr {nullptr};
    std::shared_ptr<int> sptr1 = sptr;
    cout << sptr.use_count() << endl;
    
	return 0;
}
