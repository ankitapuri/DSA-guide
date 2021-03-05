// Algorithm:
//      The approach is to find such points in an array, where its left and right values are 
//  greater than the current point value. Only at this case water can be stored, else it will flow out.
//  Also, the first and last point in the array cannot store water because there is no bounds.
//  So, the approach is quite simple, just find the max value till current index from left to right 
//  and from right to left. The minimum of this value subtracted with the current height gives the water
//  that can be stored at this position. Sum of water stored at all positions is the total trapped rain water.

#include <iostream>
#include <vector>

using namespace std;

// To find the max element of given two numbers
int max(int a , int b) {
    if(a > b)
        return a;
    return b;
}

// To find the min element of the given two numbers
int min(int a , int b) {
    if(a < b)
        return a;
    return b;
}

int trap(vector<int> height, int heightSize){

    // If there is no elements in the array
    if(heightSize == 0)
        return 0;

    int left_max[heightSize] , right_max[heightSize];
    left_max[0] = height[0]; 
    right_max[0] = height[heightSize - 1];

    // To find the max value from left to right and from right ot left
    for(int i = 1; i < heightSize; i++) {
        left_max[i] = max(left_max[i - 1] , height[i]);
        right_max[i] = max(right_max[i - 1] , height[heightSize - i - 1]);
    }

    // The sum of water stored at each position is the final result
    int ans = 0;
    for(int i = 1; i < heightSize - 1; i++) {
        ans += min(left_max[i] , right_max[heightSize - i - 1]) - height[i];
    }
    return ans;
}

int main() {

    int n;
    cout << "Enter the size of the array : " << endl;
    cin >> n;

    vector <int> height(n);
    cout << "Enter the elements of the array : " << endl;
    for(int i = 0; i < n; i++)
        cin >> height[i];

    // Function Call to find the amount of rainwater trapped
    int trapped = trap(height , n);

    cout << "The amount of rain water trapped is : " << trapped << endl;

    return 0;
}