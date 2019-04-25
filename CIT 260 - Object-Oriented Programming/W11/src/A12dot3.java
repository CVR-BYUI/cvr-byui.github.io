// Source code for problem 12.3
// Name: Chris Van Ry
// Class: CIT-260 Section 7
// Date: March 23, 2019
// Description: This program will prompt the user to select an index number from a random array and will display.
import java.util.Scanner;

public class A12dot3 {
	
	// Declare constants
	final static int ZERO = 0;
	final static int INDEX_ADJUST = 1;
	final static int ARRAY_SIZE = 100;

	public static void main(String[] args) {
		
		// Declare variables
		int[] array = new int[ARRAY_SIZE];
		int indexNum = ZERO;
		boolean continueInput = true;
		
		// Explain to user what the program will do
		System.out.println("This program will prompt the user to select an index number from a random array and will display.");
					
		// Insert space for readability
		System.out.println();
		
		// Create a scanner object
	    Scanner input = new Scanner(System.in);
	    
	    // Loop to fill array with random numbers
	    for(int i = ZERO; i < array.length; i++) {
	    	array[i] = (int)(Math.random() * ARRAY_SIZE);
	    }

	    // do while loop to repeat input prompt if error occurs
	    do {
	    	
		    // try block
		    try {
		    
		    	// Prompt user for array index
		    	System.out.print("Enter array index number (0 - 99): ");
		    	indexNum = input.nextInt();
		    	
		    	// Error handling if input is out of bounds
		    	if (indexNum < ZERO || indexNum > (ARRAY_SIZE - INDEX_ADJUST)) {;
		    		throw new Exception();
		    	}
		    			    	
		    	// Proceed out of try block if no exceptions are thrown		    	
		    	continueInput = false;
		    }
	    
		    // catch block
		    catch (Exception e) {
		    	
		    	// Error message
		    	System.out.println("ERROR: Input out of bounds");
		    	
		    	// Insert space for readability
			 	System.out.println();
		    	
		    	// Discard input
		    	input.nextLine();
		    }
		    
	    } while (continueInput);
	    
	    // Display index value to user
    	System.out.println("Index number value: " + array[indexNum]);
	    
	    // Insert space for readability
	 	System.out.println();
	 		
	 	// Close scanner and say goodbye
	 	System.out.println("Goodbye.");
	 	input.close();
	 	
	  } // End of main method
	
} // End of A12dot3 class