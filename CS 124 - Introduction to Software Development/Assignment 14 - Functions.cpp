/*******************************************************************************
* Program:
*    Assignment 14, Functions
*    Brother Honeycutt, CS124
* Author:
*    Chris Van Ry
* Summary:
*    This program will contain two functions that display a message and an
*    answer.
* 
*    Estimated: 1.0 hr
*    Actual: 1.0 hr
* 
*    The most difficult part of writing this program was understanding the 
*    multiple functions and how they came together at the end (main).
*******************************************************************************/

#include <iostream>
using namespace std;

/*******************************************************************************
* QUESTION PETER
* This will display a message and not return anything.
*******************************************************************************/
void questionPeter()
{
   // display Peter's question
   cout << "Lord, how oft shall my brother sin against me, and I forgive him?\n";
   cout << "Till seven times?\n";
   
   // return no information to main()
   return;
}

/*******************************************************************************
* RESPONSE LORD
* This will not display anything. It will return the response.
* *****************************************************************************/
int responseLord()
{
    // return value to main()
    return 7 * 70;
}

/*******************************************************************************
* MAIN
* This will display Peter's question, then display the Lord's response.
* *****************************************************************************/
int main()
{
    // ask Peter's question
    questionPeter();
    
    // the first part of the Lord's response
    cout << "Jesus saith unto him, I say not unto thee, Until seven\n";
    cout << "times: but, Until " << responseLord() << ".\n";
    
    return 0;
}