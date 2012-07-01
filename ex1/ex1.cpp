/*************************************************
* ex1.cpp
*
* Matthew Gibbs
* C++ Tutorial
*
* Operating with variables
*************************************************/

// Program explores various data types

#include "stdafx.h"
#include <iostream>
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	// declaring variables
	int a, b;
	int result;

	// process
	a = 5;
	b = 2;
	a = a + 1;
	result = a - b;

	// print out the result
	cout << result;

	// terminate program without error
	return 0;
}

