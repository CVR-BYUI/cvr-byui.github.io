// Source code for problem 12.2
// Name: Chris Van Ry
// Class: CIT-260 Section 7
// Date: March 23, 2019
// Description: This program will prompt the user for 2 numbers and then display their sum.
import java.util.Scanner;

public class A12dot2 {
	
	// Declare constants
	final static int ZERO = 0;

	public static void main(String[] args) {
		
		// Declare variables
		int num1 = ZERO;
		int num2 = ZERO;
		boolean continueInput = true;
		
		// Explain to user what the program will do
		System.out.println("This program will prompt the user for 2 numbers and then display their sum.");
					
		// Insert space for readability
		System.out.println();
		
		// Create a scanner object
	    Scanner input = new Scanner(System.in);

	    // do while loop to repeat input prompt if error occurs
	    do {
	    	
		    // try block
		    try {
		    
		    	// Prompt user for 2 integers
		    	System.out.print("Enter two integers: ");
		    	num1 = input.nextInt();
		    	num2 = input.nextInt();
		    	
		    	// Proceed out of try block if no exceptions are thrown		    	
		    	continueInput = false;
		    }
	    
		    // catch block
		    catch (Exception e) {
		    	
		    	// Error message
		    	System.out.println("ERROR: Numbers must be integers");
		    	
		    	// Insert space for readability
			 	System.out.println();
		    	
		    	// Discard input
		    	input.nextLine();
		    }
		    
	    } while (continueInput);
	    
	    // Calculate sum and display to user
    	System.out.println("Sum of two integers: " + (num1 + num2));
	    
	    // Insert space for readability
	 	System.out.println();
	 		
	 	// Close scanner and say goodbye
	 	System.out.println("Goodbye.");
	 	input.close();
	 	
	  } // End of main method
	
} // End of A12dot2 class