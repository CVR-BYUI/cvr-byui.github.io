// Source code for problem 3.5
// Name: Chris Van Ry
// Class: CIT-260 Section 7
// Date: January 26, 2019

import java.util.Scanner;

public class A3dot5 {
	public static void main(String[] args) {
		// Declare constants to avoid magic numbers
		final int SUNDAY = 0;
		final int MONDAY = 1;
		final int TUESDAY = 2;
		final int WEDNESDAY = 3;
		final int THURSDAY = 4;
		final int FRIDAY = 5;
		final int SATURDAY = 6;
		final int WEEK = 7;
		
		// Create a Scanner object
		Scanner input = new Scanner(System.in);
		
		// Prompt user to enter today's day
		System.out.print("Enter today's day: ");
		int todayDay = input.nextInt();
		
		//Prompt user to enter elapsed days
		System.out.print("Enter the number of days elapsed since today: ");
		int elapsedDays = input.nextInt();
		
		// Determine what today is and display first part of message
		switch (todayDay) 
		{
			case MONDAY: System.out.print("Today is Monday "); 
			break;
				
			case TUESDAY: System.out.print("Today is Tuesday "); 
			break;
				
			case WEDNESDAY: System.out.print("Today is Wednesday "); 
			break;
				
			case THURSDAY: System.out.print("Today is Thursday "); 
			break;
				
			case FRIDAY: System.out.print("Today is Friday "); 
			break;
				
			case SATURDAY: System.out.print("Today is Saturday "); 
			break;
				
			case SUNDAY: System.out.print("Today is Sunday "); 
			break;
		}
		
		// Determine what future day is and display second part of message
		switch ((elapsedDays + todayDay) % WEEK) 
		{
			case MONDAY: System.out.print("and the future day is Monday"); 
			break;
				
			case TUESDAY: System.out.print("and the future day is Tuesday "); 
			break;
				
			case WEDNESDAY: System.out.print("and the future day is Wednesday "); 
			break;
				
			case THURSDAY: System.out.print("and the future day is Thursday "); 
			break;
				
			case FRIDAY: System.out.print("and the future day is Friday "); 
			break;
				
			case SATURDAY: System.out.print("and the future day is Saturday "); 
			break;
				
			case SUNDAY: System.out.print("and the future day is Sunday "); 
			break;
		}
	}
}