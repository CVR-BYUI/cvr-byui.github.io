/*******************************************************************************
* Program:
*    Project 10, Mad Lib
*    Brother Honeycutt, CS124
* Author:
*    Chris Van Ry
* Summary:
*    This program will prompt the user for a file name, read the file and prompt
*    for words to be entered into the Mad Lib.
*
*    Estimated: 3.0 hr
*    Actual: 8.0 hr
*
*    The most difficult part of writing this program was figuring out how to
*    verify data storage requirements.
*******************************************************************************/

#include <iostream>
#include <fstream>
using namespace std;

/*******************************************************************************
* GET FILE NAME
*******************************************************************************/
void getFilename(char filename[])
{
	cout << "Please enter the filename of the Mad Lib: ";
	cin.getline(filename, 256);
}

/*******************************************************************************
* READ FILE
*******************************************************************************/
int readFile(char filename[], char story[][256])
{
	ifstream fin(filename);
	if (fin.fail())
	{
		cout << "Error reading file: " << filename << endl;
		fin.close(); // Good programmer
		return 0;
	}

	int i = 0; // Index of each word
	for (i = 0; fin >> story[i]; i++)
	{
		if (i == 256)
		{
			cout << "Error: too many words/tokens in file\n";
			fin.close(); // Good programmer
			return 0;
		}
	}

	fin.close(); // Good programmer
	return i; // Return number of words
}

/*******************************************************************************
* SHOULD PROMPT
*******************************************************************************/
bool shouldPrompt(char firstCharacter)
{
	// We should prompt if the first character is not a special token
	switch (firstCharacter)
	{
		case '!':
		case '<':
		case '>':
		case '.':
		case ',':
			return false;
	}
	return true;
}

/*******************************************************************************
* PROMPT USER
*******************************************************************************/
void promptUser(char prompt[])
{
	// Start prompt with a tab and uppercase letter
	prompt[0] = '\t';
	prompt[1] = toupper(prompt[1]);

	// Convert underscores to spaces
	for (char *letter = prompt; *letter; letter++)
	{
		if (*letter == '_')
			cout << " ";
		else
			// Lower case all letters except the first
			cout << (char)((prompt + 1) != letter ? tolower(*letter) : *letter);
	}
	cout << ": ";

	// Overwrite prompt with user input
	// Since arrays are pass by reference, this will update the story
	cin.getline(prompt, 32);
}

/*******************************************************************************
* REPLACE TOKEN
*******************************************************************************/
void replaceToken(char token[])
{
	// Switch on the second character since that's what tells
	// us the intended output
	switch (token[1])
	{
		case '!':
			token[0] = '\n';
			break;
		case '<':
			token[0] = '<';
			break;
		case '>':
			token[0] = '>'; // Leave the special token to account for open/close
			break;
		case '.':
			token[0] = '.';
			break;
		case ',':
			token[0] = ',';
			break;
		default:
			token[0] = '\0'; // invalid token, just ignore
	}

	// Need null character to make it a valid c-string
	token[1] = '\0';
}

/*******************************************************************************
* REPLACE TOKENS
*******************************************************************************/
void replaceTokens(char story[][256], int numWords)
{
	for (int i = 0; i < numWords; i++)
	{
		// We only care about words that start with ':'
		if (story[i][0] == ':')
		{
			if (shouldPrompt(story[i][1]))
			{
				promptUser(story[i]);
			}
			else
			{
				replaceToken(story[i]);
			}
		}
	}
}

/*******************************************************************************
* NEEDS SPACE
*******************************************************************************/
bool needsSpace(char current, char next)
{
	// Need a space if current is not a token (except for close quotes)
	// and next is not a token (except for open quotes)
	return (current != '\n' &&
			current != '<' &&
			next != '\n' &&
			next != '>' &&
			next != '.' &&
			next != ',');
}

/*******************************************************************************
* DISPLAY STORY
*******************************************************************************/
void displayStory(char story[][256], int numWords)
{
	cout << endl;
	for (int i = 0; i < numWords; i++)
	{
		// Handle the case of close quotes
		cout << (story[i][0] == '>' || story[i][0] == '<' ? "\"" : story[i]);

		// if were at the end of the story or we have certain punctuation
		// don't output a space
		if (i + 1 < numWords && needsSpace(story[i][0], story[i + 1][0]))
			cout << " ";
	}
	cout << endl;
}

/*******************************************************************************
* PLAY AGAIN
*******************************************************************************/
bool playAgain()
{
	char input[256];
	cout << "Do you want to play again (y/n)? ";
	cin.getline(input, 256);
	return input[0] == 'y' || input[0] == 'Y';
}

/*******************************************************************************
* MAIN
*******************************************************************************/
int main()
{
	do
	{
		// get filename
		char filename[256];
		getFilename(filename);

		// read file
		char story[32][256];
		int numWords = readFile(filename, story);

		// replace tokens
		replaceTokens(story, numWords);

		// display story
		displayStory(story, numWords);
	}
	while (playAgain());

	cout << "Thank you for playing.\n";
	return 0;
}
