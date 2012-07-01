// ex25.cpp : Defines the entry point for the console application.
// declaring functions prototypes

#include "stdafx.h"
#include <iostream>
using namespace std;

void odd (int a);
void even (int a);

int _tmain(int argc, _TCHAR* argv[])
{
	int i;
	do
	{
		cout << "Type a number (0 to exit): ";
		cin >> i;
		odd (i);
	} while (i != 0);

	return 0;
}

void odd (int a)
{
	if ( (a % 2) != 0)
		cout << "Number is odd.\n";
	else
		even (a);
}

void even (int a)
{
	if ( (a % 2) == 0)
		cout << "Number is even.\n";
	else
		odd (a);
}