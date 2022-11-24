
#include<bits/stdc++.h>
using namespace std;

int main ()
{
	vector<int> vec { 10, 20, 30, 40 };
    vector<tuple<int, int>> vec1 { {1,0}, {2,0}, {3,0}, {4,0} };
	vector<int>::iterator it;

	cout << "Original vector :";
	for (int i=0; i<vec.size(); i++)
		cout << " " << vec[i];

	cout << "\n";

	// Element to be searched
	int ser = 300;

	// find function call
	it = find (vec.begin(), vec.end(), ser);
	if (it == vec.end())
	{
		vec.push_back(ser);
	}
	else
		cout << "Element " << ser <<" found at position : " ;

    tuple<int, int> tup = {1, 2};
    auto it1 = find(vec1.begin(), vec1.end(), tup);
	if (it1 == vec1.end())
	{
		cout << "here11";
		vec1.push_back(tup);
	}
	else
		cout << "here";

	return 0;
}
