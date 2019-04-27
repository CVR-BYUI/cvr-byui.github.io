/*******************************************************************************
* Program:
*    Assignment 41, Allocating Memory
*    Brother Honeycutt, CS124
* Author:
*    Chris Van Ry
* Summary:
*    This program will prompt the user the number of characters in a string and
*    allocate a string in memory. It will then prompt the user for the string 
*    and display it back to them.
* 
*    Estimated: 0.75 hr
*    Actual:    2.0 hr
* 
*    The most difficult part of writing this program was using pointers. It's 
*    still a bit abstract to me. 
*******************************************************************************/

#include <iostream>
using namespace std;

/*******************************************************************************
* PROMPT NUMBER
* This will prompt the user for the number of characters.
*******************************************************************************/
int promptNumber()
{
   int number;

   cout << "Number of characters: ";
   cin  >> number;

   return number;
}

/*******************************************************************************
* PROMPT TEXT
* This will prompt the user for the text.
*******************************************************************************/
void promptText(char text[], int size)
{
   cout << "Enter Text: ";
   // Ignore new line character and properly store in array
   cin.ignore();
   cin.getline(text, (size + 1));
}

/*******************************************************************************
* DISPLAY TEXT
* This will display the text.
*******************************************************************************/
void displayText(char text[])
{
   cout << "Text: " << text << endl;
}

/*******************************************************************************
* MAIN
* This will utilize all functions to perform task of program.
*******************************************************************************/
int main()
{
   int size = promptNumber();

   // Allocate the memory for array and check for error
   char *text = new(nothrow) char[size + 1];

   if (!text)
   {
      cout << "Allocation failure!\n";
      return 0;
   }

   promptText(text, size);
   displayText(text);

   // Release memory
   delete[] text;
   text = NULL;

   return 0;
}