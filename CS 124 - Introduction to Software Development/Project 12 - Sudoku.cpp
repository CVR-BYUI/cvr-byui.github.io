/*******************************************************************************
* Program:
*    Project 12, Sudoku
*    Brother Honeycutt, CS124
* Author:
*    Chris Van Ry
* Summary:
*    This program will display a Sudoku board from a file and allow the user
*    to do some simple interactions.
*
*    Estimated:  2.0 hr
*    Actual:     6.0 hr
*
*    The most difficult part of writing this program was 
*******************************************************************************/

#include <iostream>
#include <fstream>
using namespace std;

/*******************************************************************************
* GET FILENAME
*******************************************************************************/
void getFilename(char filename[])
{
	cout << "Where is your board located? ";
	cin.getline(filename, 256);
}

/*******************************************************************************
* READ FILE
*******************************************************************************/
void readFile(char filename[], char board[][9])
{
	ifstream fin(filename);

	// File read error handling
	if (fin.fail())
	{
		cout << "Error reading file: " << filename << endl;
		fin.close();
		return;
	}

	// Loop to copy file data into array
	for (int row = 0; row < 9; row++)
	{
		for (int col = 0; col < 9; col++)
			fin >> board[row][col];
	}

	// Close file
	fin.close();
}

/*******************************************************************************
* DISPLAY OPTIONS
*******************************************************************************/
void displayOptions()
{
	cout << "Options:\n";
	cout << "   ?  Show these instructions\n";
	cout << "   D  Display the board\n";
	cout << "   E  Edit one square\n";
	cout << "   S  Show the possible values for a square\n";
	cout << "   Q  Save and Quit\n";
	cout << endl;
}

/*******************************************************************************
* DISPLAY BOARD
*******************************************************************************/
void displayBoard(char board[][9])
{
    // Display column letters
    cout << "   A B C D E F G H I\n";

    int rowNum = 1;

   for (int row = 0; row < 9; row++)
   {
   	  // Display row number
   	  cout << rowNum << "  ";
      for (int col = 0; col < 9; col++)
      {
         // Display value unless it's a zero
         if (board[row][col] != '0')
         	cout << board[row][col];
         else
         	cout << " ";

         // Display grid
         if (col == 2 || col == 5)
            cout << "|";
         else
         {
         	// End of row, new line
            if (col == 8)
               cout << endl;
            else
               cout << " ";
         }
      }
      // Display grid
      if (row == 2 || row == 5)
         cout << "   -----+-----+-----\n";
      rowNum++;
   }
   cout << endl;
}

/*******************************************************************************
* GET COORDINATES
*******************************************************************************/
void getCoordinates(int &row, char &column)
{
	int r;
	char c; 

	cout << "What are the coordinates of the square: ";
	cin  >> c >> r;

	c = toupper(c);

	row = r;
	column = c;
}

/*******************************************************************************
* COMPUTE VALUES
*******************************************************************************/
void computeValues(char board[][9], int row, char column)
{
	return;
}

/*******************************************************************************
* EDIT SQUARE
* This will validate user input
*******************************************************************************/
void editSquare(char board[][9], int row, char column)
{
	// Convert user input to match board index
	int r = row - 1;
	int c = column - 'A';

	// Display error if square is filled
	if  (board[r][c] != '0')
	{
		cout << "ERROR: Square '" << column << row << "' is filled\n";
		cout << endl;
		return;
	}
	else
	{
		// Prompt new value and store it in board array
	    cout << "What is the value at '" << column << row << "': ";
	    cin  >> board[r][c];
        cout << endl;
    }
}

/*******************************************************************************
* DISPLAY POSSIBLE
*******************************************************************************/
void displayPossible(char board[][9], int row, char column)
{
	return;
}

/*******************************************************************************
* INTERACT
*******************************************************************************/
void interact(char board[][9])
{
	char input;
	int row = 0;
	char column;
	
	displayOptions();
	displayBoard(board);

	do
	{
		cout << "> ";
		cin  >> input;

		switch (toupper(input))
		{
			case '?':
			   displayOptions();
			   cout << endl;
			   break;
			case 'D':
			   displayBoard(board);
			   break;
			case 'E':
			   getCoordinates(row, column);
			   editSquare(board, row, column);
			   break;
			case 'S':
			   getCoordinates(row, column);
			   displayPossible(board, row, column);
			   break;
			case 'Q':
			   break;
			default:
			   cout << "ERROR: Invalid input. Try again.\n";
		}
	}
	while (toupper(input) != 'Q');
}

/*******************************************************************************
* GET DEST FILENAME
*******************************************************************************/
void getDestFilename(char destFilename[])
{
	cout << "What file would you like to write your board to: ";
	cin  >> destFilename;
}

/*******************************************************************************
* WRITE BOARD
*******************************************************************************/
void writeBoard(char board[][9])
{
    // Prompt user for destination filename
    char destFilename[256];
    getDestFilename(destFilename);

    // Open file
    ofstream fout(destFilename);

    // Error handling
    if (fout.fail())
    {
       cout << "Error writing to file \"" << destFilename << "\"\n";
       return;
    }

    // Write board to destination file
    for (int row = 0; row < 9; row++)
	{
		for (int col = 0; col < 9; col++)
		{
			fout << board[row][col];
			fout << endl;
		}

	}

    // Close file
    fout.close();

    cout << "Board written successfully\n";
}

/*******************************************************************************
* MAIN
*******************************************************************************/
int main()
{
		// Get filename
		char filename[256];
		getFilename(filename);

		// Read file and store data in array
		char board[9][9];
		readFile(filename, board);

		// Interact with board
		interact(board);

		// Write board and quit
		writeBoard(board);

	return 0;
}