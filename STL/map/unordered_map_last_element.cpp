// CPP program to demonstrate the
// unordered_map::begin() function
// when first element of the container
// is to be returned as iterator
#include <bits/stdc++.h>
using namespace std;

int main()
{

	// Declaration
	unordered_map<std::string, std::string> mymap;
	unordered_map<std::string, std::string>::iterator elem;

	// Initialisation
	mymap = { { "Australia", "Canberra" },
			{ "U.S.", "Washington" },
			{ "France", "Paris" } };

	// auto last_elem;
	for (auto i = mymap.begin(); i != mymap.end(); i++)
	{
		elem = i;
	}

	// Prints the elements of the last element in map
	cout << elem->first << " " << elem->second;

	return 0;
}
