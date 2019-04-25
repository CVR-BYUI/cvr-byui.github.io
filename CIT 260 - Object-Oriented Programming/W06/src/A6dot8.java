// Source code for problem 6.8
// Name: Chris Van Ry
// Class: CIT-260 Section 7
// Date: February 16, 2019
// Description: This program will convert between Celsius and Fahrenheit and display a table.

import java.util.Scanner;

public class A6dot8 {

	// Main method
	public static void main(String[] args) {
		
		// Declare constants and variables
		double fahrenheit = 0.0;
		double celsius = 0.0;
		
		// Create a Scanner object
		Scanner input = new Scanner(System.in);
				
		// Explain to user what the program will do
		System.out.println("This program will convert between Celsius and Fahrenheit and display a table.");
		
		// Insert space
	    System.out.println();
		
		// Display header
		System.out.println("Celsius     Fahrenheit     |     Fahrenheit     Celsius");
		
		// Loop to call other methods and display results
	    for (int i = 40, j = 120; i >= 31; i--, j -= 10) {
	        fahrenheit = celsiusToFahrenheit(i);
	        celsius = fahrenheitToCelsius(j);
	        System.out.printf("%-7.1f     %-10.1f     |     %-10.1f     %-7.2f\n",
	          (double)i, fahrenheit, (double)j, celsius);
	      }
		
			// Insert space
		    System.out.println();
		
		// Close scanner and say goodbye
		System.out.println("Goodbye.");
		input.close();
		
	} // End of main method
	
	/**
	 * celsiusToFahrenheit method
	 * @param Celsius temperature
	 * @return Fahrenheit temperature
	 */
	public static double celsiusToFahrenheit(double celsius) {
		 return (9.0 / 5) * celsius + 32;

	} // End of celsiusToFahrenheit method
	
	/**
	 * fahrenheitToCelsius method
	 * @param Fahrenheit temperature
	 * @return Celsius temperature
	 */
	public static double fahrenheitToCelsius(double fahrenheit) {
	    return (5.0 / 9) * (fahrenheit - 32);

	} // End of celsiusToFahrenheit method
	
} // End of class A6dot8