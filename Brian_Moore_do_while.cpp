//Brian Moore
//Do while 
/*This program displays a hot beverage menu blah blah blah
Copy and paste needs to work the tedium is bleh.*/

#include "stdafx.h"
#include <iomanip>
#include <iostream>
using namespace std;

int main()
{

	bool validBeverage;
	int number;
	float cost;
	char beverage;

	cout << fixed << showpoint << setprecision(2);

	do
	{
		cout << endl << endl;
		cout << "Hot Beverage Menu" << endl << endl;
		cout << "A: Coffee $1.00" << endl;
		cout << "B: Tea $0.75" << endl;
		cout << "C: Hot Chocolate $1.25" << endl;
		cout << "D: Cappucino $2.50" << endl << endl << endl;

		cout << "Enter the beverage A, B, C, or D you desire" << endl;
		cout << "Enter E to exit the program" << endl << endl;

		cout << "Enter a choice from the menu." << endl;
		cin >> beverage;

		switch (beverage)
		{
		case 'a':
			validBeverage = true;
			break;
		case 'A':
			validBeverage = true;
			break;
		case 'b':
			validBeverage = true;
			break;
		case 'B':
			validBeverage = true;
			break;
		case 'c':
			validBeverage = true;
			break;
		case 'C':
			validBeverage = true;
			break;
		case 'd':
			validBeverage = true;
			break;
		case 'D':
			validBeverage = true;
			break;
		default: validBeverage = false;
			break;
		}

			if (validBeverage == true)
			{
					cout << "How many cups would you like?" << endl;
					cin >> number;
			}

			switch (beverage)
			{
			case 'a': 
				cost = number * 1.0;
				cout << "The total cost is $ " << cost << endl;
				break;
			case 'A':
				cost = number * 1.0;
				cout << "The total cost is $ " << cost << endl;
				break;
			case 'b':
				cost = number * 0.75;
				cout << "The total cost is $ " << cost << endl;
				break;
			case 'B':
				cost = number * 0.75;
				cout << "The total cost is $ " << cost << endl;
				break;
			case 'c':
				cost = number * 1.25;
				cout << "The total cost is $ " << cost << endl;
				break;
			case 'C':
				cost = number * 1.25;
				cout << "The total cost is $ " << cost << endl;
				break;
			case 'D':
				cost = number * 2.50;
				cout << "The total cost is $ " << cost << endl;
				break;
			case 'd':
				cost = number * 2.50;
				cout << "The total cost is $ " << cost << endl;
				break;
			case 'e':
				cout << "Please come again" << endl;
				break;
			case 'E':
				cout << "Please come again" << endl;
				break;
			default: 
				cout << "You entered an invalid selection" << endl;
				cout << " Try again please" << endl;
		}

	} while (beverage != 'E' && beverage != 'e');
    return 0;
}

