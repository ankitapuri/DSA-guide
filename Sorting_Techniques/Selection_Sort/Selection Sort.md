# Selection Sort 

## Basic Working
Considering an array is ascending order the selection sort do travers and find the smallest 
element in the list and replace it with the element on the first position of the array. 
Then starting from the second position and do find the smallest and replace it with the 
element on second position of the array. And so on, then start from third postion upto the one 
last element that should be the greatest in the array and would be placed at the last position 
of the list or array. So the total number of passes should be n-1.
## Algorithm
```
Step 1: Select smallest element present in the given array.
Step 2: Put that element in the beginning of the array.
Step 3: Repeat step 1 and 2 for rest of the elements until you get a sorted array.
```
## Example
```
arr[] = 64 25 12 22 11

// Find the minimum element in arr[0...4]
// and place it at beginning
11 25 12 22 64

// Find the minimum element in arr[1...4]
// and place it at beginning of arr[1...4]
11 12 25 22 64

// Find the minimum element in arr[2...4]
// and place it at beginning of arr[2...4]
11 12 22 25 64

// Find the minimum element in arr[3...4]
// and place it at beginning of arr[3...4]
11 12 22 25 64 
```

## Time Complexity
Time Complexity of Selection Sort is O(n)^2 in all three cases, due to nest loops.

## Space Complexity
As the number swaps or say the replacing takes O(n) time as we have n-1 swaps.

## Visualisation
![Selection Sort GIF](https://upload.wikimedia.org/wikipedia/commons/9/94/Selection-Sort-Animation.gif)



