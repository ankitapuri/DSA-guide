#include <stdio.h>
int main()
{
int i, low, high, mid, n, key, array[100];
printf("Enter number of elements: ");
scanf("%d",&n); //taking input of a number n 
printf("Enter %d integers:", n);
for(i = 0; i < n; i++)
scanf("%d",&array[i]); // it will take n inputs simultaneously
  
printf("Enter value to find: ");
scanf("%d", &key); // it will take value of key as input
  
low = 0;
high = n - 1;
mid = (low+high)/2;
  
while (low <= high) { // it will run the loop while low is less than or equal to high 
if(array[mid] < key) // if the number is not found we will increase the value of low by mid+1
low = mid + 1;
else if (array[mid] == key) {
printf("Element Found! \n%d is present at location %d", key, mid+1);
break; // if the element is found then we will break the loop and print the result
}
else
high = mid - 1; // if the number is not found we will decrease the value of high to mid-1
mid = (low + high)/2;
}
  
if(low > high)
printf("Element Not Found! \n%d isn't present in the list", key); // if the number is not preasent then it will enter into this scope and print the result
return 0;
}
