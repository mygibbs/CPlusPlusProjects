// ex31.cpp : Defines the entry point for the console application.
// more pointers

#include "stdafx.h"
#include <iostream>
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	// declares an array numbers with 5 values
	int numbers[5];
	// declares pointer p
	int *p;
	// initializes p as the root of numbers, and sets
	//   the value pointed to by p to 10
	p = numbers;  *p = 10;
	// p increments by 1, and sets the value pointed
	//   to by p to 20
	p++;  *p = 20;
	// p is set to the address of third value in the
	//   array numbers and sets the value pointed to
	//   by p to 30
	p  = &numbers[2];  *p = 30;
	// p becomes the last value in the array numbers
	//   and sets the value pointed to by p to 40
	p = numbers + 3;  *p = 40;
	// p becomes the root value of numbers again and
	//   sets the value pointed to by p (which is the
	//   the fifth number in numbers array to 50
	p = numbers;  *(p + 4) = 50;

	// prints out all that stuff
	for (int n = 0; n < 5; n++)
		cout << numbers[n] << ", ";

	return 0;
}

