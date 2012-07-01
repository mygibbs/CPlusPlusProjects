// ex13.cpp : Defines the entry point for the console application.
// number echoer

#include "stdafx.h"
#include <iostream>
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	unsigned long n;
	do
	{
		cout << "Enter number (0 to end): ";
		cin >> n;
		cout << "You entered: " << n << "\n";
	} while (n != 0);

	return 0;
}

