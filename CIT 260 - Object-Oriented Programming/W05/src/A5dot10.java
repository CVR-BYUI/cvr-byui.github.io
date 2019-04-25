// Source code for problem 5.10
// Name: Chris Van Ry
// Class: CIT-260 Section 7
// Date: February 9, 2019
// Description: This program will display all numbers from 100 to 1000 that are divisible by 5 and 6.

import java.util.Scanner;

public class A5dot10 {
	
	public static void main(String[] args) {
		
		// Declare constants and variables
		final int START = 100;
		final int END = 1000;
		final int ZERO = 0;
		final int FIRST_DIVISOR = 5;
		final int SECOND_DIVISOR = 6;
		final int NEWLINE = 10;
		
		int numberTotal = 0;
		
		// Create a Scanner object
		Scanner input = new Scanner(System.in);
				
		// Explain to user what the program will do
		System.out.format("This program will display all numbers from %d to %d that are divisible by %d and %d.%n%n", START, END, FIRST_DIVISOR, SECOND_DIVISOR);
		
		// For loop to start at 100 and count to 1000
		for (int count = START; count <= END; count++) {
			
			// If statement to count and display divisible numbers
			if (count % FIRST_DIVISOR == ZERO && count % SECOND_DIVISOR == ZERO) {
				System.out.print(count + " ");
				numberTotal++;
				
				// If statement to display a new line once 10 numbers have been displayed and reset count
				if (numberTotal == NEWLINE) {
					System.out.format("%n");
					numberTotal = 0;
					
				} // End of if statement
			} // End of if statement
		} // End of for loop
		
		// Add space
		System.out.format("%n");
		
		// Close scanner and say goodbye
		System.out.println("Goodbye.");
		input.close();
		
	} // End of main()
} // End of class A5dot10