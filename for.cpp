// This program has the user input a number n and then finds the
// mean of the first n positive integers

// PLACE YOUR NAME HERE

#include <iostream>
using namespace std;

int main()
{
	int value1;		// value is positive number 1
	int value2;		// value is positive number 2
	int total = 0;	// total holds the sum of the first n positive numbers 
	int number;		// the amount of numbers
	float mean;		// the average of the first n positive numbers

	cout << "Please two positive integers and put a space between them." << endl;
	cin >> value1 >> value2;

	if (value1 > 0 && value2 > 0)
	{
		for (number = value1; number <= value2; number++)
		{
			total += number;
		}	// curly braces are optional since there is only one statement

		mean = static_cast<float>(total) / value;	// note the use of the typecast
													// operator here 
		cout << "The mean average between " << value1 << " and " << value2
			 << " positive integers is " << mean << endl;
	}

	else
		cout << "Invalid input - integer must be positive" << endl;

	return 0;
}