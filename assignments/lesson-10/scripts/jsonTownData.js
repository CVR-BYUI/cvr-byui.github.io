var section = document.querySelector('section');

var resquestURL = 'https://byui-cit230.github.io/weather/data/towndata.json';
var request = new XMLHttpRequest();
request.open('GET', resquestURL);
request.responseType = 'json';
request.send();

request.onload = function () {

    var town = request.response;
    showTownData(town);

}

function showTownData(jsonObj) {
    var town = jsonObj['towns'];
    
    for (let i = 0; i < town.length; i++) {
        
        if (town[i].name == "Preston" || town[i].name == "Soda Springs" || town[i].name == "Fish Haven" ) {

        var myDiv = document.createElement('div');
        var myH2 = document.createElement('h2');
        var myPara1 = document.createElement('p');
        var myPara2 = document.createElement('p');
        var myPara3 = document.createElement('p');
        var myPara4 = document.createElement('p');
   
            myH2.textContent = town[i].name;
            myPara1.textContent = 'Motto: ' + town[i].motto;
            myPara2.textContent = 'Year Founded: ' + town[i].yearFounded;
            myPara3.textContent = 'Current Population:' + town[i].currentPopulation;
            myPara4.textContent = 'Average Rainfall:' + town[i].averageRainfall;
        
        myDiv.appendChild(myH2);
        myDiv.appendChild(myPara1);
        myDiv.appendChild(myPara2);
        myDiv.appendChild(myPara3);
        myDiv.appendChild(myPara4);

        section.appendChild(myDiv);

        }
    }
}