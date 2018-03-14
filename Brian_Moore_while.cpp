// ConsoleApplication1.cpp : Defines the entry point for the console application.
// Brian Moore
/*
1.  The first thing is that the value of letter is pre determined.  It is asking for
an input and since letter is not a const it does not affect the functionality.
However utilizing cin var with a pre determined value makes no sense.
The reason this is not friendly is that there is no indication that x stops the loop.
It only asks for a letter input.
*/


#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	char letter = 'a';

	while (letter != 'x')
	{
		cout << "Please enter a letter, x will terminate the loop" << endl;
		cout << "Lower case and upper case are fine" << endl;
		cin >> letter;
		cout << "The letter you entered is " << letter << " goodbye" << endl;
	}

	return 0;
}