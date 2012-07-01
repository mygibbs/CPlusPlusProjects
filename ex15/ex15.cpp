// ex15.cpp : Defines the entry point for the console application.
// continue loop example

#include "stdafx.h"
#include <iostream>
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	for (int n = 10; n > 0; n--)
	{
		if (n == 5)
			continue;
		cout << n << ", ";
	}

	cout << "FIRE!\n" << endl;

	return 0;
}

