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

    for (var i = 0; i < data.length; i++) {
        var name = data[i].name;
        if (name.includes("Preston")) {

        let event = data[i].events;
        listEvent.push(event);
        }
    }

    document.getElementById('event1').innerHTML = listEvent[0];
    document.getElementById('event2').innerHTML = listEvent[1];
    document.getElementById('event3').innerHTML = listEvent[2];

}
