
document.getElementById('player-price-btn').addEventListener('click', function () {
    const playerField = document.getElementById('player-field');
    const playerPriceString = playerField.value;
    const playerPrice = parseFloat(playerPriceString);

    const playerPriceText = document.getElementById('player-price-text');

    const playerTotalPrice = 5 * playerPrice;
    playerPriceText.innerText = playerTotalPrice;
})

document.getElementById('total-price-btn').addEventListener('click', function () {
    const managerField = document.getElementById('manager-value');
    const managerTotalPriceString = managerField.value;
    const managerTotalPrice = parseFloat(managerTotalPriceString);

    const coachField = document.getElementById('coach-value');
    const coachTotalPriceString = coachField.value;
    const coachTotalPrice = parseFloat(coachTotalPriceString);

    const totalPriceField = document.getElementById('total-price-field');

    const managerCoachTotal = managerTotalPrice + coachTotalPrice;

    totalPriceField.innerText = managerCoachTotal;
})

document.getElementById('messi-btn').addEventListener('click', function () {
    const MyButton = document.getElementById('li-one').innerText = "Lionel Messi"
})
document.getElementById('neymar-btn').addEventListener('click', function () {
    const MyButton = document.getElementById('li-two').innerText = "Neymar Jr"
})
document.getElementById('kylian-btn').addEventListener('click', function () {
    const MyButton = document.getElementById('li-three').innerText = "Kylian Mbappé"
})
document.getElementById('vitor-btn').addEventListener('click', function () {
    const MyButton = document.getElementById('li-four').innerText = "Vítor Machado"
})
document.getElementById('ramos-btn').addEventListener('click', function () {
    const MyButton = document.getElementById('li-five').innerText = "Sergio Ramos"
})
document.getElementById('renato-btn').addEventListener('click', function () {
    const MyButton = document.getElementById('li-five').innerText = "Renato Sanches"
})