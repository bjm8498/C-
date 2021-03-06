// ConsoleApplication6.cpp : Defines the entry point for the console application.
// This program finds the average time spent programming by a student
// each day over a three day period.

// Brian Moore

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int numStudents;
	float numHours, total, average;
	int student, day = 0, totalDays;	// these are the counters for the loops

	cout << "This program will find the average number of hours a day"
		<< " that a student spent programming over a long weekend\n\n";
	cout << "How many students are there ?\n"
		<< "Put a space after a number of students and\n"
		<< "then enter in the total number of days off."
		<< endl << endl;
	cin >> numStudents >> totalDays;

	for (student = 1; student <= numStudents; student++)
	{
		total = 0;

		for (day = 1; day <= totalDays; day++)
		{
			cout << "Please enter the number of hours worked by student "
				<< student << " on day " << day << "." << endl;
			cin >> numHours;

			total = total + numHours;
		}

		average = total / totalDays;

		cout << endl;
		cout << "The average number of hours per day spent programming by "
			<< "student " << student << " is " << average
			<< endl << endl << endl;
	}

	return 0;
}
