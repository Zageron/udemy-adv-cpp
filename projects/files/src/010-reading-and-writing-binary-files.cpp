#include <iostream>
#include <fstream>
#include <string>

#include "009-structs-and-padding.h"

void readingAndWritingBinaryFiles()
{
	std::string fileName = "test.bin";

	// --------- Write -----------------------------------------------------------
	Person someone =
	{
		"Frodo",
		220,
		0.8,
	};

	std::ofstream outputFile;
	outputFile.open(fileName, std::ios::binary);

	if (outputFile.is_open())
	{
		outputFile.write(reinterpret_cast<char*>(&someone), sizeof(Person));
		outputFile.close();
	}
	else
	{
		std::cout << "Could not create/write to file: " << fileName << std::endl;
	}

	// --------- Read ------------------------------------------------------------

	Person someoneElse = {};

	std::ifstream inputFile;
	inputFile.open(fileName, std::ios::binary);
	if (inputFile.is_open())
	{
		inputFile.read(reinterpret_cast<char *>(&someoneElse), sizeof(Person));
		inputFile.close();
	}
	else
	{
		std::cout << "Could not open/read from file: " << fileName << std::endl;
	}

	std::cout << someoneElse.name << ", " << someoneElse.age << ", " << someoneElse.height << std::endl;
}

