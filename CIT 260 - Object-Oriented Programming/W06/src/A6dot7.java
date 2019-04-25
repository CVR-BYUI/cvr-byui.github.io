// Source code for problem 6.7
// Name: Chris Van Ry
// Class: CIT-260 Section 7
// Date: February 16, 2019
// Description: This program will prompt the user for the amount invested and annual interest rate and will display the future value for years 1 to 30.

import java.util.Scanner;

public class A6dot7 {

	// Main method
	public static void main(String[] args) {
		
		// Declare constants and variables
		final int BEGIN_YEAR = 1;
		final int END_YEAR = 30;
		final double ANNUAL_TO_MONTHLY = 1200.0;
		
		double investmentAmount = 0.0;
		double annualInterestRate = 0.0;
		double monthlyInterestRate = 0.0;
		double futureValue = 0.0;
		
		// Create a Scanner object
		Scanner input = new Scanner(System.in);
				
		// Explain to user what the program will do
		System.out.println("This program will calculate and display future value for years 1 to 30, based on user input.");
		
		// Prompt for amount invested
		System.out.print("The amount invested: ");
		investmentAmount = input.nextDouble();
		
		// Prompt for annual interest rate
		System.out.print("Annual interest rate (percent): ");
		annualInterestRate = input.nextDouble();
		
		// Calculate monthly interest rate
		monthlyInterestRate = annualInterestRate / ANNUAL_TO_MONTHLY;
		
		// Display header
		System.out.println("Years   Future Value");
		
		// Loop to display results
		for (int i = 1; i <= 30; i++) {
		      futureValue = futureInvestmentValue(investmentAmount, monthlyInterestRate, i);
		      System.out.printf("%-5d   %12.2f\n", i, futureValue);
		    }
		
			// Insert space
		    System.out.println();
		
		// Close scanner and say goodbye
		System.out.println("Goodbye.");
		input.close();
		
	} // End of main method
	
	/**
	 * futureInvestmentValue method
	 * @param investmentAmount, monthlyInterestRate, years
	 * @return the future value
	 */
	public static double futureInvestmentValue(double investmentAmount, double monthlyInterestRate, int years) {
		
		return investmentAmount * Math.pow(1 + monthlyInterestRate,  years * 12);
		
	} // End of futureInvestmentValue method
	
} // End of class A6dot7