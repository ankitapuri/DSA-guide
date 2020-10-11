#include<stdio.h>
#include<stdlib.h>

int fibonacci(int n) 
{ 
    if (n <= 1) 
        return n; 
    else
        return fibonacci(n-1) + fibonacci(n-2); 
} 

int main () 
{ 
    int n;
    printf("Enter n ( to calculate nth fibonacci number) :");
    scanf("%d",&n);
    int i=0;
    while(i<n)
    {
    	printf("%d\n",fibonacci(i));
        i++;
    }
    return 0; 
} 
