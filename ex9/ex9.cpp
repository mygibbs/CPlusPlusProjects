// ex9.cpp : Defines the entry point for the console application.
// i/o example

#include "stdafx.h"
#include <iostream>
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	int i;
	cout << "Please enter an interger value: ";
	cin >> i;
	cout << "\nThe value you entered is " << i;
	cout << " and its double is " << i * 2 << ".\n";
	return 0;
}

