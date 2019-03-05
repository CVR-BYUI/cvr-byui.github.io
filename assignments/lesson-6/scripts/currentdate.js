var currentDate = new Date();

// Array for days of the week
var weekday = newArray(7);
day[0] = "Sunday";
day[1] = "Monday";
day[2] = "Tuesday";
day[3] = "Wednesday";
day[4] = "Thursday";
day[5] = "Friday";
day[6] = "Saturday";

// Variables for current day of the week
currentDay = currentDate.getDay();
displayDay = weekday[currentDay];

// Variable for current date (number)
displayDate = currentDate.getDate();

// Array for months of the year
var month = newArray(12);
month[0] = "January";
month[1] = "February";
month[2] = "March";
month[3] = "April";
month[4] = "May";
month[5] = "June";
month[6] = "July";
month[7] = "August";
month[8] = "September";
month[9] = "October";
month[10] = "November";
month[11] = "December";

// Variables for current month
currentMonth = currentDate.getMonth();
displayMonth = month[currentMonth];

// Variable for current year
displayYear = currentDate.getFullYear();

// Variable for formatted date
todayDate = displayDay + ", " + displayDate + " " + displayMonth + " " + displayYear;

// Display on screen
document.getElementById("currentDate").innerHTML = todayDate;