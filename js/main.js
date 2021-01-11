// const arry = [1,2,3,4,5]
// console.table(arry)

// arry.forEach(function(val, i) {
//     console.log('コールバック', val, i);
// })

// // reduce
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

const select = document.querySelector('select');
const para = document.querySelector('p');

select.addEventListener('change', setWether);

function setWether() {
    const choice = select.value;

    if (choice === 'sunny') {
        para.textContent = '晴れの日です';
    } else if (choice === 'rainy') {
        para.textContent = '雨の日です';
    } else if (choice === 'cloudy') {
        para.textContent = '曇りです'
    } else if (choice === 'snow') {
        para.textContent = '雪の日です';
    } else {
        para.textContent = '';
    }
}