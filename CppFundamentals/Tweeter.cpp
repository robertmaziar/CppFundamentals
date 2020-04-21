#include "Tweeter.h"
#include <iostream>
using std::cout;
using std::endl;

Tweeter::Tweeter(std::string first, std::string last, int arbitrary, std::string handle) 
	: Person(first, last, arbitrary), twitterhandle(handle)
{
	cout << "constructing " << twitterhandle << endl;
}

Tweeter::~Tweeter()
{
	cout << "destructing " << twitterhandle << endl;
}

std::string Tweeter::GetName() const
{
	return Person::GetName() + " " + twitterhandle;
}
