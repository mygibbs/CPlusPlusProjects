// ex8.cpp : Defines the entry point for the console application.
// conditional operator

#include "stdafx.h"
#include <iostream>
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	int a, b, c;

	a = 2;
	b = 7;
	c = (a > b) ? a : b;

	cout << c;

	return 0;
}

