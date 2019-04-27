/*******************************************************************************
* Program:
*    Project 07, Calendar
*    Brother Honeycutt, CS124
* Author:
*    Chris Van Ry
* Summary:
*    This program will prompt the user for a month and year and will display the
*    calendar.
* 
*    Estimated: 4.0 hr
*    Actual: 7.0 hr
* 
*    The most difficult part of writing this program was writing the loops for
*    displaying the the days of the week and incorporating the offset. It was a
*    very challenging project.
*******************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

/*******************************************************************************
* GET MONTH
* This will prompt the user for the month and verify it is between 1 and 12.
*******************************************************************************/
int getMonth()
{
	int month;

	// Prompt user for month and verify, prompt again on error
	do
	{
		cout << "Enter a month number: ";
		cin  >> month;

		if (month < 1 || month > 12)
			cout << "Month must be between 1 and 12.\n";
	}
	while (month < 1 || month > 12);

	return month;
}

/*******************************************************************************
* GET YEAR
* This will prompt the user for the year and verify it is 1753 or later.
*******************************************************************************/
int getYear()
{
	int year;

	// Prompt user for year and verify, prompt again on error
	do
	{
		cout << "Enter year: ";
		cin  >> year;

		if (year < 1753)
			cout << "Year must be 1753 or later.\n";
	}
	while (year < 1753);
	cout << endl;

	return year;
}

/*******************************************************************************
* IS LEAP YEAR
* This will determine if the user input year is a leap year.
*******************************************************************************/
bool isLeapYear(int year)
{
	bool leapYear = false;

	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
		leapYear = true;
	else
		leapYear = false;

	return leapYear;
}

/*******************************************************************************
* NUM DAYS IN MONTH
* This will determine the number of days in the user input month.
*******************************************************************************/
int numDaysInMonth(int year, int month)
{
	int numDays = 0;

	// Months that have 31 days
	if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 
		|| month == 10 || month == 12)
		numDays = 31;
	else if (month == 2)
	{
		// February of leap years has 29 days
		if (isLeapYear(year) == false)
			numDays = 28;
		else
			numDays = 29;
	}
	// Remaining months have 30 days
	else
		numDays = 30;

	return numDays;
}

/*******************************************************************************
* NUM DAYS IN YEAR
* This will calculate the total number of days up to the user input month and
* year.
*******************************************************************************/
int numDaysInYear(int year, int month)
{
	int numDaysYears = 0;
	int numDaysMonths = 0;

	// Calculate how many days have passed each year and add together
	for (int yearValue = 1753; yearValue < year; yearValue++)
	{
		numDaysYears += 365;
		if (isLeapYear(yearValue))
			numDaysYears++;
	}

	// Calculate how many days have passed in user input year and add together
	for (int monthValue = 1; monthValue < month; monthValue++)
		numDaysMonths += numDaysInMonth(year, monthValue);

	int numDaysTotal = numDaysYears + numDaysMonths;

	return numDaysTotal;
}

/*******************************************************************************
* COMPUTE OFFSET
* This will compute in which position the first day of the month occurs.
*******************************************************************************/
int computeOffset(int year, int month)
{
	int numDaysTotal = numDaysInYear(year, month);
	int offset = numDaysTotal % 7;

	return offset;
}

/*******************************************************************************
* DISPLAY HEADER
* This will display the table header and all the calendar days.
*******************************************************************************/
void displayHeader(int year, int month)
{
	// Display user input month
	if (month == 1)
		cout << "January, ";
   	else if (month == 2)
      	cout << "February, ";
   	else if (month == 3)
      	cout << "March, ";
   	else if (month == 4)
      	cout << "April, ";
   	else if (month == 5)
      	cout << "May, ";
   	else if (month == 6)
      	cout << "June, ";
   	else if (month == 7)
      	cout << "July, ";
   	else if (month == 8)
      	cout << "August, ";
   	else if (month == 9)
      	cout << "September, ";
   	else if (month == 10)
      	cout << "October, ";
   	else if (month == 11)
      	cout << "November, ";
   	else if (month == 12)
      	cout << "December, ";

    // Display user input year and days of the week
    cout << year << endl;
    cout << "  Su  Mo  Tu  We  Th  Fr  Sa\n";

    return;
}

/*******************************************************************************
* DISPLAY TABLE
* This will display the calendar days of user input month and year.
*******************************************************************************/
void displayTable(int numDays, int offset)
{
	int dow;

	// Loop to determine first day of month from offset
	if (offset >= 0 && offset < 6)
	{
		dow = offset + 1;
		for (int i = 0; i < dow; i++)
		{
			cout << "    ";
		}
	}

	// If month starts on Saturday, reset offset
	if (offset == 6)
		offset = -1;

	// Loop to display each day
	for (int j = 1; j <= numDays; j++)
	{
		if (offset == 5)
		{
			cout << setw(4) << j << endl;
			offset = -1;
		}
		else
		{
			cout << setw(4) << j;
			offset++;
		}
		if (j == numDays && offset != -1)
		{
			cout << "\n";
		}
	}

	return;
}

/*******************************************************************************
* DISPLAY
* This will call the other display functions and display the calendar.
*******************************************************************************/
void display(int year, int month, int offset)
{
	displayHeader(year, month); 
   	int numDays = numDaysInMonth(year, month);
   	displayTable(numDays, offset);

   	return;
}

/*******************************************************************************
* MAIN
* This will utilize all functions to complete task of program.
*******************************************************************************/
int main()
{
   int month = getMonth();
   int year = getYear();
   int offset = computeOffset(year, month);
   display(year, month, offset);

   return 0;
}