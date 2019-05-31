let request = new XMLHttpRequest();
request.open('GET', 'https://byui-cit230.github.io/weather/data/towndata.json');
request.responseType = 'json';
request.send();

request.onload = function () {

    let town = request.response;
    showTownEvent(town);

}

function showTownEvent(jsonObj) {

    let towns = jsonObj['towns'];
    let listEvent = [];

    for (let i = 0; i < towns.length; i++) {
        let name = towns[i].name;

        if (name.includes("Fish Haven")) {
            let events = towns[i].events;

            for (let p = 0; p < events.length; p++) {          
                let townEvent = towns[i].events[p];
                listEvent.push(townEvent);
            }
        }
    }

    document.getElementById('event1').innerHTML = listEvent[0];
    document.getElementById('event2').innerHTML = listEvent[1];
    document.getElementById('event3').innerHTML = listEvent[2];
    document.getElementById('event4').innerHTML = listEvent[3];

}
