// ex5.cpp : Defines the entry point for the console application.
// defined constants: calculate circumference

#include "stdafx.h"
#include <iostream>
using namespace std;

#define PI 3.14159
#define NEWLINE '\n'

int _tmain(int argc, _TCHAR* argv[])
{
	double r = 5.0;					// radius
	double circle;

	circle = 2 * PI * r;
	cout << circle;
	cout << NEWLINE;

	return 0;
}

