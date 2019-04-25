// Source code for FinalProject - AddressBook (base/parent class)
// Name: Brian Kenoyer and Chris Van Ry
// Class: CIT-260 Section 7
// Date: April 6, 2019
// Description: This program will create an address book array and then display the entries in the address book. 

import java.io.PrintWriter;

public class AddressBook {

	// Declare constants and variables
	final static int ZERO = 0;
	
	protected String name;
	protected String address;
	protected long phone;
	protected String email;

	/** AddressBook constructor (no-arg)
	 * Purpose: Create a default entry
	 * @param void
	 * @return default values
	 */
  	public AddressBook() {
  		this("none", "none", ZERO, "none");
  	}

  	/** AddressBook constructor
	 * Purpose: Create entry with specified values
	 * @param name, address, phone, email
	 * @return name, address, phone, email
	 */
	public AddressBook(String name, String address, long phone, String email) {
	    this.name = name;
	    this.address = address;
	    this.phone = phone;
	    this.email = email;
	}
	
	/** getName method
	 * Purpose: getter
	 * @param void
	 * @return name
	 */
	public String getName() {
	    return name;
	}
	
	/** getAddress method
	 * Purpose: getter
	 * @param void
	 * @return address
	 */
	public String getAddress() {
	    return address;
	}
	
	/** getPhone method
	 * Purpose: getter
	 * @param void
	 * @return phone
	 */
	public long getPhone() {
	    return phone;
	}
	
	/** getEmail method
	 * Purpose: getter
	 * @param void
	 * @return email
	 */
	public String getEmail() {
	    return email;
	}
	
	/** setName method
	 * Purpose: setter
	 * @param name
	 * @return name
	 */
	public void setName(String name) {
	    this.name = name;
	}
	
	/** setAddress method
	 * Purpose: setter
	 * @param address
	 * @return address
	 */
	public void setAddress(String address) {
	    this.address = address;
	}
	
	/** setPhone method
	 * Purpose: setter
	 * @param phone
	 * @return phone
	 */
	public void setPhone(long phone) {
	    this.phone = phone;
	}
	
	/** setEmail method
	 * Purpose: setter
	 * @param email
	 * @return email
	 */
	public void setEmail(String email) {
	    this.email = email;
	}
	
	/** write method
	 * Purpose: write to file
	 * @param pw
	 * @return void
	 */
	public void write(PrintWriter pw) {
		pw.println("Name: " + name);
		pw.println("Address: " + address);
		pw.println("Phone: " + phone);
		pw.println("Email: " + email);
	}
	
	/** AddressBook toString method
	 * Purpose: return a String representation of an address book entry
	 * @param none
	 * @return String
	 */
	public String toString() {
		return String.format("Name: " + name + "%nAddress: " + address + "%nPhone: " + phone + "%nEmail: " + email);
	}
	
} // End of AddressBook class
