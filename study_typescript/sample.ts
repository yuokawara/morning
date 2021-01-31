// import axios from 'axios';

// // ?は必須ではない
// axios.get('http://google.com', {
//     headers: 
// })
function hello(name:string): void {
    console.log("hello" + name);
}
let your_name: string = "okawara";
hello(your_name);

function add (a: number, b: number): number {
    return a + b;
}

// const book = ['manga', 1500, false];
// タプルで記入
const book: [string, Number, boolean] = ['manga', 1500, false]
// pushでは追加できる。初期値は制約が厳しいが、それ以外はゆるい
book.push(100);
