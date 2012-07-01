// ex26.cpp : Defines the entry point for the console application.
// arrays example

#include "stdafx.h"
#include <iostream>
using namespace std;


int billy [] = {16, 2, 77, 40, 12071};
int n, result = 0;

int _tmain(int argc, _TCHAR* argv[])
{
	for (n = 0; n < 5; n++)
		result += billy[n];

	cout << result;

	return 0;
}

