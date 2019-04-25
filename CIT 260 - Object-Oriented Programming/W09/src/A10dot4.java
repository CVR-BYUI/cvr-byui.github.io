// Source code for problem 10.4
// Name: Chris Van Ry
// Class: CIT-260 Section 7
// Date: March 9, 2019
// Description: This program will display the distance between two given points.

public class A10dot4 {
	
	// Declare constants
	final static double X_COORDINATE = 10.0;
	final static double Y_COORDINATE = 30.5;
	
		// Main method
		public static void main(String[] args) {
					
		// Explain to user what the program will do
		System.out.println("This program will display the distance between two points.");
		
		// Insert space for readability
	    System.out.println();
		
		// Create 2 objects from myPoint class with no arguments and given coordinates
		MyPoint p1 = new MyPoint();
	    MyPoint p2 = new MyPoint(X_COORDINATE, Y_COORDINATE);
	    
	    // Call static method
	    double dist = MyPoint.distance(p1, p2);
	
	    // Run myPoint class and display results
	    System.out.println("Distance between two points: " + dist);
    
	} // End of main method

} // End of A10dot4 class
