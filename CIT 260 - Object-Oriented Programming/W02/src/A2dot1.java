// Source code for problem 2.1
// Name: Chris Van Ry
// Class: CIT-260 Section 7
// Date: January 19, 2019

import java.util.Scanner;

public class A2dot1 {
	public static void main(String[] args) {
		// Create a Scanner object
		Scanner input = new Scanner(System.in);
		
		// Prompt user to enter temperature in Celsius
		System.out.print("Enter a degree in Celsius: ");
		double celsius = input.nextDouble();
		
		// Convert Celsius to Fahrenheit
		double fahrenheit = (9.0 / 5.0) * celsius + 32;
		
		// Display Celsius as whole number
		int celsiusWhole = (int)celsius;
		
		// Display results
		System.out.println(celsiusWhole + " Celsius is " + fahrenheit + " Fahrenheit");
	}

}