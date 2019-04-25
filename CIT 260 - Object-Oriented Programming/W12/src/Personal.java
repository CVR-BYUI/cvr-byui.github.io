// Source code for FinalProject - Personal (subclass of AddressBook)
// Name: Brian Kenoyer and Chris Van Ry
// Class: CIT-260 Section 7
// Date: April 6, 2019
// Description: This program will create an address book array and then display the entries in the address book. 

import java.io.PrintWriter;

public class Personal extends AddressBook {

	// Declare variables
	private String relationship;
	private String birthday;

	/** Personal constructor (no-arg)
	 * Purpose: Create a default entry
	 * @param void
	 * @return default values
	 */
  	public Personal() {
  		super();
  		relationship = "none";
  		birthday = "none";
  	}

  	/** Personal constructor
	 * Purpose: Create entry with specified values
	 * @param relationship, birthday
	 * @return relationship, birthday
	 */
	public Personal(String name, String address, long phone, String email, String relationship, String birthday) {
		super(name, address, phone, email);
		this.relationship = relationship;
	    this.birthday = birthday;
	}
	
	/** getRelationship method
	 * Purpose: getter
	 * @param void
	 * @return relationship
	 */
	public String getRelationship() {
	    return relationship;
	}
	
	/** getBirthday method
	 * Purpose: getter
	 * @param void
	 * @return birthday
	 */
	public String getBirthday() {
	    return birthday;
	}
	
	/** setRelationship method
	 * Purpose: setter
	 * @param relationship
	 * @return relationship
	 */
	public void setRelationship(String relationship) {
	    this.relationship = relationship;
	}
	
	/** setBirthday method
	 * Purpose: setter
	 * @param birthday
	 * @return birthday
	 */
	public void setBirthday(String birthday) {
	    this.birthday = birthday;
	}
	
	/** write method
	 * Purpose: write to file
	 * @param pw
	 * @return void
	 */
	@Override
	public void write(PrintWriter pw) {
		super.write(pw);
		pw.println("Relationship: " + relationship);
		pw.println("Birthday: " + birthday);
		pw.println("");
	}
	
	/** Personal toString method
	 * Purpose: return a String representation of a personal entry
	 * @param none
	 * @return String
	 */
	@Override
	public String toString() {
		String personalString = String.format("%nRelationship: " + relationship + "%nBirthday: " + birthday + "%n");
		return super.toString() + personalString;
	}
	
} // End of Personal class
