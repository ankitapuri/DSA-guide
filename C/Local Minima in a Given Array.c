// A program in C to find local minima in a given array by the user


#include <stdio.h>

int main(void)
{
    printf("Enter length of array: ");                                // Getting length of the array
    int n,i=0;
    scanf("%d",&n);
    int arr[n];
    while(i<n)
    {
        printf("Enter element number %d: ", (i + 1));                 // Getting all the elements of an array
        scanf("%d", &arr[i]);
        i++;
    }
    for (int p = 0; p<n; p++)
    {
        if(p==0 && arr[1]>arr[0])                                    // Checking if the first element is a local minima
        {
            printf("Entry number 1 is a local minima.\n");
        }
        else if(p==(n-1) && arr[n-2]>arr[n-1])
        {
            printf("Entry number %d is a local minima.\n",n);         // Checking if the last element is a local minima
        }
        else if(arr[p]<arr[p-1] && arr[p]<arr[p+1])
        {
            printf("Entry number %d is a local minima.\n",p+1);       // Checking every element for minima
        }
        
        
    }
}
