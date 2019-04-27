/*******************************************************************************
* Program:
*    Assignment 21, Debugging
*    Brother Honeycutt, CS124
* Author:
*    Chris Van Ry
* Summary:
*    This program will determine how much money a user is spending on a car.
* 
*    Estimated: 0.75 hr
*    Actual: 1.0 hr
* 
*    The most difficult part of writing this program was interpreting the 
*    structure chart into appropriate functions.
*******************************************************************************/

#include <iostream>
using namespace std;

int promptDevalue()
{
   return 0;   
}

int promptInsurance()
{
   return 0;
}

int promptParking()
{
   return 0;    
}

int getPeriodicCost()
{
   promptDevalue();
   promptInsurance();
   promptParking();
   return 0;
}

int promptMileage()
{
   return 0;
}

int promptGas()
{
   return 0;    
}

int promptRepairs()
{
   return 0;
}

int promptTires()
{
   return 0;
}

int getUsageCost()
{
   promptMileage();
   promptGas();
   promptRepairs();
   promptTires();
   return 0;
}

void display(float costUsage, float costPeriodic)
{
   cout << "Success\n";
}

/*******************************************************************************
* MAIN
* This will call all other functions to ensure correct data flow.
* *****************************************************************************/
int main()
{
   float costUsage;
   float costPeriodic;
   getPeriodicCost();
   getUsageCost();
   display(costUsage, costPeriodic);
   return 0;
}