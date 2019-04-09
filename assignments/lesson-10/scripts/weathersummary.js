let weatherRequest = new XMLHttpRequest
weatherRequest.open('GET', 'https://api.openweathermap.org/data/2.5/forecast?id=5604473&appid=472837bd2aa3046b5d16b832ef0dd806&units=imperial', true);
weatherRequest.send();
weatherRequest.onload = function () {

    let weatherData = JSON.parse(weatherRequest.responseText);
    console.log(weatherData);

    // description, temp, humidity, windspeed
    document.getElementById('weatherDesc').innerHTML = weatherData.weather[0].description;
    document.getElementById('highTemp').innerHTML = weatherData.main.temp_max;
    document.getElementById('humidity').innerHTML = weatherData.main.humidity;
    document.getElementById('windSpeed').innerHTML = weatherData.wind.speed;

    // wind chill
    let windChill = 35.74 + 0.6215 * weatherData.main.temp - 35.75 * Math.pow(weatherData.wind.speed, 0.16) + 0.4275 * weatherData.main.temp * Math.pow(weatherData.wind.speed, 0.16);
    windChill = Math.round(windChill);
    document.getElementById('windChill').innerHTML = windChill;
}