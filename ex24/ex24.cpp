// ex24.cpp : Defines the entry point for the console application.
// factorial calculator

#include "stdafx.h"
#include <iostream>
using namespace std;


long factorial (long a)
{
	if (a > 1)
		return (a * factorial (a - 1));
	else
		return (1);
}

int _tmain(int argc, _TCHAR* argv[])
{
	long number;
	cout << "Please type a number: ";
	cin >> number;
	cout << number << "! = " << factorial (number);

	return 0;
}

