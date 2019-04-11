let weatherRequest = new XMLHttpRequest
weatherRequest.open('GET', 'https://api.openweathermap.org/data/2.5/forecast?id=5585010&appid=472837bd2aa3046b5d16b832ef0dd806&units=imperial', true);
weatherRequest.send();
weatherRequest.onload = function () {

    let weatherData = JSON.parse(weatherRequest.responseText);
    console.log(weatherData);

    // description, temp, humidity, windspeed
    document.getElementById('weatherDesc').innerHTML = weatherData.list[0].weather[0].description;
    document.getElementById('highTemp').innerHTML = weatherData.list[0].main.temp_max;
    document.getElementById('humidity').innerHTML = weatherData.list[0].main.humidity;
    document.getElementById('windSpeed').innerHTML = weatherData.list[0].wind.speed;

    // wind chill
    let t = document.getElementById('highTemp').innerHTML = weatherData.list[0].main.temp_max;
    let x = document.getElementById('windSpeed').innerHTML = weatherData.list[0].wind.speed;
    let s = Math.pow(x, 0.16);

    let windChill = 35.74 + (0.6215 * t) - (35.75 * s) + (0.4275 * t * s);
    windChill = Math.round(windChill);
    document.getElementById('windChill').innerHTML = windChill;
}