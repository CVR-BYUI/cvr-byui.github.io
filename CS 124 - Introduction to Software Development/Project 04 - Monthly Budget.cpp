/*******************************************************************************
* Program:
*    Project 04, Monthly Budget
*    Brother Honeycutt, CS124
* Author:
*    Chris Van Ry
* Summary:
*    This program will manage the users personal finances for a month. This 
*    program will ask you for your budget income and expenditures, then for how 
*    much you actually made and spent. The program will then display a report 
*    of whether you are on target to meet your financial goals.
* 
*    Estimated: 4.0 hr
*    Actual: 5.0 hr
* 
*    The most difficult part of writing this program was figuring out how to 
*    compute the tax and return and display the proper value.
*******************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

/*******************************************************************************
* GET INCOME
* This will prompt the user for income and return value to main().
*******************************************************************************/
double getIncome()
{
    // declare variable
    double monthlyIncome;
    
    // prompt user for monthly income
    cout << "\tYour monthly income: ";
    cin >> monthlyIncome;
    
    // return value to main()
    return monthlyIncome;
}

/*******************************************************************************
* GET BUDGET LIVING
* This will prompt the user for budgeted living expenses and return value to 
* main().
*******************************************************************************/
double getBudgetLiving()
{
    // declare variable
    double budgetLiving;
    
    // prompt user for budgeted living expenses
    cout << "\tYour budgeted living expenses: ";
    cin >> budgetLiving;
    
    // return value to main()
    return budgetLiving;
}

/*******************************************************************************
* GET ACTUAL LIVING
* This will prompt the user for actual living expenses and return value to 
* main().
*******************************************************************************/
double getActualLiving()
{
    // declare variable
    double actualLiving;
    
    // prompt user for actual living expenses
    cout << "\tYour actual living expenses: ";
    cin >> actualLiving;
    
    // return value to main()
    return actualLiving;
}

/*******************************************************************************
* GET ACTUAL TAX
* This will prompt the user for actual taxes withheld and return value to 
* main().
*******************************************************************************/
double getActualTax()
{
    // declare variable
    double actualTax;
    
    // prompt user for actual taxes withheld
    cout << "\tYour actual taxes withheld: ";
    cin >> actualTax;
    
    // return value to main()
    return actualTax;
}

/*******************************************************************************
* GET ACTUAL TITHING
* This will prompt the user for actual tithe offerings and return value to 
* main().
*******************************************************************************/
double getActualTithing()
{
    // declare variable
    double actualTithing;
    
    // prompt user for actual tithe offerings
    cout << "\tYour actual tithe offerings: ";
    cin >> actualTithing;
    
    // return value to main()
    return actualTithing;
}

/*******************************************************************************
* GET ACTUAL OTHER
* This will prompt the user for actual other expenses and return value to 
* main().
*******************************************************************************/
double getActualOther()
{
    // declare variable
    double actualOther;
    
    // prompt user for actual other expenses
    cout << "\tYour actual other expenses: ";
    cin >> actualOther;
    
    // return value to main()
    return actualOther;
}

/*******************************************************************************
* COMPUTE TITHING
* This will compute the "budgeted" amount of tithing based off actual income.
*******************************************************************************/
double computeTithing(double monthlyIncome)
{
    // calcuate according to D&C 119:4 and return value to main()
    double budgetTithing = monthlyIncome * .1;
    return budgetTithing;
}

/*******************************************************************************
* COMPUTE TAX
* This will be completed in the future.
*******************************************************************************/
double computeTax(double monthlyIncome)
{
    // declare variables
    double yearlyIncome = monthlyIncome * 12;
    double yearlyTax;
    
    // calculate yearlyTax according to 2006 tax brackets
    if (yearlyIncome <= 15100)
    yearlyTax = yearlyIncome * .1;
    
    else if (yearlyIncome <= 61300)
    yearlyTax = 1510 + .15 * (yearlyIncome - 15100);
    
    else if (yearlyIncome <= 123700)
    yearlyTax = 8440 + .25 * (yearlyIncome - 61300);
    
    else if (yearlyIncome <= 188450)
    yearlyTax = 24040 + .28 * (yearlyIncome - 123700);
    
    else if (yearlyIncome <= 336550)
    yearlyTax = 42170 + .33 * (yearlyIncome - 188450);
    
    else if (yearlyIncome > 336500)
    yearlyTax = 91043 + .35 * (yearlyIncome - 336550);
    
    // convert yearlyTax to a monthly tax expense
    double budgetTax = yearlyTax / 12;
    
    return budgetTax;
}

/*******************************************************************************
* BUDGET OTHER
* This will compute how much of the budget is left after expenses are taken
* care of.
*******************************************************************************/
double budgetOther(double monthlyIncome, double budgetLiving)
{
    // Calcuate and return value to main()
    double budgetOther = monthlyIncome - (computeTax(monthlyIncome) + 
    computeTithing(monthlyIncome) + budgetLiving);
    return budgetOther; 
}

/*******************************************************************************
* DISPLAY
* This will take input gathered from other functions and display it in an easy
* to read format.
*******************************************************************************/
void display(double monthlyIncome, double budgetLiving, double actualLiving, 
double actualTax, double actualTithing, double actualOther)
{
   // configure output to display the decimal and 2 places after it
   cout.setf(ios::fixed);
   cout.setf(ios::showpoint);
   cout.precision(2);

   // display report
   cout << endl;
   cout << "The following is a report on your monthly expenses\n";
   cout << "\tItem                  Budget          Actual\n";
   cout << "\t=============== =============== ===============\n";
   
   cout << "\tIncome          $" << setw(11) << monthlyIncome 
        << "    $" << setw(11) << monthlyIncome << endl;
   
   cout << "\tTaxes           $" << setw(11) << computeTax(monthlyIncome)
        << "    $" << setw(11) << actualTax << endl;
   
   cout << "\tTithing         $" << setw(11) << computeTithing(monthlyIncome)
        << "    $" << setw(11) << actualTithing << endl;
   
   cout << "\tLiving          $" << setw(11) << budgetLiving
        << "    $" << setw(11) << actualLiving << endl;
   
   cout << "\tOther           $" << setw(11) << budgetOther(monthlyIncome, 
           budgetLiving)
        << "    $" << setw(11) << actualOther << endl;
   cout << "\t=============== =============== ===============\n";
   cout << "\tDifference      $" << setw(11) << monthlyIncome - (computeTax
           (monthlyIncome) + computeTithing(monthlyIncome) + budgetLiving + 
           budgetOther(monthlyIncome, budgetLiving))
        << "    $" << setw(11) << monthlyIncome - (actualTax + actualTithing +
           actualLiving + actualOther) << endl;
}

/******************************************************************************
* MAIN
* This will display a greeting, call the other functions to perform 
* individual tasks, and display the report.
******************************************************************************/
int main()
{
   // display greeting
   cout << "This program keeps track of your monthly budget\n";
   cout << "Please enter the following:\n";
   
   // declare variables and corresponding functions
   double monthlyIncome = getIncome();
   double budgetLiving = getBudgetLiving();
   double actualLiving = getActualLiving();
   double actualTax = getActualTax();
   double actualTithing = getActualTithing();
   double actualOther = getActualOther();
   
   // execute functions and display the report
   display(monthlyIncome, budgetLiving, actualLiving, actualTax, actualTithing, 
   actualOther);
   
   return 0;
}