// C++ implementation of Shell sort algorithm

#include <iostream>
using namespace std;

// Function to sort an array using Shell sort algorithm
/* param:
    arr: array to sort;
    n: size of the array
*/
void shellSort (int arr[], int n) {
	// start with a big space, then reduce the space
	for (int space = n /2; space > 0; space /= 2) {
		// sort for the space size
		// keep adding element untill entire array is sorted
		for (int i = space; i < n; i += 1) {
			int tmp = arr[i]; // store value in tmp for letter use
			int j;
			for (j = i; j >= space && tmp < arr[j-space]; j -= space) {
				arr[j] = arr[j-space];
			}
			// j is the correct position for tmp
			// so assign tmp to arr[j]
			arr[j] = tmp;
		}
	}
}

// driver code
int main () {
	int n;
	cout << "Size if your array: ";
	cin >> n;
	int arr[n];
	cout << "Enter your array:" << endl;
	for (int i = 0; i < n; i++) cin >> arr[i];  
	cout << "Before sorting: " << endl;
	for (auto e : arr) cout << e << " ";
	cout << endl;
	shellSort (arr, 7);
	cout << "After sorting: " << endl;
	for (auto e : arr) cout << e << " ";
	cout << endl;
	return 0;
}
