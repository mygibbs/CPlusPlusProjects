// ex17.cpp : Defines the entry point for the console application.
// function example

#include "stdafx.h"
#include <iostream>
using namespace std;

int addition (int a, int b)
{
	int r;
	r = a + b;
	return (r);
}

int _tmain(int argc, _TCHAR* argv[])
{
	int z;
	z = addition (5, 3);
	cout << "The result is " << z;

	return 0;
}

