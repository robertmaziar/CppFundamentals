#include "Utility.h"
#include <iostream>
using std::cout;
using std::endl;

bool IsPrime(int x)
{
	bool isPrime = true;
	for (int i = 2; i <= x / i; i++)
	{
		int factor = x / i;
		if (factor * i == x)
		{
			cout << "factor found: " << factor << endl;
			isPrime = false;
			break;
		}
	}
	return isPrime;
}

bool Is2MorePrime(int const& x)
{
	return IsPrime(x + 2);
}
