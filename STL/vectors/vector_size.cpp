// C++ program to illustrate vector size
#include <bits/stdc++.h>
using namespace std;

int main()
{
	vector<int> g1;

    cout << g1.size() <<endl;

	for (int i = 1; i <= 10; i++)
		g1.push_back(i * 10);
    
    cout << g1.size() <<endl;

	return 0;
}

