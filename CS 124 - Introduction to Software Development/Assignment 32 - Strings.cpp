/*******************************************************************************
* Program:
*    Assignment 32, Strings
*    Brother Honeycutt, CS124
* Author:
*    Chris Van Ry
* Summary:
*    This program will prompt the user for a letter and text and will return
*    how many occurences the letter appears in the text.
* 
*    Estimated: 0.75 hr
*    Actual: 2.0 hr
* 
*    The most difficult part of writing this program was traversing the string
*    using the null character.
*******************************************************************************/

#include <iostream>
using namespace std;

/*******************************************************************************
* COUNT LETTERS
* This will traverse the string and count how many occurrences the user input
* letter appears.
*******************************************************************************/
int countLetters(char letter, char text[])
{
	int count = 0;

    // Traverse string using null character
	for (int i = 0; text[i] != '\0'; i++)
	{
		if (text[i] == letter)
			count++;
	}

	return count;
}

/*******************************************************************************
* MAIN
* This will prompt the user for a letter and text, call countLetters() function
* and display result.
*******************************************************************************/
int main()
{
   // Declare variable and array
   char letter;
   char text[256];

   cout << "Enter a letter: ";
   cin  >> letter;

   // Array input using entire string of text
   cout << "Enter text: ";
   cin.ignore();
   cin.getline(text, 256);

   // Call function and display result
   cout << "Number of '" << letter << "'s: " << countLetters(letter, text);

   return 0;
}