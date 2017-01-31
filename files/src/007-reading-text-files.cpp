#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void readingTextFiles()
{
	string inFileName = "test.txt";
	fstream inFile;
	inFile.open(inFileName);

	if (inFile.is_open())
	{
		string line;

		while (inFile)
		{
			getline(inFile, line);
			cout << line << endl;
		}

		inFile.close();
	}
	else
	{
		cout << "Cannot open file: " << inFileName << endl;
	}
}
