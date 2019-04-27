/*******************************************************************************
* Program:
*    Assignment 26, Files
*    Brother Honeycutt, CS124
* Author:
*    Chris Van Ry
* Summary:
*    This program will read a file containing 10 grades and return the average.
* 
*    Estimated: 0.75 hr
*    Actual: 1.5 hr
* 
*    The most difficult part of writing this program was 
*******************************************************************************/

#include <iostream>
#include <fstream>
using namespace std;

/*******************************************************************************
* GET FILE NAME
* This will prompt user for the filename which will be passed as a parameter.
*******************************************************************************/
void getFileName(char fileName[256])
{
	cout << "Please enter the filename: ";
	cin  >> fileName;
}

/*******************************************************************************
* READ FILE
* This will read the grades from the file, add them together and calculate the
* average.
*******************************************************************************/
float readFile(char fileName[256])
{
	ifstream fin(fileName);
	if (fin.fail())
	{
		cout << "Error reading file \"" << fileName << "\"\n";
		return false;
	}

	float grade;
	float sum = 0.0;
	int numGrade = 0;

	while (fin >> grade)
	{
		numGrade++;
		sum += grade;
	}

	if (numGrade != 10)
	{
		cout << "Error reading file \"" << fileName << "\"\n";
		return false;
	}

	float average = sum / 10;

	return average;
}

/*******************************************************************************
* DISPLAY
* This will display the average to the user.
*******************************************************************************/
void display(float average)
{
	cout.precision(0);
   	cout.setf(ios::fixed);
   	cout << "Average Grade: " << average << "%\n";
}

/*******************************************************************************
* MAIN
* This will call the other functions to perform their actions.
*******************************************************************************/
int main()
{
	char fileName[256];
	getFileName(fileName);
	float average = readFile(fileName);

	if (average > 0)
		display(average);

	return 0;
}