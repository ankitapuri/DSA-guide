#include <iostream>
#include <vector>

using namespace std;

vector <vector <int>> build_prefix_sum(vector <vector <int>> grid) {

	int n = grid.size() , m = grid[0].size();
	vector <vector <int>> prefix_sum(n , vector <int> (m));

	// Calculating the prefix sum of rows
	for(int i = 0; i < n; i++) {
 		for(int j = 0; j < m; j++) {
 			if(j == 0)
 				prefix_sum[i][j] = grid[i][j];
 			else
 				prefix_sum[i][j] = prefix_sum[i][j - 1] + grid[i][j];
 		}
 	}

 	// Calculating the prefix sum of columns
 	for(int i = 0; i < n; i++) {
 		for(int j = 0; j < m; j++) {
 			if(i != 0)
 				prefix_sum[i][j] += prefix_sum[i - 1][j];
 		}
 	}

 	return prefix_sum;

}

int submatrix_sum(vector <vector <int>> prefix , int tl1 , int tl2 , int br1 , int br2) {

	// The Brute force approach is to traverse the submatrix of given bounds and find the sum
	// For each query it would take O(n ^ 2) time. Therefore, for Q queries it would tak O(Q * (N ^ 2)) time

	// The optimised approach is to use the prefix sum of the matrix which would find the sum 
	// for a given submatrix in O(1). Therefore, for Q queries it would take O(Q) time. The time to build the
	// prefix sum is O(n ^ 2). So, overall complexity is:
	// 		Time - O(n ^ 2)
	//      Space - O(n ^ 2)

	int n = prefix.size() , m = prefix[0].size();

	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++)
			cout << prefix[i][j] << " ";
		cout << endl; 
	}

	int sum = 0;
 	sum += (prefix[br1][br2]);

	if(tl1 > 0 && tl2 > 0)
		sum = sum - (prefix[br1][tl2 - 1] + prefix[tl1 - 1][br2]) + prefix[tl1 - 1][tl2 - 1];
	else if(tl1 > 0)
		sum = sum - prefix[tl1 - 1][br2];
	else
		sum = sum - prefix[br1][tl2 - 1];

	return sum;

}

int main() {

	int n , m;

	cout << "Enter the no. of rows and columns of the matrix : " << endl;
	cin >> n >> m;

	vector <vector <int>> grid(n , vector <int> (m));
	cout << "Enter the elements of the matrix : " << endl;
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++)
			cin >> grid[i][j];
	}

	int q;
	cout << "Enter the no. of queries : " << endl;
	cin >> q;

	vector <vector <int>> prefix_sum = build_prefix_sum(grid);


	for(int i = 0; i < q; i++) {

		cout << "Query : " << (i + 1) << endl;

		int tl1 , tl2 , br1 , br2;
		cout << "Enter the top coordinates of the submatrix : " << endl;
		cin >> tl1 >> tl2;

		cout << "Enter the bottom coordinates of the submatrix : " << endl;
		cin >> br1 >> br2;

		int sum = submatrix_sum(prefix_sum , tl1 , tl2 , br1 , br2);

		cout << "The sum is : " << sum << endl;

	}

	return 0;
}