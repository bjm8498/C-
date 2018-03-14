// Sentinel while loop
//Brian Moore

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{

	float total = 0, rain, month = 1;

	cout << "Enter the total rainfall for month " << month << endl;
	cout << "Enter -1 when you're finished" << endl;

	cin >> rain;

	while (rain != -1)
	{
		total += rain;
		month += 1;
		cout << "Enter the total rainfall in inches for month " << month << endl;
		cout << "Enter -1 when you are finished" << endl;
		cout << "The amount of rainfall is " << rain << endl;
		cin >> rain;
	}

	if (month == 1)
		cout << "No data has been entered" << endl;
	else
		cout << "The total rainfall for the " << month - 1 << " months is "
		<< total << " inches." << endl;

    return 0;
}

