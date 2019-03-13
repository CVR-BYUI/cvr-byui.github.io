function windChill() {

	// Declare variables and pull data from HTML
    let t = parseFloat(document.getElementById("averageAirTemp").innerHTML);
    let s = parseFloat(document.getElementById("windSpeed").innerHTML);

    // Formula to calculate wind chill
    let windChillResult = 35.74 + (0.6215 * t) - (35.75 * (Math.pow(s, 0.16))) + (0.4275 * t * (Math.pow(s, 0.16)));

    // Format number to one place after decimal
    let result = windChillResult.toFixed(1);

    // Display result in HTML
    document.getElementById("windChillResult").innerHTML = result;

}

window.onload = windChill();