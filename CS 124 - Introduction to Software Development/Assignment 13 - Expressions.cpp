/*******************************************************************************
* Program:
*    Assignment 13, Temperature Conversion
*    Brother Honeycutt, CS124
* Author:
*    Chris Van Ry
* Summary:
*    This program will convert Fahrenheit to Celsius. This program will prompt
*    the user to input the Fahrenheit number and convert it Celsius.
* 
*    Estimated: 1.0 hr
*    Actual: 1.0 hr
* 
*    The most difficult part of writing this program was understanding the
*    difference between integer and floating point division.
*******************************************************************************/

#include <iostream>
using namespace std;

/******************************************************************************
* MAIN
* This will prompt the user to enter degrees Fahrenheit, calculate conversion,
* and display the Celsius result.
******************************************************************************/
int main()
{
   // configure output to round correctly
   cout.setf(ios::fixed);
   cout.precision(0);
   
   // declare the variables
   float f;
   float c;
   
   // prompt for fahrenheit, calculate, and display celsius
   cout << "Please enter Fahrenheit degrees: ";
   cin >> f;
   c = 5.0 / 9.0 * (f - 32);
   cout << "Celsius: " << c;
   
   return 0;
  
}