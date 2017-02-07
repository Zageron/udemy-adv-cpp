#include <iostream>
#include <string>
#include <vector>

void vectorsAndMemory()
{
	std::vector<double> numbers(20);
	std::cout << "Size of Vector: " << numbers.size() << std::endl;

	auto capacity = 0;

	for (size_t i = 0; i < 10000; i++)
	{
		if (numbers.capacity() != capacity)
		{
			capacity = numbers.capacity();
			std::cout << "Size of Vector: " << numbers.capacity() << std::endl;
		}

		numbers.push_back(i);
	}

	//numbers.reserve(100); // Immediately creates an array at capacity.
	//numbers.resize(100); // Changes the internal size variable, does not affect capacity.
	numbers.clear();
	std::cout << "Size of Vector: " << numbers.size() << std::endl;
	std::cout << "Size of Vector: " << numbers.capacity() << std::endl;
}
