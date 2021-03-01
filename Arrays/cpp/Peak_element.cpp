#include <iostream>
#include <vector>
#define endl "\n"
using namespace std;

/*

Time Complexity : O(logn)
Auxiliary Space Complexity : O(1)

Approach : Binary Search (Divide and Conquer) - Lower Bound

*/

// Function to return the peak element of the array
int find_peak_element(vector <int> arr) {

	// A peak element is an element will is greater than or equal to its neighbouring elements
	// It can be proved that an array will always have a peak element

	int low = 0 , high = arr.size() - 1;
	int n = arr.size();

	while(low <= high) {

		int mid = low + (high - low) / 2;
		// Corner elements
		if(mid == 0) {
			if(arr[mid] >= arr[mid + 1])
				return arr[mid];
		}
		else if(mid == n - 1) {
			if(arr[mid] >= arr[mid - 1])
				return arr[mid];
		}
		else {
			if(arr[mid] >= arr[mid + 1] && arr[mid] >= arr[mid - 1])
				return arr[mid];
		}

		// Move to left half of array	
		if(mid > 0 && arr[mid - 1] >= arr[mid]) 
			high = mid - 1;
		// Move to right half of array
		else
			low = mid + 1;
	}

	// Return
	return -1; // This will not be executed since every array will surely have a peak element
}

int main() {

	int n;

	cout << "Enter the size of the array : " << endl;
	cin >> n;

	vector <int> arr(n);

	cout << "Enter the values of the array : " << endl;
	for(int i = 0; i < n; i++)
		cin >> arr[i];

	// Function Call to find the peak element of the array
	int peak_element = find_peak_element(arr);

	cout << "The peak element of the array is : " << peak_element << endl;

	return 0;
}