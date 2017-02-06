#include <iostream>
#include <string>
#include <vector>

void vectors()
{
	std::vector<std::string> strings;

	strings.push_back("one");
	strings.push_back("two");
	strings.push_back("three");

	// Looping
	for (size_t i = 0; i < strings.size(); i++)
	{
		std::cout << strings[i] << std::endl;
	}

	// Iterating
	for (auto it = strings.begin(); it != strings.end(); ++it)
	{
		std::cout << *it << std::endl;
	}
}
