#include <fstream>
#include <iostream>
using namespace std;


void writingTextFiles()
{
	ofstream outputStream;
	const string outputFile = "test.txt";
	outputStream.open(outputFile);

	if (outputStream.is_open())
	{
		outputStream << "Hello World!" << endl;
		outputStream << "123456" << endl;
		outputStream.close();
	}
	else
	{
		cout << "Could not open file: " << outputFile.c_str() << endl;
	}
}
