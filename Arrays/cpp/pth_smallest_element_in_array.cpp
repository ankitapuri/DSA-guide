// P’th Smallest/Largest Element in Unsorted Array 


/* Given an array and a number p where p is smaller than size of array, we need to find the p’th smallest element in the given array.
 It is given that all array elements are distinct.*/


#include <bits/stdc++.h>
using namespace std;

// Function to return p'th smallest element in a given array
int pthSmallest(int arr[], int n, int p)
{
	// Sort the given array
	sort(arr, arr + n);

	// Return p'th element in the sorted array
	return arr[p - 1];
}

int main()
{
	int arr[] = { 112, 13, 15, 17, 119 };
	int n = sizeof(arr) / sizeof(arr[0]), p = 2;
	cout << "p'th smallest element is " << pthSmallest(arr, n, p);
	return 0;
}


// Time Complexity of this solution is O(N Log N) 
