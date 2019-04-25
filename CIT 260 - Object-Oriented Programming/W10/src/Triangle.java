// Source code for problem 11.1 - Triangle Derived Class
// Name: Chris Van Ry
// Class: CIT-260 Section 7
// Date: March 16, 2019
// Description: This program will prompt the user for the lengths of the sides of a triangle, the
//              color and whether the triangle is filled. The results will then be displayed.

public class Triangle extends GeometricObject {
  
	// Declare constant and variables
	final static int TWO = 2;
	
	private double side1;
	private double side2;
	private double side3;
	
	/** Triangle constructor (no-arg)
	 * Purpose: Create a default triangle
	 * @param void
	 * @return default values
	 */
	public Triangle() {
		this(1.0, 1.0, 1.0);
	}
	
	/** Triangle constructor
	 * Purpose: Create a default triangle
	 * @param side1, side2, side3
	 * @return side1, side2, side3
	 */
	public Triangle(double side1, double side2, double side3) {
		this.side1 = side1;
		this.side2 = side2;
		this.side3 = side3;
	}
	
	/** getSide1 method
	 * Purpose: getter
	 * @param void
	 * @return side1
	 */
	public double getSide1() {
		return side1;
	}
	
	/** getSide2 method
	 * Purpose: getter
	 * @param void
	 * @return side2
	 */
	public double getSide2() {
		return side2;
	}
	
	/** getSide3 method
	 * Purpose: getter
	 * @param void
	 * @return side3
	 */
	public double getSide3() {
		return side3;
	}

	/** getArea method
	 * Purpose: Calculate triangle area
	 * @param void
	 * @return area calculation
	 */
	public double getArea() {
		double p = (side1 + side2 + side3) / TWO;
		return Math.sqrt(p * (p - side1) * (p - side2) * (p - side3));
	}
	
	/** getPerimeter method
	 * Purpose: Calculate triangle perimeter
	 * @param void
	 * @return perimeter calculation
	 */
	public double getPerimeter() {
	    return (side1 + side2 + side3) / TWO;
	}
	
} // End of Triangle class