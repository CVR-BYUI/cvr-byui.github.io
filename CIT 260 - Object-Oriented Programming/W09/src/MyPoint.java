// Source code for problem 10.4 - MyPoint class
// Name: Chris Van Ry
// Class: CIT-260 Section 7
// Date: March 9, 2019
// Description: This program will display the distance between two given points.

public class MyPoint {
	
	// Declare constants and variables
	final static int NULL = 0;
	final static int SQUARE = 2;
	
	private double x;
	private double y;
	
	/** MyPoint method
	 * Purpose: default no-arg constructor to assign default values
	 * @param void
	 * @return void
	 */
	public MyPoint() {
		this(NULL, NULL);
	}
	
	/** MyPoint method
	 * Purpose: constructor to utilize given values
	 * @param x and y values
	 * @return x and y values
	 */
	public MyPoint(double x, double y) {
		this.x = x;
		this.y = y;
	}
	
	/** getX method
	 * Purpose: getter
	 * @param void
	 * @return x
	 */
	public double getX() {
		return x;
	}
	
	/** getY method
	 * Purpose: getter
	 * @param void
	 * @return y
	 */
	public double getY () {
		return y;
	}
	
	/** distance method
	 * Purpose: calculate distance between points
	 * @param second point (p2)
	 * @return distance
	 */
	public double distance(MyPoint p2) {
		return distance(getX(), getY());
	}
	
	/** distance method
	 * Purpose: calculate distance between points
	 * @param x and y values
	 * @return distance
	 */
	public double distance(double x, double y) {
		return Math.sqrt(Math.pow(getX() - x, SQUARE) + Math.pow(getY() - y, SQUARE));
	}
	
	/** distance method
	 * Purpose: calculate distance between points
	 * @param first point (p1), second point (p2)
	 * @return distance
	 */
	public static double distance(MyPoint p1, MyPoint p2) {
		return Math.sqrt(Math.pow((p1.x - p2.x), SQUARE) + Math.pow((p1.y - p2.y), SQUARE));
	}
} // End of MyPoint class
