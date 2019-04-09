let weatherRequest = new XMLHttpRequest();

weatherRequest.open('GET', 'https://api.openweathermap.org/data/2.5/forecast?id=5604473&appid=472837bd2aa3046b5d16b832ef0dd806&units=imperial', true);

weatherRequest.send();

weatherRequest.onload = function () {

    let weatherData = JSON.parse(weatherRequest.responseText);

    console.log(weatherData);

    document.getElementById('current-temp').innerHTML = weatherData.list[0].main.temp;
    
}