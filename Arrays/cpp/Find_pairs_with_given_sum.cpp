#include <iostream>
#include <vector>
#define endl "\n"
using namespace std;

/*

Time Complexity : O(n)
Space Complexity : O(1)

Approach : Two Pointer Algorithm

*/

// Function to return true is a pair exists with given sum, else false
bool find_pair_with_given_sum(vector <int> arr , int sum) {

	// The approach is to have two pointers, one at index 0 and the other at index n - 1
	// Since the array is sorted, following properties are always valid
	// 		1. If sum(arr[i] , arr[j]) < given_sum
	// 			Move first pointer to the next position
	// 		2. If sum(arr[i] , arr[j]) > given_sum
	//			Move the last pointer to the previous position
	// 		3. If sum(arr[i] , arr[j]) == given_sum
	// 			The pair is found, therefore return true

	// Let l be first and r be last pointer
	int l = 0 , r = arr.size() - 1;

	while(l < r) {
		if(arr[l] + arr[r] < sum)
			l++;
		else if(arr[l] + arr[r] > sum)
			r--;
		else
			return true;
	}

	// If a pair doesn't exist
	return false;
}

int main() {

	int n;

	cout << "Enter the size of the array : " << endl;
	cin >> n;

	vector <int> arr(n);

	cout << "Enter the values of the sorted array : " << endl;
	for(int i = 0; i < n; i++)
		cin >> arr[i];

	int sum;

	cout << "Enter the sum to find a pair : " << endl;
	cin >> sum;

	// Function Call to find if a pair exists with given sum
	bool is_pair = find_pair_with_given_sum(arr , sum);

	if(is_pair)
		cout << "The pair is found" << endl;
	else
		cout << "The pair is not found" << endl;

	return 0;
}