#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

int parsingTextFiles()
{
	std::string filename = "stats.txt";
	std::ifstream inputStream;

	inputStream.open(filename);
	if (!inputStream.is_open())
	{
		return 1;
	}

	while (!inputStream.eof())
	{
		std::string line;
		getline(inputStream, line, ':');

		int population;
		inputStream >> population;

		// Clear out the newline character.
		line.erase(std::remove(line.begin(), line.end(), '\n'), line.end());

		// Clear the whitespace from the beginning of the inputStream.
		inputStream >> std::ws;

		std::cout << line << " -- " << population << std::endl;
	}

	return 0;
}
