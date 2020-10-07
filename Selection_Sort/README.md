# Selection Sort 

## Basic Working
Considering an array is ascending order the selection sort do travers and find the smallest 
element in the list and replace it with the element on the first position of the array. 
Then starting from the second position and do find the smallest and replace it with the 
element on second position of the array. And so on, then start from third postion upto the one 
last element that should be the greatest in the array and would be placed at the last position 
of the list or array. So the total number of passes should be n-1.

![Selection Sort](https://github.com/taneemishere/DSA-guide/blob/main/Selection_Sort/selection.PNG)

## Time Complexity
Time Complexity of Selection Sort is O(n)^2 in all three cases, due to nest loops.

## Space Complexity
As the number swaps or say the replacing takes O(n) time as we have n-1 swaps.\



