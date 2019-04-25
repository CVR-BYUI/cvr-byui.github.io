// Source code for problem 2.5
// Name: Chris Van Ry
// Class: CIT-260 Section 7
// Date: January 19, 2019

import java.util.Scanner;

public class A2dot5 {
	public static void main(String[] args) {		
		// Create a Scanner object
		Scanner input = new Scanner(System.in);
		
		// Prompt user to enter subtotal and gratuity rate
		System.out.print("Enter the subtotal and a gratuity rate: ");
		double subtotal = input.nextDouble();
		double rate = input.nextDouble() / 100;
		
		// Compute the gratuity
		double gratuity = subtotal * rate;
		
		// Compute the total
		double total = subtotal + gratuity;
		
		// Display results
		System.out.println("The gratuity is $" + gratuity + " and total is $" + total);
	}

}