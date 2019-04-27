/*******************************************************************************
* Program:
*    Project 09, Mad Lib
*    Brother Honeycutt, CS124
* Author:
*    Chris Van Ry
* Summary:
*    This program will prompt the user for a file name, read the file and prompt
*    for words to be entered into the Mad Lib.
* 
*    Estimated: 3.0 hr
*    Actual: 6.0 hr
* 
*    The most difficult part of writing this program was figuring out how to 
*    verify data storage requirements.
*******************************************************************************/

#include <iostream>
#include <fstream>
using namespace std;

/*******************************************************************************
* GET FILE NAME
* This will prompt the user for the file name.
*******************************************************************************/
void getFileName(char fileName[])
{
	cout << "Please enter the filename of the Mad Lib: ";
	cin.getline(fileName, 256);
}

/*******************************************************************************
* READ FILE
* This will read the file and call the askQuestions() function
*******************************************************************************/
int readFile(char fileName[256], char story[][256])
{
	// Open file
	ifstream fin(fileName);

	// Error handling
	if (fin.fail())
	{
		cout << "Error reading file \"" << fileName << "\"\n";
		return 0;
	}

	int numWords = 0;

	// "No more than 256 words in the input file including prompts"
	while (numWords <= 256 && !fin.eof())
	{
		// Read from file and store text in array
		fin >> story[numWords];
		// Count how many words are in file
		numWords++;
	}

	// Close file
	fin.close();

	return numWords;
}

/*******************************************************************************
* ASK QUESTIONS
* This will traverse text array and prompt for words when markers are
* encountered.
*******************************************************************************/
char askQuestions(char text[][256], int numWords)
{
	int i = numWords;
	if (text[i][0] != ':' || !isalpha(text[i][1]))
		return 0;
	else 
	{
		cout << "\t";
		text[i][1] = toupper(text[i][1]);
		for (int j = 1; text[i][j] != '\0'; j++)
		{
			if (text[i][j] == '_')
				text[i][j] = ' ';
			cout << text[i][j];
		}
		cout << ": ";
		cin.getline(text[i], 32);
	}

	return text[i][32];
}

/*

		// Place tab before word propmt and capitalize first letter
		cout << "\t";
		text [i][1] = toupper(text[i][1]);

		// Replace underscore with space
		for (int j = 1; text[i][j] != '\0'; j++)
		{
			if (text[i][j] == '_')
				text[i][j] = " ";
			else
				cout << tolower(text[i]);
			cout << text[i][j];
		}
		cout << ": ";

		// User input and verify "Each word in the input file is no more than 32 
		// characters in length"
		cin.getline(text[i], 32);
	}

	return text;
}
*/

/*******************************************************************************
* MAIN
* This will utilize all functions to complete task of program.
*******************************************************************************/
int main()
{
	// Prompt for file name
	char fileName[256];
	getFileName(fileName);

	// Read file and count how many words are in file
	char story[256][256];
	int numWords = readFile(fileName, story);

	// Prompt user for words
	askQuestions(story, numWords);

    return 0;
}