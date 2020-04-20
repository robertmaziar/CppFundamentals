#include "Resource.h"
#include <iostream>
using std::cout;
using std::endl;
using std::string;

Resource::Resource(std::string n)
{
	cout << "constructing " << name << endl;
}

Resource::~Resource(void)
{
	cout << "destructing " << name << endl;
}
