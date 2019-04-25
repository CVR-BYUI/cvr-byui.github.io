// Source code for problem 5.3
// Name: Chris Van Ry
// Class: CIT-260 Section 7
// Date: February 9, 2019
// Description: This program will utilize a loop to display a conversion table of kilograms to pounds.

import java.util.Scanner;

public class A5dot3 {
	
	public static void main(String[] args) {
		
		// Declare constants and variables		
		final double KG_PER_LB = 2.2;
		final int END = 200;
		
		// Create a Scanner object
		Scanner input = new Scanner(System.in);
				
		// Explain to user what the program will do
		System.out.format("This program will display a conversion table of kilograms to pounds.%n%n");
				
		// Display header
		System.out.println("Kilograms     Pounds");
		
		// Loop to display results including formatting to left justify and include one place after decimal
		for (int pound = 1; pound < END; pound += 2) {
			System.out.format("%-9d     %-6.1f%n", pound, pound * KG_PER_LB);
			
		} // End of for loop
		
		// Close scanner and say goodbye
		System.out.println("Goodbye.");
		input.close();
		
	} // End of main()
} // End of class A5dot3