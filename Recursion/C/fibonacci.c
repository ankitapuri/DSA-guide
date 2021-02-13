//TODO: Print fibonacci series

#include<stdio.h>
#include<stdlib.h>

 int fibonacci(int n) 
 { 
     if (n <= 1) 
         return n;                                  //TODO: Base statement
     else
         return fibonacci(n-1) + fibonacci(n-2);    //TODO: Recursive statement
 } 

 int main () 
 { 
     int n;
     printf("Enter n: ");
     scanf("%d",&n);                                //TODO: Getting user input
     int i=0;
     while(i<n)
     {
     	printf("%d\n",fibonacci(i));                  //TODO: Printing result and calling recursive function
         i++;
     }
     return 0; 
 } 
