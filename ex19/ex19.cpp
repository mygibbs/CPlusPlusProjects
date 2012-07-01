// ex19.cpp : Defines the entry point for the console application.
// void function example

#include "stdafx.h"
#include <iostream>
using namespace std;


void printmessage()
{
	cout << "I'm a function!";
}

int _tmain(int argc, _TCHAR* argv[])
{
	printmessage();

	return 0;
}

