let weatherForecast = new XMLHttpRequest
weatherForecast.open('GET', 'https://api.openweathermap.org/data/2.5/forecast?id=5604473&appid=472837bd2aa3046b5d16b832ef0dd806&units=imperial', true);
weatherForecast.send();
weatherForecast.onload = function () {

    let forecast = JSON.parse(weatherForecast.responseText);

    console.log(forecast);

    let dataLoop = forecast['list'];
    
    for (let i = 0; i < dataLoop.length; i++) {
        
            if (dataLoop[i].dt_txt.includes('18:00:00')) {

                var divSection = document.createElement('div');
                var forecastDay = document.createElement('div');
                var imageIcon = document.createElement('img');
                var imageLink = 'http://openweathermap.org/img/w/' + dataLoop[i].weather[0].icon + '.png';
                var tempForecast = document.createElement('div');

                divSection.setAttribute('class', 'fivedays');

                var n = new Date(dataLoop[i].dt_txt);
                var day = n.getDay();

                switch (day) {
                    case 0:
                        day = "Sun";
                        break;
                    case 1:
                        day = "Mon";
                        break;
                    case 2:
                        day = "Tue";
                        break;
                    case 3:
                        day = "Wed";
                        break;
                    case 4:
                        day = "Thur";
                        break;
                    case 5:
                        day = "Fri";
                        break;
                    case  6:
                        day = "Sat"; 
                }
                      
                forecastDay.textContent = day;
                imageIcon.setAttribute('src', imageLink);
                tempForecast.textContent = dataLoop[0].main.temp + "&deg; F";

                divSection.appendChild(forecastDay);
                divSection.appendChild(imageIcon);
                divSection.appendChild(tempForecast);

                section.appendChild(divSection);
                
            }
     
    }

}