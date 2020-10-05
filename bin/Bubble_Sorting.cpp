// C++ program for implementation of Bubble sort  ]
#include<iostream>
#include <bits/stdc++.h> 
using namespace std; 
void swap(int *xp, int *yp)  
{  
    int temp = *xp;  
    *xp = *yp;  
    *yp = temp;  
}  
  
// A function to implement bubble sort  
void bubbleSort(int arr[], int n)  
{  
    int i, j;  
    for (i = 0; i < n-1; i++)      
      
    // Last i elements are already in place  
    for (j = 0; j < n-i-1; j++)  
        if (arr[j] >= arr[j+1])  
            swap(&arr[j], &arr[j+1]);  
}  
  
/* Function to print an array */
void printArray(int arr[], int size)  
{  
    int i;  
    for (i = 0; i < size; i++)  
        cout << arr[i] << " ";  
    cout << endl;  
}  
  
// Driver code  
int main()  
{  
    int n;
	cout<<"Enter the number of elements to be stored in array"<<endl; 
	cin>>n;
	int ar[n];
	for(int i=0;i<n;i++)
	{
		cin>>ar[i];
	}
	cout<<"Original array: \n"; 
	printArray(ar, n);  
    bubbleSort(ar, n);  
    cout<<"Sorted array: \n";  
    printArray(ar, n);  
    return 0;  
}
