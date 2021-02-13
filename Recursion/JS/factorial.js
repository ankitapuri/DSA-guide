//TODO: Find the factorial of a given number

function factorial(x) {

    // if number is 0
    if (x == 0) {                             //TODO: Base statement
        return 1;
    }

    // if number is positive
    else {
        return x * factorial(x - 1);          //TODO: Recursive statement
    }
}

                                              //TODO: take input from the user
let num = prompt('Enter a positive number: ');

                                              //TODO:calling factorial() if num is positive
if (num >= 0) {
    let result = factorial(num);
    console.log(`The factorial of ${num} is ${result}`);    //TODO: Print result
}
else {
    console.log('Enter a positive number.');
}
