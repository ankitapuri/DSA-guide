//TODO: Print factorial of a given integer

#include<stdio.h>
long int multiplyNumbers(int n);
int main() {
    int n;
    printf("Enter a positive integer: ");                       //TODO: Getting user input
    scanf("%d",&n);
    printf("Factorial of %d = %ld", n, multiplyNumbers(n));     //TODO: Printing answer and calling recursive function
    return 0;
}

long int multiplyNumbers(int n) {
    if (n>=1)
        return n*multiplyNumbers(n-1);                          //TODO: Recursive statement          
    else
        return 1;                                               //TODO: Base statement
}
