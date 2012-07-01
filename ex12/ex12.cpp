// ex12.cpp : Defines the entry point for the console application.
// custom countdown using while

#include "stdafx.h"
#include <iostream>
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	int n;
	cout << "Enter the starting number > ";
	cin >> n;

	while (n > 0)
	{
		cout << n << ", ";
		--n;
	}

	cout << "FIRE!\n";

	return 0;
}

