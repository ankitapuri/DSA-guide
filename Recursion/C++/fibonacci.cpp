//TODO: Print fibonacci series

#include<bits/stdc++.h> 
using namespace std;   

int fibonacci(int n) 
{ 
    if (n <= 1) 
        return n;                                    //TODO: Base statement
    else
        return fibonacci(n-1) + fibonacci(n-2);      //TODO: Recursive statement
} 

int main () 
{ 
    int n;                                           //TODO: Getting user input
    cin>>n;
    int i=0;
    while(i<n)
    {
        cout << fibonacci(i)<<"\n";                  //TODO: Printing result and calling the recursive function
        i++;
    }
    return 0; 
} 
