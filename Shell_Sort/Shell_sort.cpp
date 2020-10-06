#include <iostream>
using namespace std;

void shellSort (int arr[], int n) {
	for (int space = n /2; space > 0; space /= 2) {
		for (int i = space; i < n; i += 1) {
			int tmp = arr[i];
			int j;
			for (j = i; j >= space && tmp < arr[j-space]; j -= space) {
				arr[j] = arr[j-space];
			}
			arr[j] = tmp;
		}
	}
}

int main () {
	int arr [7] = {3, 2, 7, 5, 11, 9, 13};
	cout << "Before sorting: " << endl;
	for (auto e : arr) cout << e << " ";
	cout << endl;
	shellSort (arr, 7);
	cout << "After sorting: " << endl;
	for (auto e : arr) cout << e << " ";
	cout << endl;
	return 0;
}