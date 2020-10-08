Jump Search is an algorithm for searching an element in a sorted array. Rather than comparing the given key with all the elements (like in Linear Search), it creates a block and checks if the element is contained in that block. If the element is not contained in a block, it shifts the entire block. Once it is confirmed that the element lies in a particular block, it performs a linear search operation within the block to find the element.
For example, we want to search the integer 21 in an array arr = [1, 4, 7, 9, 10, 17, 21, 28, 44]. Here the size of the array is, n=9. Let’s say we take the size of the block as, m=3.
Jump search will find the value according to the following steps:
Step 1: Assign the lower bound of block l=0, and the upper bound h=3. 
Step 2: Check whether key lies between lower bound index and upper bound index. It doesn’t so, l=l+m and h=h+m. That is, l=3 and h=6.
Step 3: Check again whether element lies within new bounds. It doesn’t so, l=6 and h=9. However last index of array is 8, we just check between l and the last index of our array.
Step 4: We linearly search for key from index 6 to index 8. Key is found at index 6.
Time complexity of Jump Search:
 In worst case, we would have to check till the last block, and then check till the last element within the last block. So the total number of blocks=(number of elements in array)/(no. of elements in block) = n/m. We perform m-1 comparisons in the last block, in the worst case. So total number of comparisons in the worst case will be (n/m)+m-1.
What should be the optimum size of block for an array?
The optimum size should be such that the no. of comparisons is minimum. That means the derivative of the number of comparisons with respect to the block size should be 0. So, d/dm ((n/m)+m-1)=0. Solving this we will get m=√n. Thus optimum size of block should be when length of array is √n. 

 
