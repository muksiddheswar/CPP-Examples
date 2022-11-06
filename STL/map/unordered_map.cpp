// CPP program to demonstrate use of
// std::unordered_map
#include <bits/stdc++.h>

int main()
{
	// Unordered map
	std::unordered_map<int, int> order;

	// Mapping values to keys
	order[5] = 10;
	order[3] = 5;
	order[20] = 100;
	order[1] = 1;

	// Iterating the map and
	// printing unordered values
	for (auto i = order.begin();
		i != order.end(); i++)
	{
		std::cout << i->first
				<< " : "
				<< i->second << '\n';
	}

	std::unordered_map<int, int>::const_iterator got = order.find (5);

  if ( got == order.end() )
    std::cout << "not found";
  else
    std::cout << got->first << " is " << got->second;

  std::cout << std::endl;

}
