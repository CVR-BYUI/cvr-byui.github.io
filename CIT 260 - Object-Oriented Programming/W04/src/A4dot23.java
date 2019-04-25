// Source code for problem 4.23
// Name: Chris Van Ry
// Class: CIT-260 Section 7
// Date: February 2, 2019
// Description: This program will prompt the user for their information and then displays a payroll statement.

import java.util.Scanner;

public class A4dot23 {
	
	public static void main(String[] args) {
		
		// Declare constants and variables		
		final double PERCENT = 100.0;
		
		double hoursWorked = 0.0;
		double payRate = 0.0;
		double federalTaxRate = 0.0;
		double stateTaxRate = 0.0;
		double grossPay = 0.0;
		double federalWithhold = 0.0;
		double stateWithhold = 0.0;
		double totalDeduction = 0.0;
		double netPay = 0.0;
		double federalTaxPercent = 0.0;
		double stateTaxPercent = 0.0;
		
		String employeeName = ".";
		
		// Create a Scanner object
		Scanner input = new Scanner(System.in);
				
		// Explain to user what the program will do
		System.out.println("This program will display a payroll statement.");
				
		// Prompt user for name, hours worked, pay rate, federal and state tax rates
		System.out.print("Enter employee's name: ");
		employeeName = input.nextLine();
		
		System.out.print("Enter number of hours worked in a week: ");
		hoursWorked = input.nextDouble();
		
		System.out.print("Enter hourly pay rate: ");
		payRate = input.nextDouble();
		
		System.out.print("Enter federal tax withholding rate (decimal value): ");
		federalTaxRate = input.nextDouble();
		
		System.out.print("Enter state tax withholding rate (decimal value): ");
		stateTaxRate = input.nextDouble();
		
		// Calculate results
		grossPay = hoursWorked * payRate;
		federalWithhold = federalTaxRate * grossPay;
		stateWithhold = stateTaxRate * grossPay;
		totalDeduction = federalWithhold + stateWithhold;
		netPay = grossPay - totalDeduction;
		
		// Multiply rates to display percentage
		federalTaxPercent = federalTaxRate * PERCENT;
		stateTaxPercent = stateTaxRate * PERCENT;
		
		// Display results with correct number of places after decimal
		System.out.println("\nEmployee Name: " + employeeName);
		System.out.println("Hours Worked: " + hoursWorked);
		System.out.printf("Pay Rate: $%.2f\n", payRate);
		System.out.printf("Gross Pay: $%.2f\n", grossPay);
		System.out.println("Deductions:");
		System.out.printf("  Federal Withholding (%.1f%%): $%.2f\n", federalTaxPercent, federalWithhold);
		System.out.printf("  State Withholding (%.1f%%): $%.2f\n", stateTaxPercent, stateWithhold);
		System.out.printf("  Total Deduction: $%.2f\n", totalDeduction);
		System.out.printf("Net Pay: $%.2f\n", netPay);
		
		// Close scanner and say goodbye
		System.out.println("Goodbye.");
		input.close();
		
	} // End of main()
} // End of class A4dot23