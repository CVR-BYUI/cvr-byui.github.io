// Source code for problem 3.11
// Name: Chris Van Ry
// Class: CIT-260 Section 7
// Date: January 26, 2019

import java.util.Scanner;

public class A3dot11 {
	public static void main(String[] args) {
		// Declare constants to avoid magic numbers
		final int JAN = 1;
		final int FEB = 2;
		final int MAR = 3;
		final int APR = 4;
		final int MAY = 5;
		final int JUN = 6;
		final int JUL = 7;
		final int AUG = 8;
		final int SEP = 9;
		final int OCT = 10;
		final int NOV = 11;
		final int DEC = 12;
		final int LEAP = 4;
		final int A = 28;
		final int B = 29;
		final int C = 30;
		final int D = 31;
		final int ZERO = 0;
		
		// Create a Scanner object
		Scanner input = new Scanner(System.in);
		
		//Prompt user to enter month and year
		System.out.print("Enter a month and year: ");
		int month = input.nextInt();
		int year = input.nextInt();
		
		// declare variable and initiate with value of 0
		int numDays = ZERO;
		
		// Determine months that have 31 days
		if (month == JAN || month == MAR || month == MAY || month == JUL || month == AUG || month == OCT || month == DEC)
			numDays = D;
		else if (month == FEB)
		{
			// February of leap years has 29 days
			if (year % LEAP == ZERO)
				numDays = B;
			else
				numDays = A;
		}
		// Remaining months have 30 days
		else
			numDays = C;
		
		// Display month to user
		switch (month)
		{
			case JAN: System.out.print("January ");
			break;
			
			case FEB: System.out.print("February ");
			break;
			
			case MAR: System.out.print("March ");
			break;
			
			case APR: System.out.print("April ");
			break;
			
			case MAY: System.out.print("May ");
			break;
			
			case JUN: System.out.print("June ");
			break;
			
			case JUL: System.out.print("July ");
			break;
			
			case AUG: System.out.print("August ");
			break;
			
			case SEP: System.out.print("September ");
			break;
			
			case OCT: System.out.print("October ");
			break;
			
			case NOV: System.out.print("November ");
			break;
			
			case DEC: System.out.print("December ");
			break;
		}
		
		// Display year and number of days to user
		System.out.print(year + " has " + numDays + " days");	
	}
}