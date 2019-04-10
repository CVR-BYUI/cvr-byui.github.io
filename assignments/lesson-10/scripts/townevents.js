let request = new XMLHttpRequest();
request.open('GET', 'https://byui-cit230.github.io/weather/data/towndata.json');
request.responseType = 'json';
request.send();

request.onload = function () {

    let town = request.response;
    showTownEvent(town);

}

function showTownEvent(jsonObj) {

    let data = jsonObj['towns'];
    let listEvent = [];

    for (let i = 0; i < data.length; i++) {
        let name = data[i].name;
        if (name.includes("Preston")) {

            for (let p = 0; p < events.length; p++) {
            let event = data[p].events;
            listEvent.push(event);
            }
        }
    }

    document.getElementById('event1').innerHTML = listEvent[0];
    document.getElementById('event2').innerHTML = listEvent[1];
    document.getElementById('event3').innerHTML = listEvent[2];

}
