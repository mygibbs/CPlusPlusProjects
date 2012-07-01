// ex10.cpp : Defines the entry point for the console application.
// cin with strings

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	string mystr;
	cout << "What's your name? ";
	getline (cin, mystr);
	cout << "Hello " << mystr << ".\n";
	cout << "What is your favorite team? ";
	getline (cin, mystr);
	cout << "I like " << mystr << " too!\n";

	return 0;
}

