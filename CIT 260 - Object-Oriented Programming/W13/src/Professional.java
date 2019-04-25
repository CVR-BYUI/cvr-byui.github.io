import java.io.PrintWriter;

// Source code for FinalProject - Professional (subclass of AddressBook)
// Name: Brian Kenoyer and Chris Van Ry
// Class: CIT-260 Section 7
// Date: April 6, 2019
// Description: This program will create an address book array and then display the entries in the address book. 

public class Professional extends AddressBook {

	// Declare constants and variables
	final static int ZERO = 0;
	
	private String company;
	private long workPhone;
	private String workEmail;

	/** Professional constructor (no-arg)
	 * Purpose: Create a default entry
	 * @param void
	 * @return default values
	 */
  	public Professional() {
  		this("none", "none", ZERO, "none", "none", ZERO, "none");
  	}

  	/** Professional constructor
	 * Purpose: Create entry with specified values
	 * @param company, workPhone, workEmail
	 * @return company, workPhone, workEmail
	 */
	public Professional(String name, String address, long phone, String email, String company, long workPhone, String workEmail) {
		this.name = name;
	    this.address = address;
	    this.phone = phone;
	    this.email = email;
	    this.company = company;
	    this.workPhone = workPhone;
	    this.workEmail = workEmail;
	}
	
	/** getCompany method
	 * Purpose: getter
	 * @param void
	 * @return company
	 */
	public String getCompany() {
	    return company;
	}
	
	/** getWorkPhone method
	 * Purpose: getter
	 * @param void
	 * @return workPhone
	 */
	public long getWorkPhone() {
	    return workPhone;
	}
	
	/** getWorkEmail method
	 * Purpose: getter
	 * @param void
	 * @return workEmail
	 */
	public String getWorkEmail() {
	    return workEmail;
	}
	
	/** setCompany method
	 * Purpose: setter
	 * @param company
	 * @return company
	 */
	public void setCompany(String company) {
	    this.company = company;
	}
	
	/** setWorkPhone method
	 * Purpose: setter
	 * @param workPhone
	 * @return workPhone
	 */
	public void setWorkPhone(long workPhone) {
	    this.workPhone = workPhone;
	}
	
	/** setWorkEmail method
	 * Purpose: setter
	 * @param workEmail
	 * @return workEmail
	 */
	public void setWorkEmail(String workEmail) {
	    this.workEmail = workEmail;
	}
	
	/** write method
	 * Purpose: write to file
	 * @param pw
	 * @return void
	 */
	@Override
	public void write(PrintWriter pw) {
		super.write(pw);
		pw.println("Company: " + company);
		pw.println("Work Phone: " + workPhone);
		pw.println("Work Email: " + workEmail);
		pw.println("");
	}
	
	/** Professional toString method
	 * Purpose: return a String representation of a professional entry
	 * @param none
	 * @return String
	 */
	@Override
	public String toString() {
		String professionalString = String.format("%nCompany: " + company + "%nWork Phone: " + workPhone + "%nWork Email: " + workEmail + "%n");
		return super.toString() + professionalString;
	}
	
} // End of Professional class