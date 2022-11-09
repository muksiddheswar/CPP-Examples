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

	// Initialisation
	mymap = { { "Australia", "Canberra" },
			{ "U.S.", "Washington" },
			{ "France", "Paris" } };

	// Iterator pointing to the first element
	// in the unordered map
	auto it = mymap.begin();

	// Prints the elements of the first element in map
	cout << it->first << " " << it->second;

    // Searching for element 12
    if (mymap.find("France") == mymap.end())
        cout << "Element Not Present\n";
    else
        cout << "Element Present\n";

    cout << mymap.at("U.S.");
    cout << mymap.at("NA");

	return 0;
}
