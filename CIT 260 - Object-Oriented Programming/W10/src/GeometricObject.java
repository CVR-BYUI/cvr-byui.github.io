// Source code for problem 11.1 - GeometricObject Base Class
// Name: Chris Van Ry
// Class: CIT-260 Section 7
// Date: March 16, 2019
// Description: This program will prompt the user for the lengths of the sides of a triangle, the
//              color and whether the triangle is filled. The results will then be displayed.

public class GeometricObject {
	
    // Declare variables
	private String color;
	private boolean filled;

	/** GeometricObject constructor (no-arg)
	 * Purpose: Create a default shape
	 * @param void
	 * @return default values
	 */
  	public GeometricObject() {
  		this("none", false);
  	}

  	/** GeometricObject constructor
	 * Purpose: Create shape with specified values
	 * @param color, filled
	 * @return color, filled
	 */
	public GeometricObject(String color, boolean filled) {
	    this.color = color;
	    this.filled = filled;
	}
	
	/** getColor method
	 * Purpose: getter
	 * @param void
	 * @return color
	 */
	public String getColor() {
	    return color;
	}
	
	/** isFilled method
	 * Purpose: getter
	 * @param void
	 * @return filled
	 */
	public boolean isFilled() {
	    return filled;
	}
	
	/** setColor method
	 * Purpose: setter
	 * @param color
	 * @return color
	 */
	public void setColor(String color) {
	    this.color = color;
	}
	
	/** setFilled method
	 * Purpose: setter
	 * @param filled
	 * @return filled
	 */
	public void setFilled(boolean filled) {
	    this.filled = filled;
	}
	
} // End of GeometricObject class