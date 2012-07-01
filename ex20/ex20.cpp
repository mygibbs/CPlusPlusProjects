// ex20.cpp : Defines the entry point for the console application.
// passing parameters by reference

#include "stdafx.h"
#include <iostream>
using namespace std;


void duplicate (int& a, int& b, int& c)
{
	a *= 2;
	b *= 2;
	c *= 2;
}

int _tmain(int argc, _TCHAR* argv[])
{
	int x = 1, y = 3, z = 7;
	duplicate (x, y, z);
	cout << "x = " << x << ", y = " << y << ", z = " << z;

	return 0;
}

