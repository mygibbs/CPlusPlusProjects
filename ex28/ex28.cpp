// ex28.cpp : Defines the entry point for the console application.
// null-terminated sequences of characters

#include "stdafx.h"
#include <iostream>
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	char question[] = "Please, enter your first name: ";
	char greeting[] = "Hello, ";
	char yourname [80];
	cout << question;
	cin >> yourname;
	cout << greeting << yourname << "!";
	return 0;
}

