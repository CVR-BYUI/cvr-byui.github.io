// Source code for problem 7.8
// Name: Chris Van Ry
// Class: CIT-260 Section 7
// Date: February 23, 2019
// Description: This program will prompt the user for 10 numbers, calculate and display the average.

import java.util.Scanner;

public class A7dot8 {

	// Declare constants
	final static int NUMBER_TOTAL = 10;
	final static int INDEX_START = 0;
	final static int NULL = 0;
	
	// Main method
	public static void main(String[] args) {
				
		// Declare array
		double[] numberInput = new double[NUMBER_TOTAL];
		
		// Create a Scanner object
		Scanner input = new Scanner(System.in);
				
		// Explain to user what the program will do
		System.out.println("This program will display the average of an array.");
		
		// Prompt for numbers
		System.out.print("Enter " + NUMBER_TOTAL + " double values: ");
		
		// Loop to store user input in array
		for (int i = INDEX_START; i < NUMBER_TOTAL; i++) {
			numberInput[i] = input.nextDouble();
		}
		
		// Insert space for readability
		System.out.println();
		
		// Call method to calculate average and display
		System.out.println("Average: " + average(numberInput));
		
		// Close scanner and say goodbye
		System.out.println("Goodbye.");
		input.close();
		
	} // End of main method
	
	/**
	 * average method
	 * @param numberInput array
	 * @return average of all values in array
	 */
	public static double average(double[] array) { // I couldn't figure out how to use the method you emailed to us. I had to insert static for it to work.
		
		// Declare and initialize variable
		double sum = NULL;
		
		// Loop to add all values in array
		for (int i = INDEX_START; i < array.length; i++) {
			sum += array[i];
		}
		
		// Return result to main method
		return sum / array.length;
		
	} // End of average method
	
} // End of class A7dot8