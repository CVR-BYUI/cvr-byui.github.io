// Source code for problem 4.12
// Name: Chris Van Ry
// Class: CIT-260 Section 7
// Date: February 2, 2019
// Description: This program will prompt the user for a hex digit, convert to a binary value and display the result.

import java.util.Scanner;

public class A4dot12 {
	
	public static void main(String[] args) {
		
		// Declare constants and variables
		final char hexZero = '0';
		final char hexOne = '1';
		final char hexTwo = '2';
		final char hexThree = '3';
		final char hexFour = '4';
		final char hexFive = '5';
		final char hexSix = '6';
		final char hexSeven = '7';
		final char hexEight = '8';
		final char hexNine = '9';	
		final char hexA = 'A';
		final char hexB = 'B';
		final char hexC = 'C';
		final char hexD = 'D';
		final char hexE = 'E';
		final char hexF = 'F';
		
		String binaryOutput = ".";
		
		// Create a Scanner object
		Scanner input = new Scanner(System.in);
		
		// Explain to user what the program will do
		System.out.println("This program will convert a hex digit to binary.");
		
		// Prompt user to enter a hex digit
		System.out.print("Enter a hex digit (numbers 0 - 9 or letters A - F): ");
		
		// Store input in variable and capitalize letter
		String hexInput = input.nextLine();
		hexInput = hexInput.toUpperCase();
		
		// Error if more than one character entered
		if (hexInput.length() != 1) {
			System.out.println("ERROR: You must enter exactly 1 character.");
			System.exit(1);
		}
		
		// Convert string input to char variable
		char hexChar = hexInput.charAt(0);
		
		// Switch to determine binary value
		switch (hexChar) { 
        case hexZero: 
        	binaryOutput = "0000"; 
            break; 
        case hexOne: 
        	binaryOutput = "0001";
            break; 
        case hexTwo: 
        	binaryOutput = "0010";
            break; 
        case hexThree: 
        	binaryOutput = "0011"; 
            break; 
        case hexFour: 
        	binaryOutput = "0100"; 
            break; 
        case hexFive: 
        	binaryOutput = "0101"; 
            break; 
        case hexSix: 
        	binaryOutput = "0110"; 
            break; 
        case hexSeven: 
        	binaryOutput = "0111"; 
            break; 
        case hexEight: 
        	binaryOutput = "1000"; 
            break; 
        case hexNine: 
        	binaryOutput = "1001"; 
            break; 
        case hexA: 
        	binaryOutput = "1010"; 
            break; 
        case hexB: 
        	binaryOutput = "1011"; 
            break; 
        case hexC: 
        	binaryOutput = "1100"; 
            break; 
        case hexD: 
        	binaryOutput = "1101"; 
            break; 
        case hexE: 
        	binaryOutput = "1110"; 
            break; 
        case hexF: 
        	binaryOutput = "1111"; 
            break; 
        default: 
            System.out.println("ERROR: " + hexInput + " is an invalid hex digit.");
            System.exit(1);
        } // End of switch
		
		// Display results
		System.out.println("The binary value of " + hexInput + " is " + binaryOutput + ".");
		
		// Close scanner and say goodbye
		System.out.println("Goodbye.");
		input.close();
		
	} // End of main()
} // End of class A4dot12