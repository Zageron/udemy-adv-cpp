#include <iostream>

#pragma pack(push, 1)
struct Person
{
	char name[26];
	int age;
	double weight;
};
#pragma pack(pop)

int structsAndPadding()
{
	std::cout << sizeof(Person) << std::endl;
	return 0;
}
