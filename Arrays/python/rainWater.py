
"""
Problem Statement:
Given n non-negative integers representing an elevation map where the width of each bar is 1, compute how much waterContent it is able to trap after raining.

Example: 1 
Input: arr[] = [0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1]
Output: 6

Example: 2
Input: arr[]   = {2, 0, 2}
Output: 2


Logic:
An element of the array can store waterContent if there are higher bars on left and right. The amount of waterContent to be stored in every element can be found out by 
finding the heights of bars on the left and right sides.


Approach:
Traverse the element of array one by one and find the largest element on the left as well as on the right hand side. The difference between the smaller of
two sides & the current element would give the amount of waterContent stored. 

Algorithm:
- Create two array left and right of size n. Initialize the waterContent to 0.
- To fill the left array run a loop in the arr from index 1 to n. Initialize the first element of the left array to the first element of arr ( since the first element would be the largest for itself)
- fill the elements of the left array with maximum values between its left element & itself.
- Similarly, fill the right array by initializing the last element of the right array with the last element of arrand traversingarr` from n-2 to start.
- Finally the water content for i'th element would be calculated by: waterContent = min(left[i], right[i]) - arr[i] . Summing the content for each element would give the total amount of water stored.

"""

def calculateWater(arr, n):
    # left[i] contains height of tallest bar to the left of i'th bar including itself
    left = [0]*n
 
    # Right [i] contains height of tallest bar to the right of ith bar including itself
    right = [0]*n
 
    # Initialize result
    waterContent = 0
 
    # Put values in left array
    left[0] = arr[0]
    for i in range( 1, n):
        left[i] = max(left[i-1], arr[i])
 
    # Put values in right array
    right[n-1] = arr[n-1]
    for i in range(n-2, -1, -1):
        right[i] = max(right[i + 1], arr[i]);
 
    for i in range(0, n):
        waterContent += min(left[i], right[i]) - arr[i]
 
    return waterContent
 
arr = [0,1,4,6,2,8]
n = len(arr)
print("Maximum water that can be accumulated for [0,1,4,6,2,8] is: ", calculateWater(arr, n))