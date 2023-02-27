#include "pch.h"
#include <iostream>

using namespace System;
using namespace std;

int main()
{
	try
	{
		int age = 25;
		if (age >= 26) {
			cout << "Welcome!";
		}
		else {
			throw (age);
		}
	}
	catch (int myAger)
	{
		cout << "You are too young! \n";
		cout << "Your age is: " << myAger;
	}
    return 0;
}
