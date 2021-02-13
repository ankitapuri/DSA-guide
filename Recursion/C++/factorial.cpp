//TODO: Print factorial of the given number

#include<iostream>
using namespace std;

int factorial(int n);

int main()
{
    int n;

    cout << "Enter a positive integer: ";                         //TODO: Getting user input
    cin >> n;

    cout << "Factorial of " << n << " = " << factorial(n);        //TODO: Printing result

    return 0;
}

int factorial(int n)
{
    if(n > 1)
        return n * factorial(n - 1);                              //TODO: Recursive statement
    else
        return 1;                                                 //TODO: Base statement
}
