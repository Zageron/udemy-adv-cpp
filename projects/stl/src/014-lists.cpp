#include <iostream>
#include <string>
#include <list>

void lists()
{
	std::list<int> numbers;
	numbers.push_back(1);
	numbers.push_back(2);
	numbers.push_back(3);
	numbers.push_front(0);

	auto it = numbers.begin();
	it++;
	numbers.insert(it, 100);

	auto eraseIt = numbers.begin();
	eraseIt++;
	eraseIt = numbers.erase(eraseIt);
	std::cout << "erase: " << *eraseIt << std::endl;

	for (auto it = numbers.begin(); it != numbers.end(); it++)
	{
		if (*it == 2)
		{
			numbers.insert(it, 1234);
		}

		if (*it == 1)
		{
			it = numbers.erase(it);
			--it;
		}
	}

	for (auto it = numbers.begin(); it != numbers.end(); it++)
	{
		std::cout << *it << std::endl;
	}
}