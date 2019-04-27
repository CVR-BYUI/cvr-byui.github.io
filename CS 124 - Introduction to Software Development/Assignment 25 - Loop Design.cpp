/*******************************************************************************
* Program:
*    Assignment 25, Loop Design
*    Brother Honeycutt, CS124
* Author:
*    Chris Van Ry
* Summary:
*    This program will prompt the user for number of days and offset and will
*    display a calendar. This is in preparation for Project 07. 
* 
*    Estimated: 4.0 hr
*    Actual: 5.0 hr
* 
*    The most difficult part of writing this program was 
*******************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

/*******************************************************************************
* DISPLAY TABLE
* This will display the table header and all the calendar days.
*******************************************************************************/
void displayTable(int numDays, int offset)
{
	// Display table header
	cout << "  Su  Mo  Tu  We  Th  Fr  Sa\n";

	int dow;

	// Loop to determine first day of month from offset input
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
* MAIN
* This will prompt the user for number of days and offset and then will call
* the displayTable() function.
*******************************************************************************/
int main()
{
	int numDays;
	int offset;

	cout << "Number of days: ";
	cin  >> numDays;
	cout << "Offset: ";
	cin  >> offset;

	displayTable(numDays, offset);

	return 0;
}