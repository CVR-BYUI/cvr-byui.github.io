// Source code for problem 11.1
// Name: Chris Van Ry
// Class: CIT-260 Section 7
// Date: March 16, 2019
// Description: This program will prompt the user for the lengths of the sides of a triangle, the
//				color and whether the triangle is filled. The results will then be displayed.

import java.util.Scanner;

public class A11dot1 {

	public static void main(String[] args) {
		
		// Explain to user what the program will do
		System.out.println("This program will prompt the user for the lengths of the sides of a triangle, the color and whether the triangle is filled. The results will then be displayed.");
					
		// Insert space for readability
		System.out.println();
		
		// Create a scanner object
	    Scanner input = new Scanner(System.in);

	    // Create new object from getTriangle method
	    Triangle t1 = getTriangle(input);
	    
	    // Display triangle results to user
	    System.out.println("Triangle area: " + t1.getArea());
	    System.out.println("Triangle perimeter: " + t1.getPerimeter());
	    System.out.println("Triangle color: " + t1.getColor());
	    System.out.println("Is the triangle filled? " + t1.isFilled());
	    
	    // Insert space for readability
	 	System.out.println();
	 		
	 	// Close scanner and say goodbye
	 	System.out.println("Goodbye.");
	 	input.close();
	 	
	  } // End of main method
	
	/** getTriangle method
	 * Purpose: Create triangle using Geometric object (base) and Triangle (override) classes
	 * @param input
	 * @return t1
	 */
	public static Triangle getTriangle(Scanner input) {
		
		// Prompt user for triangle side lengths and create object from Triangle class
	    System.out.print("Enter the lengths of triangle sides: ");
	    Triangle t1 = new Triangle(input.nextDouble(), input.nextDouble(), input.nextDouble());
	    
	    // Prompt user for color and call setColor method
	    System.out.print("Enter a color: ");
	    t1.setColor(input.next());
	    
	    // Prompt user on whether triangle is filled
	    System.out.print("Is the triangle filled? (y/n): ");
	    String filled = input.next();
	      
	    // Call setFilled method and set boolean value for filled prompt
	    if (filled.equals("y")) {
	    	t1.setFilled(true);
	    }
	    else if (filled.equals("n")) {
	        t1.setFilled(false);
	    }
	    
	    // return the triangle
	    return t1;
	    
	  }	// End of getTriangle method
	
} // End of A11dot1 class