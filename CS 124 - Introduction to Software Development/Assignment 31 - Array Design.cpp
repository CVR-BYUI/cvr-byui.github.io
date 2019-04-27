/*******************************************************************************
* Program:
*    Assignment 31, Array Design
*    Brother Honeycutt, CS124
* Author:
*    Chris Van Ry
* Summary:
*    This program will prompt the user for 10 grades, calculate the average
*    (excluding grades with -1) and display.
* 
*    Estimated: 0.75 hr
*    Actual: 2.0 hr
* 
*    The most difficult part of writing this program was understanding how
*    pass-by-reference works and how to declare the array and properly pass the
*    reference to the other functions.
*******************************************************************************/

#include <iostream>
using namespace std;

/*******************************************************************************
* GET GRADES
* This will prompt the user for 10 grades.
*******************************************************************************/
void getGrades(int grades[])
{
	for (int i = 0; i < 10; i++)
	{
		cout << "Grade " << i + 1 << ": ";
		cin  >> grades[i];
	}
}

/*******************************************************************************
* AVERAGE GRADES
* This will calculate the average for the user input grades.
*******************************************************************************/
int averageGrades(int grades[])
{
	int count = 0;
	int sum = 0;

	for (int i = 0; i < 10; i++) 
	{
		if (grades[i] != -1)
		{
			sum += grades[i];
			count++;
		}
	}

	if (count == 0)
		return -1;
	else
	{
		int average = sum / count;
		return average;
	}
}

/*******************************************************************************
* MAIN
* This will declare the array and pass reference to the other functions to
* allow them to complete their tasks, then will display result to user.
*******************************************************************************/
int main()
{
   int grades[10];
   getGrades(grades);
   int average = averageGrades(grades);

   if (average == -1)
	   cout << "Average Grade: ---%\n";
   else
       cout << "Average Grade: " << average << "%\n";

   return 0;
}