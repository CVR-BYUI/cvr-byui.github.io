// Source code for problem 9.1: Rectangle class
// Name: Chris Van Ry
// Class: CIT-260 Section 7
// Date: March 2, 2019
// Description: This program will display width, height, area, and perimeter for 2 rectangles.

public class Rectangle {
	
	// Declare constants and variables
	final double DEFAULT_WIDTH = 1.0;
	final double DEFAULT_HEIGHT = 1.0;
	final int MULTIPLY_TWO = 2;
	
	private double width;
	private double height;
	private double area;
	private double perimeter;
	
	/** Rectangle method
	 * Purpose: default constructor to assign default values
	 * @param void
	 * @return void
	 */	
	public Rectangle() {
	    width = DEFAULT_WIDTH;
		height = DEFAULT_HEIGHT;
	  }
	
	/** Rectangle method
	 * Purpose: constructor to utilize values in parameters
	 * @param width and height arguments
	 * @return width and height parameters
	 */	
	public Rectangle(double widthParameter, double heightParameter) {
		width = widthParameter;
		height = heightParameter;
	  }
	
	/** getArea method
	 * Purpose: calculate area of rectangle
	 * @param void
	 * @return area
	 */	
	public double getArea() {
		area = width * height;
	    return area;
	  }

	/** getPerimeter method
	 * Purpose: calculate perimeter of rectangle
	 * @param void
	 * @return perimeter
	 */	
	public double getPerimeter() {
		perimeter = MULTIPLY_TWO * (width + height);
	    return perimeter;
	  }
	
	/** displayRectangle method
	 * Purpose: display width, height, area, and perimeter of rectangle
	 * @param void
	 * @return void
	 */	
	public void displayRectangle() {
		System.out.printf("width: %.1f \nheight: %.1f \narea: %.1f \nperimeter: %.1f", width, height, area, perimeter);
	}
	
} // End of Rectangle class