#include <bits/stdc++.h> 
using namespace std; 

void selectionSort(int arr[], int n) 
{ 
	int i, j, min_i; 
	for (i = 0; i < n-1; i++) 
	{ 
		min_i = i; 
		for (j = i+1; j < n; j++) 
		if (arr[j] < arr[min_i]) 
			min_i = j; 

        int temp=arr[min_i];
        arr[min_i]=arr[i];
        arr[i]=temp;
	} 
} 

int main() 
{ 
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)  cin>>arr[i];
	selectionSort(arr, n); 
	cout << "Sorted array: \n"; 
	for (int i=0; i < n; i++) 
		cout << arr[i] << " ";  
	return 0; 
}