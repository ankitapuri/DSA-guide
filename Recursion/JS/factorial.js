// program to find the factorial of a number
function factorial(x) {

    // if number is 0
    if (x == 0) {
        return 1;
    }

    // if number is positive
    else {
        return x * factorial(x - 1);
    }
}

// take input from the user
let num = prompt('Enter a positive number: ');

// calling factorial() if num is positive
if (num >= 0) {
    let result = factorial(num);
    console.log(`The factorial of ${num} is ${result}`);
}
else {
    console.log('Enter a positive number.');
}