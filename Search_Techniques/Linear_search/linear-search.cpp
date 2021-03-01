 

#include <iostream> 
using namespace std; 

int search(int arr[], int n, int x) 
{ 
	int i; 
	for (i = 0; i < n; i++) // loop will run till n
		if (arr[i] == x) 
			return i; // if the element is fount return than index
	return -1; // if the loop has been ended then return value as -1
} 

int main(void) 
{ 
	int arr[] = { 2, 3, 4, 10, 40 }; 
	int x = 10; 
	int n = sizeof(arr) / sizeof(arr[0]); // to find size of array
	int result = search(arr, n, x); // calling search funtion
(result == -1)? cout<<"Element is not present in array" // if the result is -1 then print element is not present
				: cout<<"Element is present at index " <<result;  // else print that index
return 0; 
} 
