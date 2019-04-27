/*******************************************************************************
* Program:
*    Assignment 33, Pointers
*    Brother Honeycutt, CS124
* Author:
*    Chris Van Ry
* Summary:
*    This program will prompt the user for account balances and costs and will
*    charge the account with the higher balance and display results.
* 
*    Estimated: 0.75 hr
*    Actual: 2.0 hr
* 
*    The most difficult part of writing this program was understanding the 
*    difference between using pointers and just using variables. The resume
*    example in the text helped me to visualize. 
*******************************************************************************/

#include <iostream>
using namespace std;

/*******************************************************************************
* MAIN
* This will prompt the user for account balances and costs and will charge the
* account with the higher balance and display results.
*******************************************************************************/
int main()
{
   // Declare variables and uninitialized pointer
   float samBalance;
   float sueBalance;
   float dinnerCost;
   float movieCost;
   float iceCreamCost;
   float * pAccount;

   cout << "What is Sam's balance? ";
   cin  >> samBalance;

   cout << "What is Sue's balance? ";
   cin  >> sueBalance;

   cout << "Cost of the date:\n";

   cout << "\tDinner:    ";
   cin  >> dinnerCost;

   cout << "\tMovie:     ";
   cin  >> movieCost;

   cout << "\tIce cream: ";
   cin  >> iceCreamCost;

   // This will point to the account with the higher balance
   if (samBalance > sueBalance)
      pAccount = &samBalance;

   else
      pAccount = &sueBalance;

   // This will subtract from pointer account
   *pAccount -= (dinnerCost + movieCost + iceCreamCost);

   // Display account balances
   cout << "Sam's balance: $" << samBalance << endl;
   cout << "Sue's balance: $" << sueBalance << endl;

   return 0;
}