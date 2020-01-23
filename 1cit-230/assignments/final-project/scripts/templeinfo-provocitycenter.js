let request = new XMLHttpRequest();
request.open('GET', 'https://raw.githubusercontent.com/CVR-BYUI/cvr-byui.github.io/master/assignments/final-project/json/templedata.json');
request.responseType = 'json';
request.send();

request.onload = function () {

    let templeData = request.response;
    showTempleData(templeData);

}

    function showTempleData(jsonObj) {

    let templeData = jsonObj['templeData'];

    for (let i = 0; i < templeData.length; i++) {
        let temple = templeData[i].city;

        if (temple.includes("Provo")) {

            document.getElementById('templeName').innerHTML = templeData[i].templeName;
            document.getElementById('address1').innerHTML = templeData[i].address1;
            document.getElementById('address2').innerHTML = templeData[i].address2;
            document.getElementById('address3').innerHTML = templeData[i].address3;
            document.getElementById('telephone').innerHTML = templeData[i].telephone;
            document.getElementById('email').innerHTML = templeData[i].email;
            document.getElementById('announced').innerHTML = templeData[i].announced;
            document.getElementById('groundbreaking').innerHTML = templeData[i].groundbreaking;
            document.getElementById('dedicated').innerHTML = templeData[i].dedicated;

            // services with line breaks
            let services = templeData[i].services;
            let servicesList = "";
            for (let p = 0; p < services.length; p++) {
                servicesList += services[p] + "<br>";
            }
            document.getElementById('services').innerHTML = servicesList;

            // schedule with line breaks
            let schedule = templeData[i].schedule;
            let scheduleList = "";
            for (let p = 0; p < schedule.length; p++) {
                scheduleList += schedule[p] + "<br>";
            }
            document.getElementById('schedule').innerHTML = scheduleList;

            // closures with line breaks
            let closures = templeData[i].closures;
            let closuresList = "";
            for (let p = 0; p < closures.length; p++) {
                closuresList += closures[p] + "<br>";
            }
            document.getElementById('closures').innerHTML = closuresList;

        }
    }
}