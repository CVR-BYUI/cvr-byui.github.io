// Source code for problem 9.1
// Name: Chris Van Ry
// Class: CIT-260 Section 7
// Date: March 2, 2019
// Description: This program will display width, height, area, and perimeter for 2 rectangles.

public class A9dot1 {

		// Main method
		public static void main(String[] args) {
			
			// Explain to user what the program will do
			System.out.println("This program will display width, height, area, and perimeter for 2 rectangles.");
			
			// Insert space for readability
		    System.out.println();
			
			// Create 2 objects from Rectangle class with given arguments
			Rectangle a = new Rectangle(4, 40);
		    Rectangle b = new Rectangle(3.5, 35.9);

		    // Call methods from Rectangle class to calculate area and perimeter and display results
		    System.out.println("Rectangle A");		    
		    a.getArea();
		    a.getPerimeter();
		    a.displayRectangle();

		    // Insert space for readability
		    System.out.println();
		    System.out.println();

		    // Call methods from Rectangle class to calculate area and perimeter and display results
		    System.out.println("Rectangle B");	    
		    b.getArea();
		    b.getPerimeter();
		    b.displayRectangle();
		    
		} // End of main method
		
} // End of A9dot1 class