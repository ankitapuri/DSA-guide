//TODO: Program for Bubble sort

#include<iostream>
#include <bits/stdc++.h> 
using namespace std; 
void swap(int *xp, int *yp)                 //TODO: Swapping input
{  
    int temp = *xp;  
    *xp = *yp;  
    *yp = temp;  
}  
              
void bubbleSort(int arr[], int n)           //TODO: Implement bubble sort  
{  
    int i, j;  
    for (i = 0; i < n-1; i++)      
      
    // Last i elements are already in place  
    for (j = 0; j < n-i-1; j++)  
        if (arr[j] >= arr[j+1])  
            swap(&arr[j], &arr[j+1]);  
}  
  
void printArray(int arr[], int size)        //TODO: Print the array
{  
    int i;  
    for (i = 0; i < size; i++)  
        cout << arr[i] << " ";  
    cout << endl;  
}  
   
int main()                                  //TODO: Driver code 
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
    bubbleSort(ar, n);                      //TODO: Calling Bubble Sort Function
    cout<<"Sorted array: \n";  
    printArray(ar, n);  
    return 0;  
}
