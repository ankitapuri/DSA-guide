#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Function to merge two arrays without extra space
void merge_two_arrays(vector <int> &arr1 , vector <int> &arr2) {

	// The approach is to traverse the first array from right to left and the 
	// second array from left to right and swap elements if first array's element 
	// larger than the second array's element, else continue. 
	// During each swap we need to sort the arrays, to make the smallest element
	// of the second array be always at front and the largest element of the first
	// array be always at the rear.

	// Time Complexity - O(nlogn)
	// Space Complexity - O(1)

	int i = arr1.size() - 1 , j = 0;

	while(true) {
		if(arr1[i] > arr2[j]) {
			swap(arr1[i] , arr2[j]);
			sort(arr1.begin() , arr1.end());
			sort(arr2.begin() , arr2.end());
		} else {
			break;
		}
	}

}

int main() {

	int n1 , n2;
	cout << "Enter the size of the first array : " << endl;
	cin >> n1;

	cout << "Enter the size of the second array : " << endl;
	cin >> n2;

	vector <int> arr1(n1) , arr2(n2);

	cout << "Enter the elements of first array in sorted order : " << endl;
	for(int i = 0; i < n1; i++) {
		cin >> arr1[i];
	}

	cout << "Enter the elements of second array in sorted order : " << endl;
	for(int i = 0; i < n2; i++) {
		cin >> arr2[i];
	}

	merge_two_arrays(arr1 , arr2);

	cout << "After merging : " << endl;
	for(int i = 0; i < n1; i++) {
		cout << arr1[i] << " ";
	}
	for(int i = 0; i < n2; i++) {
		cout << arr2[i] << " ";
	}
	cout << endl;

	return 0;
}