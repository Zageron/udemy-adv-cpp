#include <iostream>
using namespace std;

void mightGoWrong()
{
	auto error0 = false;
	auto error1 = true;

	if (error0)
	{
		throw "Something went wrong";
	}

	if (error1)
	{
		throw string("Something else went wrong.");
	}
}

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