#include <iostream>
using namespace std;

void mightGoWrong()
{
	bool error0 = false;
	bool error1 = true;

	if (error0)
	{
		throw "Something went wrong";
	}

	if (error1)
	{
		throw string("Something else went wrong.");
	}
}

// Exceptions are thrown through stacks.
void usesMightGoWrong()
{
	mightGoWrong();
}

void exceptionsBasics()
{
	try
	{
		usesMightGoWrong();
	}
	catch (int e)
	{
		cout << "Error code: " << e << endl;
	}
	catch (const char* e)
	{
		cout << "Error code: " << e << endl;
	}
	catch (string e)
	{
		cout << "Error code: " << e.c_str() << endl;
	}

	cout << "Still running!" << endl;
}
