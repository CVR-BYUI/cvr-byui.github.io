/*******************************************************************************
* Program:
*    Project 02, Monthly Budget
*    Brother Honeycutt, CS124
* Author:
*    Chris Van Ry
* Summary:
*    This program will manage the users personal finances for a month. This 
*    program will ask you for your budget income and expenditures, then for how 
*    much you actually made and spent. The program will then display a report 
*    of whether you are on target to meet your financial goals.
* 
*    Estimated: 3.0 hr
*    Actual: 3.0 hr
* 
*    The most difficult part of writing this program was figuring out variables
*    and proper spacing. 
*******************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

/******************************************************************************
* MAIN
* This will prompt user to input budget income, expenditures, and how much was
* spent. It will then display a report of whether you are on target to meet
* your financial goals.
******************************************************************************/
int main()
{
   // configure output to display money
   cout.setf(ios::fixed);
   cout.setf(ios::showpoint);
   cout.precision(2);
   
   // declare the variables
   float monthlyIncome;
   float budgetLiving;
   float actualLiving;
   float actualTaxes;
   float actualTithing;
   float actualOther;
   
   // prompt for income, expenditures, and money spent
   cout << "This program keeps track of your monthly budget\n";
   cout << "Please enter the following:\n";
   cout << "\tYour monthly income: ";
   cin >> monthlyIncome;
   cout << "\tYour budgeted living expenses: ";
   cin >> budgetLiving;
   cout << "\tYour actual living expenses: ";
   cin >> actualLiving;
   cout << "\tYour actual taxes withheld: ";
   cin >> actualTaxes;
   cout << "\tYour actual tithe offerings: ";
   cin >> actualTithing;
   cout << "\tYour actual other expenses: ";
   cin >> actualOther;
   cout << endl;
   
   // display report
   cout << "The following is a report on your monthly expenses\n";
   cout << "\tItem                  Budget          Actual\n";
   cout << "\t=============== =============== ===============\n";
   cout << "\tIncome          $" << setw(11) << monthlyIncome 
        << "    $" << setw(11) << monthlyIncome << endl;
   cout << "\tTaxes           $" << setw(11) << 0.
        << "    $" << setw(11) << actualTaxes << endl;
   cout << "\tTithing         $" << setw(11) << 0.
        << "    $" << setw(11) << actualTithing << endl;
   cout << "\tLiving          $" << setw(11) << budgetLiving
        << "    $" << setw(11) << actualLiving << endl;
   cout << "\tOther           $" << setw(11) << 0.
        << "    $" << setw(11) << actualOther << endl;
   cout << "\t=============== =============== ===============\n";
   cout << "\tDifference      $" << setw(11) << 0.
        << "    $" << setw(11) << 0. << endl;
   
   return 0;
  
}