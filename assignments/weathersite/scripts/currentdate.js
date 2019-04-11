let currentDate = new Date();

// Array for days of the week
var weekday = new Array(7);
weekday[0] = "Sunday";
weekday[1] = "Monday";
weekday[2] = "Tuesday";
weekday[3] = "Wednesday";
weekday[4] = "Thursday";
weekday[5] = "Friday";
weekday[6] = "Saturday";

// Variables for current day of the week
let currentDay = currentDate.getDay();
let displayDay = weekday[currentDay];

// Variable for current date (number)
let displayDate = currentDate.getDate();

// Array for months of the year
let month = new Array(12);
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
let currentMonth = currentDate.getMonth();
let displayMonth = month[currentMonth];

// Variable for current year
let displayYear = currentDate.getFullYear();

// Variable for formatted date
let todayDate = displayDay + ", " + displayDate + " " + displayMonth + " " + displayYear;

// Display on screen
document.getElementById("currentDate").innerHTML = todayDate;