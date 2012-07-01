// ex16.cpp : Defines the entry point for the console application.
// goto loop example

#include "stdafx.h"
#include <iostream>
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	int n = 10;

	loop:
	cout << n << ", ";
	n--; 

	if (n > 0)
		goto loop;

	cout << "FIRE!\n" << endl;

	return 0;
}

