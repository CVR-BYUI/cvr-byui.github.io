/*******************************************************************************
* Program:
*    Assignment 43, Command Line
*    Brother Honeycutt, CS124
* Author:
*    Chris Van Ry
* Summary:
*    This program will convert feet to meters using numbers passed on the
*    command line.
* 
*    Estimated: 0.75 hr
*    Actual:    2.0 hr
* 
*    The most difficult part of writing this program was 
*******************************************************************************/

#include <cstdlib>
#include <iostream>
using namespace std;

/*******************************************************************************
* MAIN
* This will utilize all functions to perform task of program.
*******************************************************************************/
int main(int argc, char ** argv)
{
   cout.setf(ios::fixed);
   cout.precision(1);

   float feet = 0.0;
   float meters = 0.0;

   for (int i = 1; i < argc; i++)
   {
      feet = atof(argv[i]);
      meters = feet / 3.2808;

      cout << feet << " feet is " << meters << " meters\n";
   }

   return 0;
}