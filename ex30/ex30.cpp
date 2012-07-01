// ex30.cpp : Defines the entry point for the console application.
// more pointers

#include "stdafx.h"
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int firstvalue = 5, secondvalue = 15;
	int * p1, * p2;
	
	p1 = &firstvalue;	// p1 = address of firstvalue
	p2 = &secondvalue;	// p2 = address of secondvalue
	*p1 = 10;			// value pointed by p1 = 10
	*p2 = *p1;			// value pointed by p2 = value pointed by p1
	p1 = p2;			// value of pointer is copied
	*p1 = 20;			// value pointed by p1 = 20

	cout << "firstvalue is " << firstvalue << endl;
	cout << "secondvalue is " << secondvalue << endl;

	return 0;
}

