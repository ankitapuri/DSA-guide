# Python program for implementation of Selection Sort 
import sys 
A = [63, 24, 19, 20, 3] 

# Traverse through all array elements 
for i in range(len(A)): 
	
	# Find the minimum element in remaining 
	# unsorted array 
	min_idx = i 
	for j in range(i+1, len(A)): 
		if A[min_idx] > A[j]: 
			min_idx = j 
			
	# Swap the found minimum element with 
	# the first element		 
	A[i], A[min_idx] = A[min_idx], A[i] 

# Driver code
print ("Sorted array")
for i in range(len(A)):
	print("%d" %A[i]),
