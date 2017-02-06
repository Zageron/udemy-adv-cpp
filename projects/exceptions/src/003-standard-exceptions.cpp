#include <iostream>
using namespace std;

class CanGoWrong
{
public:
	CanGoWrong()
	{
		_ULonglong badSize = 999999999999 * 9999;
		char* pMemory = new char[badSize];
		delete[] pMemory;
	}
};


void standardExceptions()
{
	try
	{
		CanGoWrong wrong;
	}
	catch (bad_alloc& e)
	{
		cout << "Caught exception: " << e.what() << endl;
	}

	cout << "Still running..." << endl;
}
