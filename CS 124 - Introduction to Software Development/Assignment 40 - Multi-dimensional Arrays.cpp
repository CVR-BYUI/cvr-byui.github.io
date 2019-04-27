/*******************************************************************************
* Program:
*    Assignment 40, Multi-dimensional Arrays
*    Brother Honeycutt, CS124
* Author:
*    Chris Van Ry
* Summary:
*    This program will prompt the user for a file name and display the results
*    on a tic tac toe board.
* 
*    Estimated: 0.75 hr
*    Actual:    3.0 hr
* 
*    The most difficult part of writing this program was getting the board to 
*    display correctly. I had to forget the 2D image and focus on each
*    individual line.
*******************************************************************************/

#include <iostream>
#include <fstream>
using namespace std;

/*******************************************************************************
* GET SOURCE FILE
* This will prompt the user for the source file name.
*******************************************************************************/
void getSourceFile(char fileName[])
{
   cout << "Enter source filename: ";
   cin.getline(fileName, 256);
}

/*******************************************************************************
* READ FILE
* This will read the file and store data in an array.
*******************************************************************************/
void readFile(char fileName[], char board[][3])
{
   // Open file
   ifstream fin(fileName);

   // Error handling
   if (fin.fail())
   {
      cout << "Error reading file \"" << fileName << "\"\n";
      return;
   }

   // Store data in a 2-dimensional array
   for (int row = 0; row < 3; row++)
   {
      for (int col = 0; col < 3; col++)
         fin >> board[row][col];
   }

   // Close file
   fin.close();
}

/*******************************************************************************
* DISPLAY
* This will display the Tic-Tac-Toe board, including the data from the file
*******************************************************************************/
void display(char board[][3])
{
   for (int row = 0; row < 3; row++)
   {
      for (int col = 0; col < 3; col++)
      {
         cout << " ";
         // Period means square is unclaimed
         if (board[row][col] == '.')
            cout << "  ";
         else
            cout << board[row][col] << " ";
         if (col < 2)
            cout << "|";
      }
      cout << endl;
      if (row < 2)
         cout << "---+---+---\n";
   }
}

/*******************************************************************************
* GET DESTINATION FILE
* This will prompt the user for a destination file name.
*******************************************************************************/
void getDestinationFile(char fileName[])
{
   cout << "Enter destination filename: ";
   cin.getline(fileName, 256);
}

/*******************************************************************************
* WRITE FILE
* This will write the data to the new file.
*******************************************************************************/
void writeFile(char fileName[], char board[][3])
{
   // Open file
   ofstream fout(fileName);

   // Error handling
   if (fout.fail())
   {
      cout << "Error writing to file \"" << fileName << "\"\n";
      return;
   }

   // Write data to new file
   for (int row = 0; row < 3; row++)
   {

      for (int col = 0; col < 3; col++)
         fout << board[row][col];
   }

   // Close file
   fout.close();
}

/*******************************************************************************
* MAIN
* This will utilize all functions to complete task of program.
*******************************************************************************/
int main()
{
   // Prompt for source file name
   char fileName[256];
   getSourceFile(fileName);

   // Read file, store in array, display board
   char board[3][3];
   readFile(fileName, board);
   display(board);

   // Prompt for destination file name and write data to new file
   getDestinationFile(fileName);
   writeFile(fileName, board);

   cout << "File written\n";

   return 0;
}