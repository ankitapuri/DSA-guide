function fibonacci(n) {
    return n < 1 ? 0  // it will return 0 if n is less than 1
         : n <= 2 ? 1 // it will return 1 if n is less than equal to 2 and greater than or equal to 1
         : fibonacci(n - 1) + fibonacci(n - 2); // calling functions to add last two terms in each function call
 }
 
 console.log(fibonacci(4)); // calling the void function and printing it
 
// Time Complexity for the code is 2^n
 
