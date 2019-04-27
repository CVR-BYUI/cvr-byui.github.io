/*******************************************************************************
* Program:
*    Assignment 35, Advanced Conditionals
*    Brother Honeycutt, CS124
* Author:
*    Chris Van Ry
* Summary:
*    This program will prompt the user for a number grade and will convert it
*    to a letter grade according to the class syllabus.
* 
*    Estimated: 0.75 hr
*    Actual: 2.0 hr
* 
*    The most difficult part of writing this program was not over-complicating
*    the computeLetterGrade switch. Prior to watching the video that was posted
*    in the Developer forum, I was attempting to declare a new variable, work
*    with the input number, use logic to define a range, and use breaks in each
*    case. I also learned about the use of INVALID and ternary operators.
*******************************************************************************/

#include <iostream>
using namespace std;

#define INVALID '*'

/*******************************************************************************
* COMPUTE LETTER GRADE
* This will use switch to determine the letter grade based off of the number
* grade according to the syllabus.
*******************************************************************************/
char computeLetterGrade(int grade)
{
	switch (grade / 10)
	{
		// 100%
		case 10:
		// 90 - 99%
		case 9:
		   return 'A';
		// 80 - 89%
		case 8:
		   return 'B';
		// 70 - 79%
		case 7:
		   return 'C';
		// 60 - 69%
		case 6:
		   return 'D';
		// Lower than 60%
		default:
		   return 'F';
	}
}

/*******************************************************************************
* COMPUTE GRADE SIGN
* This will determine the appropriate + or - following the letter grade based
* off the last number of the number grade.
*******************************************************************************/
char computeGradeSign(int grade)
{
	int lastNumber = grade % 10;
	char sign = INVALID;
	
	// - ends with 0, 1, 2
	if (lastNumber <= 2)
		sign = '-';

	// + ends with 7, 8, 9 and is not A or F
	if (lastNumber >= 7)
		sign = '+';

	// Otherwise, return with "*" symbol
	return (grade >= 60 && grade < 95) ? sign : INVALID;
}

/*******************************************************************************
* MAIN
* This will utilize all functions to complete task of program.
*******************************************************************************/
int main()
{
	// Prompt for number grade
	int numGrade;
	cout << "Enter number grade: ";
	cin  >> numGrade;

	// Call letter and sign functions
	char letterGrade = computeLetterGrade(numGrade);
	char gradeSign = computeGradeSign(numGrade);

	// Display the result
	cout << numGrade << "% is " << letterGrade;
	if (gradeSign != INVALID)
		cout << gradeSign;
	cout << endl;

    return 0;
}