// const arry = [1,2,3,4,5]
// console.table(arry)

// arry.forEach(function(val, i) {
//     console.log('コールバック', val, i);
// })

// reduce
// arry.reduce(function(accu, curr) {
//     console.log(accu, curr);
//     return accu + curr;
// })

// 多次元配列

// var arry1 =  new Array('りんご','いちご','バナナ');
// var arry2 = ['犬', '猫', '鳥'];

// console.log(arry1);
// console.log(arry2);

// var mixArry = [
//     ['犬', '猫', '鳥'],
//     ['りんご','いちご','バナナ']
// ]

// mixArry.forEach(function(val) {
//     console.log(val);
// })

// filter
// var numArry = [100,30,440,500,6600]
// console.table(numArry);
// var result = numArry.filter(function(val) {
//     return val > 300;
// })
// console.log('300以上', result);

// if文
// let shoppingDone = false;

// if (shoppingDone === true) {
//     let childs = 10;
// } else {
//     let childs = 5;
// }

// const select = document.querySelector('select');
// const para = document.querySelector('p');

// select.addEventListener('change', setWether);

// function setWether() {
//     const choice = select.value;

//     if (choice === 'sunny') {
//         para.textContent = '晴れの日です';
//     } else if (choice === 'rainy') {
//         para.textContent = '雨の日です';
//     } else if (choice === 'cloudy') {
//         para.textContent = '曇りです'
//     } else if (choice === 'snow') {
//         para.textContent = '雪の日です';
//     } else {
//         para.textContent = '';
//     }
// }

// if (choice === 'sunny') {
//     if (temperature < 20) {
//         para.textContent = '温度' + temperature + '度 ちょうどいい温度';
//     } else if (temperature >= 20) {
//         para.textContent = '温度' + temperature + '度 ちょっと暑い';
//     }
// }

// // ANDを使うとこうなる
// if (choice === 'sunny' && temperature < 20) {
//     para.textContent = '温度' + temperature + '度　ちょうどいい温度';
// } else if (choice === 'sunny' && temperature >= 20) {
//     para.textContent = '温度' + temperature + '度　ちょっと暑い';
// }

// // ORの例
// if (!(house || houseStatus === '倒壊')) {
//     console.log('まだ家に待機');
// } else {
//     console.log('すぐに避難');
// }

// const select = document.querySelector('select');
// const para = document.querySelector('p');

// select.onchange = setWether;

// function setWeather() {
//     const choice = select.value;

//     switch (choice) {
//         case 'sunny':
//             para.textContent = '晴れです';
//             break;
//         case 'rainy':
//             para.textContent = '雨の日です';
//             break;
//         case 'cloudy':
//             para.textContent = '曇りです';
//             break;
//         case 'snow':
//             para.textContent = '雪の日です';
//             break;
//         default:
//             para.textContent = '';
//     }
// }

// const select = document.querySelector('select');
// const html = document.querySelector('html');
// document.body.style.padding = '10px';

// function update(bgcolor, textColor) {
//     html.style.backgroundColor = bgcolor;
//     html.style.color = textColor;
// }

// select.onchange = function() {
//     (select.value === 'black') ? update('black', 'white') : update('white', 'black');
// }

// アクティブlerning1

// const select = document.querySelector('select');
// const list = document.querySelector('ul');
// let h2 = document.querySelector('h2');

// select.onchange = function() {
//     let choice = select.value;
//     let day = 31;

//     if (choice === '2') {
//         day = 28;
//     } else if (choice === '4' || choice === '6' || choice === '9' || choice === '11') {
//         day = 30;
//     } else {
//         day = 31
//     }

//     createCalender(days, choice + ' 月');
// }

// function createCalender (days, choice) {
//     list.innerHTML = '';
//     h2.textContent = choice;
//     for (let i =1; i<= days; i++) {
//         const listItem = document.createElement('li');
//         listItem.textContent = i;
//         list.appendChild(list);
//     }  
// }
// createCalender(31, '1月');

// アクティブlerning2
const select = document.querySelector('select');
const html = document.querySelector('.output');

select.onchange = function () {
    const choice = select.value;

    switch (choice) {
        case 'white':
            html.style.backgroundColor = 'white';

            break;
    }
}

function update(bgColor, textColor) {
    html.style.backgroundColor = bgColor;
    html.style.color = textColor;
}
