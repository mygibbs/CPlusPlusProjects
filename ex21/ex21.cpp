// ex21.cpp : Defines the entry point for the console application.
// more than one returning value

#include "stdafx.h"
#include <iostream>
using namespace std;


void prevnext (int x, int& prev, int& next)
{
	prev = x - 1;
	next = x + 1;
}

int _tmain(int argc, _TCHAR* argv[])
{
	int x = 100, y, z;
	prevnext (x, y, z);
	cout << "Previous = " << y << ", Next = " << z;

	return 0;
}

