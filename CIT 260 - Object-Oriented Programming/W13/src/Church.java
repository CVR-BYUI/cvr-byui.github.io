import java.io.PrintWriter;

// Source code for FinalProject - Church (subclass of AddressBook)
// Name: Brian Kenoyer and Chris Van Ry
// Class: CIT-260 Section 7
// Date: April 6, 2019
// Description: This program will create an address book array and then display the entries in the address book. 

public class Church extends AddressBook {

	// Declare variables
	private String ward;
	private String stake;
	private String calling;

	/** Church constructor (no-arg)
	 * Purpose: Create a default entry
	 * @param void
	 * @return default values
	 */
  	public Church() {
  		this("none", "none", ZERO, "none", "none", "none", "none");
  	}

  	/** Church constructor
	 * Purpose: Create entry with specified values
	 * @param ward, stake, calling
	 * @return ward, stake, calling
	 */
	public Church(String name, String address, long phone, String email, String ward, String stake, String calling) {
		this.name = name;
	    this.address = address;
	    this.phone = phone;
	    this.email = email;
	    this.ward = ward;
	    this.stake = stake;
	    this.calling = calling;
	}
	
	/** getWard method
	 * Purpose: getter
	 * @param void
	 * @return ward
	 */
	public String getWard() {
	    return ward;
	}
	
	/** getStake method
	 * Purpose: getter
	 * @param void
	 * @return stake
	 */
	public String getStake() {
	    return stake;
	}
	
	/** getCalling method
	 * Purpose: getter
	 * @param void
	 * @return calling
	 */
	public String getCalling() {
	    return calling;
	}
	
	/** setWard method
	 * Purpose: setter
	 * @param ward
	 * @return ward
	 */
	public void setWard(String ward) {
	    this.ward = ward;
	}
	
	/** setStake method
	 * Purpose: setter
	 * @param stake
	 * @return stake
	 */
	public void setStake(String stake) {
	    this.stake = stake;
	}
	
	/** setCalling method
	 * Purpose: setter
	 * @param calling
	 * @return calling
	 */
	public void setCalling(String calling) {
	    this.calling = calling;
	}
	
	/** write method
	 * Purpose: write to file
	 * @param pw
	 * @return void
	 */
	@Override
	public void write(PrintWriter pw) {
		super.write(pw);
		pw.println("Ward: " + ward);
		pw.println("Stake: " + stake);
		pw.println("Calling: " + calling);
		pw.println("");
	}
	
	/** Church toString method
	 * Purpose: return a String representation of a church entry
	 * @param none
	 * @return String
	 */
	@Override
	public String toString() {
		String churchString = String.format("%nWard: " + ward + "%nStake: " + stake + "%nCalling: " + calling + "%n");
		return super.toString() + churchString;
	}
	
} // End of Church class