#pragma once

#include <iostream>

#pragma pack(push, 1)
struct Person
{
	char name[26];
	int age;
	double height;
};
#pragma pack(pop)
