/*******************************************************************************
* Program:
*    Assignment 23, Loop Syntax
*    Brother Honeycutt, CS124
* Author:
*    Chris Van Ry
* Summary:
*    This program will add multiples of a number less than 100 and display
*    result to the user.
* 
*    Estimated: .75 hr
*    Actual: 1.0 hr
* 
*    The most difficult part of writing this program was determining which loop
*    type to use and how to properly formulate it. 
*******************************************************************************/

#include <iostream>
using namespace std;

/*******************************************************************************
* ADD MULTIPLES
* This will add up the multiples of the user input number, up to 100.
*******************************************************************************/
int addMultiples(int addedMultiples)
{
   int sum = 0;
   for (int multiple = addedMultiples; multiple < 100; multiple += addedMultiples)
      sum += multiple;

   return sum;
}

/*******************************************************************************
* MAIN
* This will prompt the user to enter a mutiple and then will call the
* addMultiples() function to calculate the sum.
* *****************************************************************************/
int main()
{
   int multiple;
   // Prompt user for multiple
   cout << "What multiples are we adding? ";
   cin  >> multiple;

   // Call function to calculate sum
   int sum = addMultiples(multiple);

   // Display sum to user 
   cout << "The sum of multiples of " << multiple << " less than 100 are: "
        << sum << endl;

   return 0;
}