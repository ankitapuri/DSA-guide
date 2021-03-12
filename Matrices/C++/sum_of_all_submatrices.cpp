#include <iostream>
#include <vector>

using namespace std;

int sum_of_all_submatrices1(vector <vector <int>> grid) {

	// This is the Brute Force implementation of this problem.
	// The approach is to just find the top left and bottom right of the submatrix and traverse that
	// submatrix to find the sum.
	
	// Time Complexity : O(n ^ 6)
	// Auxiliary Space Complexity : O(1)

	int n = grid.size();
	int m = grid[0].size();
	int sum = 0;

	// The x - coordinate of the top left of the submatrix
	for (int i = 0; i < n; i++) {

		// The y - coordinate of the top left of the submatrxi
		for (int j = 0; j < m; j++) {

			// The x - coordinate of the bottom right of the submatrix
			for (int tl = i; tl < n; tl++) {

				// The y - coordinate of the bottom right of the submatrix
				for (int br = j; br < m; br++) {

					// Traversing the submatrix to calculate the sum
					for (int r = i; r <= tl; r++) {
						for (int c = j; c <= br; c++) {
							sum += grid[r][c];
						}
					}

				}
			}
		}
	}

	return sum;

}

int sum_of_all_submatrices2(vector <vector <int>> grid) {

	// In the previous Brute Force Implementation, the submatrix is traversed to find the sum.
	// This costs an O(n ^ 2) time. But this can be done in O(1) if we have a prefix sum of the matrix.
	// Prefix sum of the matrix can be found by taking prefix sum of rows and then prefix sum of columns.
	// Eg: For a given matrix:
	// 			a b c
	// 			d e f
	// 			g h i
	// Prefix sum of rows is:
	// 			a | a + b | a + b + c
	// 			d | d + e | d + e + f
	// 			g | g + h | g + h + i
	// Prefix sum of columns of the (prefix sum of rows) matrix is:
	// 			a  			| a + b 				   | a + b + c
	// 			a + d   	| a + b + d + e 		   | a + b + c + d + e + f
	// 			a + d + g   | a + b + d + e + g + h    | a + b + c + d + e + f + g + h + i
	// The above is the prefix sum of the matrix, and sum of the submatrix with given (i1, j1) , (i2 , j2)
	// can be found in O(1) using the relation:
	// 		sum = prefix[i2][j2] - prefix[i2][j1 - 1] - prefix[i1 - 1][j2] + prefix[i1 - 1][j1 - 1]

	// Time Complexity : O(n ^ 4)
	// Auxiliary Space Complexity : O(n ^ 2)

	int n = grid.size();
	int m = grid[0].size();
	int sum = 0;

	vector <vector <int>> prefix(n , vector <int> (m));

	// Calculating the prefix sum of rows
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			if(j == 0)
				prefix[i][j] = grid[i][j];
			else
				prefix[i][j] = prefix[i][j - 1] + grid[i][j];
		}
	}

	// Calculating the prefix sum of columns
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			if(i != 0)
				prefix[i][j] += prefix[i - 1][j];
		}
	}

	// The x - coordinate of the top left of the submatrix
	for (int i = 0; i < n; i++) {

		// The y - coordinate of the top leftt of the submatrix 
		for (int j = 0; j < m; j++) {

			// The x - coordinate of the bottom right of the submatrix
			for (int tl = i; tl < n; tl++) {

				// The y - coordinate of the bottom right of the submatrix
				for (int br = j; br < m; br++) {

						sum += (prefix[tl][br]);

						if(i > 0 && j > 0)
							sum = sum - (prefix[tl][j - 1] + prefix[i - 1][br]) + prefix[i - 1][j - 1];
						else if(i > 0)
							sum = sum - prefix[i - 1][br];
						else
							sum = sum - prefix[tl][j - 1];
				}
			}
		}
	}

	return sum;

}

int sum_of_all_submatrices3(vector <vector <int>> grid) {

	// In the previous two approaches the top left and bottom right indices of all the submatrices 
	// are found and the sum of them is added. But in this approach, instead of finding the submatrices,
	// how much submatrices an element in the matrix is part of, is found. Multiplying that with
	// the value of that element gives the contribution of that element to the sum. This can be done to all
	// the elements of the matrix and the sum can be found.

	// Contribution of an element to the sum is defined as at index (i , j) of matrix with order n * m:
	// 		value * (i + 1) * (j + 1) * (n - i) * (m - j)

	// Time Complexity: O(n ^ 2)
	// Auxiliary Space Complexity: O(1)

	// Note: This is the best optimised solution for this problem

	int n = grid.size();
	int m = grid[0].size();
	int sum = 0;


	// Traversing the matrix
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {

			// Calculating the contribution of an element to the sum and adding it to the sum
			sum += grid[i][j] * (i + 1) * (j + 1) * (n - i) * (m - j);
		}
	}

	return sum;

}

int main() {

	int n , m;
	cout << "Enter the no. of rows and columns of the matrix : " << endl;
	cin >> n >> m;

	vector <vector <int>> grid(n , vector <int> (m));
	cout << "Enter the elements of the matrix : " << endl;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++)
			cin >> grid[i][j];
	}

	int sum1 = sum_of_all_submatrices1(grid);
	int sum2 = sum_of_all_submatrices2(grid);
	int sum3 = sum_of_all_submatrices3(grid);

	cout << "The sum of all submatrices using Method 1 : " << sum1 << endl;
	cout << "The sum of all submatrices using Method 2 : " << sum2 << endl;
	cout << "The sum of all submatrices using Method 3 : " << sum3 << endl;

	return 0;
}
