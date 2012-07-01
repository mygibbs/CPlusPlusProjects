// ex14.cpp : Defines the entry point for the console application.
// countdown using a for loop

#include "stdafx.h"
#include <iostream>
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	for (int n = 10; n > 0; n--)
	{
		cout << n << ", ";
		if (n == 3)
		{
			cout << "countdown aborted!" << endl;
			break;
		}
	}

	// cout << "FIRE!\n";

	return 0;
}

