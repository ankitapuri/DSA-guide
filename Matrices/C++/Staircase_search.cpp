#include <iostream>
#include <vector>

using namespace std;

void solve_normal_search(vector <vector <int>> m , int key) {

	// Algorithm:
	// 	In this function the key is searched by normal traversal of the matrix
	
	// 	Time Complexity - O(n ^ 2)

	cout << "Using Method - 1 with O(n ^ 2) Time Complexity" << endl;

	int n = m.size();
	bool is_found = false;

	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			if(m[i][j] == key) {
				cout << "Found at : " << i << " " << j << endl;
				is_found = true;
				break;
			}
		}
	}

	if(!is_found)
		cout << "Key not found" << endl;
	cout << endl;
}

void solve_binary_search(vector <vector <int>> m , int key) {
	// Algorithm: 
	//  In this function, the property of row or column sorted can be exploited.
	// 	Either a column or a row can be binary searched for a key
	
	//  Time Complexity: O(nlogn) -> n is no. of rows or columns and logn is to search 
	// 								 the key in that row or column

	// Here, the row is binary searched

	cout << "Using Method - 2 with O(nlogn) Time Complexity" << endl;
	int n = m.size();
	bool is_found = false;

	for(int i = 0; i < n; i++) {
		int low = 0;
		int high = n - 1;
		while(low <= high) {
			int mid = low + (high - low) / 2;
			if(m[i][mid] == key) {
				is_found = true;
				cout << "Found at : " << i << " " << mid << endl;
				break;
			} 
			else if(m[i][mid] > key)
				high = mid - 1;
			else
				low = mid + 1;
		}
		if(is_found)
			break;
	}
	if(!is_found)
		cout << "Key not found" << endl;
	cout << endl;
}

void solve_staircase_search(vector <vector <int>> m , int key) {

	// Algorithm: 
	// 	In this function, the property of both the row and column sorted can be exploited.
	//  We can start from top-right postion of the matrix, because it is the largest element of 
	//  the row and smallest element of the column.
	//  Now, if the key is smaller than that element, it surely means that we should move towards left,
	//  thereby excluding the current column.
	//  Else, if the key is greater than that element, it surely means that we shoudl move towards bottom,
	//  thereby excluding the current row.
	
	//  Time Complexity - O(n) -> since, a row or column is skipped with comparison of just a single element

	cout << "Using Method - 3 with O(n) Time Complexity" << endl;

	int n = m.size();
	bool is_found = false;

	int i = 0 , j = n - 1;
	while(i <= n - 1 && j >= 0) {
		if(m[i][j] == key) {
			cout << "Found at : " << i << " " << j << endl;
			is_found = true;
			break;
		}
		else if(m[i][j] > key) 
			j--;
		else
			i++;
	}

	if(!is_found)
		cout << "Key not found" << endl;
	cout << endl;
}

int main() {


	int n;
	cout << "Enter the order of the matrix : " << endl;
	cin >> n;

	vector <vector <int>> m(n , vector <int> (n));
	cout << "Enter the elements of the row and column sorted matrix : " << endl;
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++)
			cin >> m[i][j];
	}

	int key;
	cout << "Enter the key to search : " << endl;
	cin >> key;

	solve_normal_search(m , key);
	solve_binary_search(m , key);
	solve_staircase_search(m , key);


	return 0;
}