// Source code for problem 7.11
// Name: Chris Van Ry
// Class: CIT-260 Section 7
// Date: February 23, 2019
// Description: This program will prompt the user for 10 numbers, calculate and display the mean and standard deviation.

import java.util.Scanner;

public class A7dot11 {

	// Declare constants
	final static int NUMBER_TOTAL = 10;
	final static int INDEX_START = 0;
	final static int NULL = 0;
	final static int SQUARED = 2;
	final static int ONE = 1;
	
	// Main method
	public static void main(String[] args) {
		
		// Declare and initialize variables
		double mean = NULL;
		double deviation = NULL;
		
		// Declare array
		double[] numberInput = new double[NUMBER_TOTAL];
		
		// Create a Scanner object
		Scanner input = new Scanner(System.in);
				
		// Explain to user what the program will do
		System.out.println("This program will display the mean and standard deviation of an array.");
		
		// Prompt for numbers
		System.out.print("Enter " + NUMBER_TOTAL + " numbers: ");
		
		// Loop to store user input in array
		for (int i = INDEX_START; i < NUMBER_TOTAL; i++) {
			numberInput[i] = input.nextDouble();
		}
		
		// Insert space for readability
		System.out.println();
		
		// Call other methods to calculate results
		mean = mean(numberInput);
		deviation = deviation(numberInput);
		
		// Display results with proper formatting
		System.out.printf("The mean is %.2f\n", mean);
		System.out.printf("The standard deviation is %.5f\n", deviation);
		
		// Insert space for readability
		System.out.println();
		
		// Close scanner and say goodbye
		System.out.println("Goodbye.");
		input.close();
		
	} // End of main method
	
	/**
	 * mean method
	 * @param numberInput array
	 * @return the mean of all values in array
	 */
	public static double mean(double[] x) {
		
		// Declare and initialize variable
		double sum = NULL;
		
		// Loop to add all values in array
		for (int i = INDEX_START; i < x.length; i++) {
			sum += x[i];
		}
		
		// Return result
		return sum / x.length;
		
	} // End of mean method
	
	/**
	 * deviation method
	 * @param numberInput array
	 * @return standard deviation of all values in array
	 */
	public static double deviation(double[] x) {
		
		// Declare and initialize variables
		double sum = NULL;
		double mean = mean(x);
		
		// Loop to calculate standard deviation
		for (int i = INDEX_START; i < x.length; i++) {
			sum += Math.pow(x[i] - mean,  SQUARED);
		}
		
		// Return result
		return Math.sqrt(sum / (x.length - ONE));
		
	} // End of deviation method
	
} // End of class A7dot11
