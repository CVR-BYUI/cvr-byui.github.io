// Source code for problem 9.3
// Name: Chris Van Ry
// Class: CIT-260 Section 7
// Date: March 2, 2019
// Description: This program will utilize the Date class to display dates according to the incremented elapsed times

import java.util.Date;

public class A9dot3 {
	
	final static int BEGIN = 10000;
	final static long END = 100000000000L;
	final static int MULTIPLIER = 10;

	// Main method
	public static void main(String[] args) {
		
		// Explain to user what the program will do
		System.out.println("This program will display dates according to the incremented elapsed times.");
					
		// Insert space for readability
		System.out.println();
		
		// Create new object from Date class
	    Date date = new Date();

	    // Loop to increment elapsed time and display the date
	    for (long i = BEGIN; i < END; i *= MULTIPLIER) {
	      date.setTime(i);
	      System.out.println(date.toString());
	    }
	    
	} // End of main method
		
} // End of A9dot3 class