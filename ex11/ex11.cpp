// ex11.cpp : Defines the entry point for the console application.
// stringstreams

#include "stdafx.h"
#include <iostream>
#include <string>
#include <sstream>
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	string mystr;
	float price = 0;
	int quantity = 0;

	cout << "Enter price: ";
	getline (cin, mystr);
	stringstream (mystr) >> price;
	cout << "Enter quantity: ";
	getline (cin, mystr);
	stringstream (mystr) >> quantity;
	cout << "Total price: " << price * quantity << endl;

	return 0;
}

