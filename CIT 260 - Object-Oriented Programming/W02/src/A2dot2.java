// Source code for problem 2.2
// Name: Chris Van Ry
// Class: CIT-260 Section 7
// Date: January 19, 2019

import java.util.Scanner;

public class A2dot2 {
	public static void main(String[] args) {
		// Declare a constant
		final double PI = 3.14159;
		
		// Create a Scanner object
		Scanner input = new Scanner(System.in);
		
		// Prompt user to enter radius and length of a cylinder
		System.out.print("Enter the radius and length of a cylinder: ");
		float radius = input.nextFloat();
		float length = input.nextFloat();
		
		// Compute the area
		double area = radius * radius * PI;
		
		// Compute the volume
		double volume = area * length;
		
		// Display results
		System.out.println("The area is " + (float)area);
		System.out.println("The volume is " + (float)volume);
	}

}