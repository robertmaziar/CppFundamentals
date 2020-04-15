// CppFundamentals.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Person.h"
#include "Tweeter.h"
#include "Status.h"
#include "Utility.h"
#include "Accum.h"

int main()
{
	//// Input/Output Example
	/*std::cout << "Enter your name . . .\n" << std::endl;
	std::string name;
	std::cin >> name;
	std::cout << "Hello, " << name << std::endl;*/

	//// Type Cast Example
	/*double d = 2.2;
	int i = static_cast<int>(d);
	std::cout << i << std::endl;*/

	//// User Types Example
	/*Person p1("Rob", "Maziar", 123);
	{
		Tweeter t1("Someone", "Else", 456, "@whoever");
		std::string name2 = t1.GetName();
	}
	std::cout << "after innermost block" << std::endl;
	std::string name = p1.GetName();*/

	//// Enum Example
	/*Status s = Pending;
	s = Approved;

	FileError fe = FileError::notfound;
	fe = FileError::ok;
	NetworkError ne = NetworkError::disconnected;
	ne = NetworkError::ok;*/

	/*int x, y;
	std::cout << "Enter two numbers . . ." << std::endl;
	std::cin >> x >> y;

	std::cout << x << " ";
	if (x > y) {
		std::cout << "is larger than ";
	}
	else {
		std::cout << "is not larger than ";
	}
	std::cout << y << std::endl;*/

	//// While Loop Example
	/*int x;
	std::cout << "Enter a number" << std::endl;
	std::cin >> x;

	bool isPrime = true;
	int i = 2;

	while (i <= x/i)
	{
		int factor = x/i;
		if (factor*i == x)
		{
			std::cout << "factor found: " << i << " * " << factor << std::endl;
			isPrime = false;
			break;
		}
		i = i++;
	}

	std::cout << x << " is ";
	if (isPrime)
	{
		std::cout << "prime" << std::endl;
	}
	else
	{
		std::cout << "not prime" << std::endl;
	}*/

	//// For Loop Example
	/*for (int i = 0; i < 10; i++)
	{
		std::cout << i << std::endl;
	}*/

	//// Switch Example
	//int x;
	//std::cout << "Enter a number between 0-3" << std::endl;
	//std::cin >> x;

	//switch (x)
	//{
	//case 0:
	//    std::cout << "You entered 0" << std::endl;
	//    break;
	//case 1:
	//case 2:
	//    std::cout << "You entered 1 or 2" << std::endl;
	//    break;
	//case 3:
	//    std::cout << "You entered 3" << std::endl;
	//    break;
	//default:
	//    std::cout << "You entered an invalid number" << std::endl;
	//}

	//// Functions Example
	//int x;
	//std::cout << "Enter a number . . .\n" << std::endl;
	//std::cin >> x;

	//if (IsPrime(x))
	//{
	//    std::cout << " is prime" << std::endl;
	//}
	//else
	//{
	//    std::cout << " is not prime" << std::endl;
	//}

	//// Template Example
	//Accum<int> integers(0);
	//integers += 3;
	//integers += 7;
	//std::cout << integers.GetTotal() << std::endl;

	//Accum<std::string> strings("");
	//strings += "hello";
	//strings += ", world!";
	//std::cout << strings.GetTotal() << std::endl;

	//Accum<Person> people(0);
	//Person p1("John", "Doe", 123);
	//Person p2("Jane", "Doe", 456);
	//people += p1;
	//people += p2;
	//std::cout << people.GetTotal() << std::endl;

	//// Pointer and References Example
	//int a = 3;
	//std::cout << "a is " << a << std::endl;
	//int& rA = a;
	//rA = 5;
	//std::cout << "a is " << a << std::endl;

	//Person John("John", "Doe", 123);
	//Person& rJohn = John;
	//rJohn.SetNumber(345);
	//std::cout << "rJohn: " << rJohn.GetName() << rJohn.GetNumber() << std::endl;

	//// Integer pointer assigned to address of a
	//int* pA = &a;
	//// a will now be 4, becuase its all the same space in memory
	//*pA = 4;
	//std::cout << "a is " << a << std::endl;
	//int b = 100;
	//pA = &b;
	//(*pA)++;
	//std::cout << "a " << a << ", *pA " << *pA << std::endl;

	//Person* pJohn = &John;
	//(*pJohn).SetNumber(123);
	//pJohn->SetNumber(456);
	//std::cout << "John: " << John.GetName() << " " << John.GetNumber() << std::endl;

	return 0;
}

