let weatherForecast = new XMLHttpRequest
weatherForecast.open('GET', 'https://api.openweathermap.org/data/2.5/forecast?id=5607916&appid=472837bd2aa3046b5d16b832ef0dd806&units=imperial', true);
weatherForecast.send();
weatherForecast.onload = function () {

    let weatherInfo = JSON.parse(weatherForecast.responseText);
    console.log(weatherInfo);

    let listWeekday = [];
    let listTemp = [];
    let listIconCode = [];

    let weekday = ["Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"];
    
    
    for (i = 0; i < weatherInfo.list.length; ++i) {
        time = weatherInfo.list[i].dt_txt;
        if (time.includes("18:00:00")) {

            // Weekday
            let date = new Date(weatherInfo.list[i].dt * 1000);
            let findDate = weekday[date.getDay()];
            listWeekday.push(findDate);

            // Current Temp
            let temp = weatherInfo.list[i].main.temp;
            temp = Math.round(temp);
            listTemp.push(temp);

            // Weather icon
            let iconcode = weatherInfo.list[i].weather["0"].icon;
            let icon_path = "https://openweathermap.org/img/w/" + iconcode + ".png";
            listIconCode.push(icon_path);
        }
    }

    //Display forecast day of the week
    document.getElementById('day1').innerHTML = listWeekday[0];
    document.getElementById('day2').innerHTML = listWeekday[1];
    document.getElementById('day3').innerHTML = listWeekday[2];
    document.getElementById('day4').innerHTML = listWeekday[3];
    document.getElementById('day5').innerHTML = listWeekday[4];

    //Display weather icon
    document.getElementById('weather_icon1').src = listIconCode[0];
    document.getElementById('weather_icon2').src = listIconCode[1];
    document.getElementById('weather_icon3').src = listIconCode[2];
    document.getElementById('weather_icon4').src = listIconCode[3];
    document.getElementById('weather_icon5').src = listIconCode[4];

    //Display forecasted temperature
    document.getElementById("temp1").innerHTML = listTemp[0];
    document.getElementById("temp2").innerHTML = listTemp[1];
    document.getElementById("temp3").innerHTML = listTemp[2];
    document.getElementById("temp4").innerHTML = listTemp[3];
    document.getElementById("temp5").innerHTML = listTemp[4];

}