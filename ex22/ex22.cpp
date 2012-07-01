// ex22.cpp : Defines the entry point for the console application.
// default values in functions

#include "stdafx.h"
#include <iostream>
using namespace std;


int divide (int a, int b = 2)
{
	int r;
	r = a / b;
	return (r);
}

int _tmain(int argc, _TCHAR* argv[])
{
	cout << divide (12);
	cout << endl;
	cout << divide (20, 4);
	return 0;
}

