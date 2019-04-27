/*******************************************************************************
* Program:
*    Assignment 16, If Statements
*    Brother Honeycutt, CS124
* Author:
*    Chris Van Ry
* Summary:
*    This program will determine which tax bracket a user is in relative to
*    their income.
* 
*    Estimated: 1.0 hr
*    Actual: 1.0 hr
* 
*    The most difficult part of writing this program was
*******************************************************************************/

#include <iostream>
using namespace std;

/*******************************************************************************
* COMPUTE TAX
* This will compute the tax bracket based off the user's income and return
* value to main().
*******************************************************************************/
int computeTax(int income)
{
   int bracket;
    
   if (income <= 15100)
      bracket = 10;
      
   else if (income <= 61300)
      bracket = 15;
      
   else if (income <= 123700)
      bracket = 25;
      
   else if (income <= 188450)
      bracket = 28;
      
   else if (income <= 336550)
      bracket = 33;
   
   else if (income > 336550)
      bracket = 35;
      
   return bracket;
}

/*******************************************************************************
* MAIN
* This will prompt the user to enter income and call computeTax to provide
* result and then will display.
* *****************************************************************************/
int main()
{
    int income;
    
    // prompt user for income
    cout << "Income: ";
    cin >> income;
    
    // display tax bracket
    cout << "Your tax bracket is " << computeTax(income) << "%"
         << endl;
         
    return 0;
}