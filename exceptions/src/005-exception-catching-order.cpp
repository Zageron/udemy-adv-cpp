#include <iostream>
#include <exception>
using namespace std;

void goesWrong()
{
	bool error0 = true;
	bool error1 = false;

	if (error0)
	{
		throw bad_alloc();
	}

	if (error1)
	{
		throw exception();
	}
}

void exceptionCatchingOrder()
{
	try
	{
		goesWrong();
	}
	catch (bad_alloc& e)
	{
		cout << "Caught Exception: " << e.what() << endl;
	}
	// Subclasses must come before the parent class in exceptions.
	catch (exception& e)
	{
		cout << "Caught Exception: " << e.what() << endl;
	}
}
