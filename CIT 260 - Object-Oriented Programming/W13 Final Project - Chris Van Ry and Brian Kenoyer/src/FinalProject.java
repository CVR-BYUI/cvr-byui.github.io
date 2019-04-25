// Source code for Final Project (driver)
// Name: Brian Kenoyer and Chris Van Ry
// Class: CIT-260 Section 7
// Date: April 6, 2019
// Description: This program will create an address book array and then display the entries in the address book. 

import java.io.File;
import java.io.PrintWriter;
import java.util.ArrayList;
import java.util.Scanner;
import java.io.FileNotFoundException;
import java.util.NoSuchElementException;

public class FinalProject {
	
	// Main method
	public static void main(String[] args) {
		
		// Explain to user what the program will do
		System.out.println("This program will display an address book.");
					
		// Insert space for readability
		System.out.println();

	    // Create address book array list
	    ArrayList<AddressBook> entry = new ArrayList<>();
	    
	    // Add address book entries to array
	    entry.add(new Personal("Brady Bigler", "1059 N Colorado St, Salt Lake City, UT 84116", 8018309358L, "bradyrbigler85@gmail.com", "friend", "OCT 10"));
	    entry.add(new Professional("Peter Williams", "500 State St, Mapleton, UT 84664", 5413011849L, "peterwilliams@gmail.com", "Vivint", 8013779111L, "peter.williams@vivint.com"));
	    entry.add(new Church("Jeff Dew", "1425 E 800 S, Provo, UT 84606", 3852084278L, "jeffdewcs2@gmail.com", "Bonneville 10th", "Provo Utah Bonneville", "Elders Quorum President"));
	    
	    // Write address book array to file with try/catch error handling 
	    try (PrintWriter pw = new PrintWriter(new File("AddressBook.txt"))) {
		    for(AddressBook e: entry) {
		    	e.write(pw);
		    }
	    }
	    
		catch(Exception e) {		
			System.out.println("Could not open the file, program is ending.");	
		}
		
	    // Display address book from file with try/catch error handling.
	    try (Scanner input = new Scanner(new File("AddressBook.txt"))) {
	    	while(input.hasNextLine()) {
	    		String line = input.nextLine();
	    		System.out.println(line);	    			
	    	}
	    }
	    
	    catch(FileNotFoundException e) {		
			System.out.println("Could not read from file, program is ending.");	
	    }
	    
	    catch(NoSuchElementException e) {		
			System.out.println("End of Address Book file.");	
		}
	    
	    // Display message at end of address book
	    System.out.println("End of Address Book.");
	 	
	  } // End of main method
	
} // End of FinalProject class