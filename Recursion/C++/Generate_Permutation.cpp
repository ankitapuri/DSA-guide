/*

Algorithm:
1)The algorithm generates (n-1)! permutations of the first n-1 elements, adjoining the last element to each of these. This will generate all of the permutations that end with the last element.

2)If n is odd, swap the first and last element and if n is even, then swap the ith element (i is the counter starting from 0) and the last element and repeat the above algorithm till i is less than n.

3)In each iteration, the algorithm will produce all the permutations that end with the current last element.

*/
#include <bits/stdc++.h>

using namespace std;

void generatePermutation(vector<int> &num, int start, vector<vector<int> > &result) {
    if (start == num.size() - 1) {
        result.push_back(num);
        return;
    }
    for (int i = start; i < num.size(); i++) {
        swap(num[start], num[i]);
        generatePermutation(num, start + 1, result);
        swap(num[start], num[i]);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    int n;
    cin >> n;
    vector<int> numbers(n, 0);
    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }
    sort(numbers.begin(),numbers.end());
    vector<vector<int>> solution;
    generatePermutation(numbers,0,solution);
    for (auto &i : solution) {
        for (int j : i) {
            cout << j << " ";
        }
        cout << "\n";
    }
    return 0;
}
/*
Input
3
1 2 3

Output
1 2 3 
1 3 2 
2 1 3 
2 3 1 
3 2 1 
3 1 2 

*/
