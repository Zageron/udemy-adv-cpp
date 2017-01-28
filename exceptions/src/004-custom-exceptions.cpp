#include <iostream>
using namespace std;

class MyException : public exception
{
public:
	const char* what() const override
	{
		return "Something bad happened!";
	}
};

class Test
{
public:
	static void GoesWrong()
	{
		throw MyException();
	}
};

void customExceptions()
{
	try
	{
		Test::GoesWrong();
	}
	catch (MyException& e)
	{
		cout << "Caught Exception: " << e.what() << endl;
	}
}
