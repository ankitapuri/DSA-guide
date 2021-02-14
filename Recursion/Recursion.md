# Recursion
Recursion is a method of solving a problem where the solution depends on solutions to smaller instances of the same problem. Such problems can generally be solved by iteration, but this needs to identify and index the smaller instances at programming time. <br>
For Recursion, we need two things:
1. A function that calls itself
2. A base statement that determines where is the recursion going to stop <br>
Neglecting to write a base case or testing for it incorrectly, can cause an infinite loop.
___
## Factorial:
Lets take an example of factorial.<br>
We know that **n!** = n * **(n-1)!** and **0!** = 1.<br>
Hence, we can use this to do recursion. Its Pseudocode is as follows:
```
    function factorial is:

    input: integer n such that n >= 0

    output: [n × (n-1) × (n-2) × .... × 1]
            
            1. if n is 0, return 1
            2. otherwise, return [ n × factorial(n-1) ]

    end factorial
```
We can also use loops here.
___

## Greatest Common Divisor:
The Euclidean algorithm, which computes the greatest common divisor of two integers, can be written recursively.<br>
We know that **gdc**(x , y) = **gdc**(y , x%y) if y ≠ 0<br>
 and **gdc**(x , y) = x if y = 0<br>
Its Pseudocode is as follows:
```
function gcd is:
input: integer x, integer y such that x > 0 and y >= 0

      1. if y is 0, return x
      2. otherwise, return [ gcd( y, (remainder of x/y) ) ]

end gcd
```
We can use loops here also.

