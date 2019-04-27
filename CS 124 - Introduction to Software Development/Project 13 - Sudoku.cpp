/*******************************************************************************
* Program:
*    Project 13, Sudoku
*    Brother Honeycutt, CS124
* Author:
*    Chris Van Ry
* Summary:
*    This program will display a Sudoku board from a file and allow the user
*    to play the game.
*
*    Estimated:  4.0 hr
*    Actual:    10.0 hr
*
*    The most difficult part of writing this program was making corrections from
*    the previous project's feedback, implementing the pseudocode for
*    computeValues(), and displaying the possible values including a comma in
*    between.
*******************************************************************************/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

/*******************************************************************************
* GET FILENAME
*******************************************************************************/
string getFilename()
{
	string filename;

	cout << "Where is your board located? ";
	cin  >> filename;

	return filename;
}

/*******************************************************************************
* READ FILE
*******************************************************************************/
bool readFile(string filename, int board[][9])
{
	ifstream fin(filename.c_str());

	// File read error handling
	if (fin.fail())
	{
		cout << "Error reading file: " << filename << endl;
		fin.close();
		return false;
	}

	// Loop to copy file data into array
	for (int row = 0; row < 9; row++)
	{
		for (int col = 0; col < 9; col++)
			fin >> board[row][col];
	}

	// Error when file contains less than 81 numbers - Couldn't figure out
	// for (int row = 0; row < 9; row++)
	// {
	//	   for (int col = 0; col < 9; col++)
	//	   {
	// 		   if (board[row][col] != 0 || board[row][col] != 1 ||
	//             board[row][col] != 2 || board[row][col] != 3 ||
	//			   board[row][col] != 4 || board[row][col] != 5 ||
	//			   board[row][col] != 6 || board[row][col] != 7 ||
	//			   board[row][col] != 8 || board[row][col] != 9)
 	//		   {
	//			  cout << "ERROR: Board contains less than 81 numbers\n";
	//			  fin.close();
	//			  return false;
	//		   }
	//	   }
	// }

	// Close file
	fin.close();

	return true;
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
void displayBoard(int board[][9])
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
            if (board[row][col] != 0)
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
* GET INPUT
*******************************************************************************/
char getInput()
{
	char input;

	cout << "> ";
	cin  >> input;

	return input;
}

/*******************************************************************************
* GET COORDINATES
*******************************************************************************/
void getCoordinates(int &row, char &column)
{
	int rowCoordinate;
	char colCoordinate; 

	cout << "What are the coordinates of the square: ";
	cin  >> colCoordinate >> rowCoordinate;

	colCoordinate = toupper(colCoordinate);

	row = rowCoordinate;
	column = colCoordinate;
}

/*******************************************************************************
* COMPUTE VALUES
*******************************************************************************/
void computeValues(bool possible[], int board[][9], int row, int column)
{
	// fill possible array with true values;
   for (int i = 0; i < 10; i++)
   {
      possible[i] = true;
   }

   // get invalid numbers from row
   for (int iRow = 0; iRow < 9; iRow++)
   {
      possible[board[iRow][column]] = false;
   }

   for (int iCol = 0; iCol < 9; iCol++)
   {
      possible[board[row][iCol]] = false;
   }

   for (int iRow = 0; iRow < 2; iRow++)
   {
      for (int iCol = 0; iCol < 2; iCol++)
      {
         possible[board[(row / 3) * (3 + iRow)]
         	[(column / 3) * (3 + iCol)]] = false;
      }
   }
}

/*******************************************************************************
* EDIT SQUARE
* This will validate user input
*******************************************************************************/
void editSquare(int board[][9], int row, char column)
{
	// Convert user input to match board index
	int rowAdjust = row - 1;
	int colAdjust = column - 'A';
	bool possible[10];
	int value;

	// Display error if square is filled
	if  (board[rowAdjust][colAdjust] != 0)
	{
		cout << "ERROR: Square '" << column << row << "' is filled\n";
		cout << endl;
		return;
	}

	// Fill possible array with true or false values
	computeValues(possible, board, rowAdjust, colAdjust);
 
    // Prompt new value and check possible array if valid
	cout << "What is the value at '" << column << row << "': ";
	cin  >> value;

    for (int i = 1; i < 10; i++)
    {
    	if (possible[i] == false && i == value)
        {
        	cout << "ERROR: Value '" << value << "' in square '"
            << column << row << "' is invalid\n" << endl;
            return;
        }
    }

   board[rowAdjust][colAdjust] = value;
   cout << endl;

   return;
}

/*******************************************************************************
* DISPLAY POSSIBLE
*******************************************************************************/
void displayPossible(int board[][9], int row, char column)
{
    int rowAdjust = row - 1;
	int colAdjust = column - 'A';
	bool possible[10];

	// Fill possible array with true or false values
	computeValues(possible, board, rowAdjust, colAdjust);

	cout << "The possible values for '" << column << row << "' are: ";

    // Display possible values with comma between
    bool comma = true;

    for (int i = 1; i < 9; i++)
    {
    	if (possible[i] == true)
    	{
    		if (!comma)
    			cout << ", ";
    		cout << i;
    		comma = false;
    	}
    }

    cout << endl;
}

/*******************************************************************************
* INTERACT
*******************************************************************************/
void interact(int board[][9])
{
	char input;
	int row = 0;
	char column;
	
	displayOptions();
	displayBoard(board);

	do
	{
		input = getInput();

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
string getDestFilename()
{
	string destFilename;

	cout << "What file would you like to write your board to: ";
	cin  >> destFilename;

	return destFilename;
}

/*******************************************************************************
* WRITE BOARD
*******************************************************************************/
void writeBoard(string destFilename, int board[][9])
{
    // Open file
    ofstream fout(destFilename.c_str());

    // Error handling
    if (fout.fail())
    {
       cout << "Error writing to file \"" << destFilename << "\"\n";
       fout.close();
       return;
    }

    // Write board to destination file
    for (int row = 0; row < 9; row++)
	{
		for (int col = 0; col < 9; col++)
			fout << board[row][col];
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
		string filename = getFilename();
		
		// Board array
		int board[9][9];

		// File error handling
		if (readFile(filename, board))
		{
           // Interact with board
		   interact(board);

		   // Get destination filename
		   string destFilename = getDestFilename();

		   // Write board and quit
		   writeBoard(destFilename, board);

		   return 0;
		}
		else
		   return 0;
}