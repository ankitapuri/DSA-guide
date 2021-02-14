# Heap Sort
Heap sort processes the elements by creating the min heap or max heap using the elements of the given array. Min heap or max heap represents the ordering of the array in which root element represents the minimum or maximum element of the array. At each step, the root element of the heap gets deleted and stored into the sorted array and the heap will again be heapified.

The heap sort basically recursively performs two main operations.

1. Build a heap H, using the elements of ARR.
2. Repeatedly delete the root element of the heap formed in phase 1.

## Time Complexity	

* Best Case - Ω(n log (n))
* Average Case - θ(n log (n))	
* Worst case - O(n log (n))

## Algorithm for HEAP_SORT(ARR, N)
```
Step 1: [ Build Heap H ]
        Repeat for i=0 to N-1
        CALL INSERT_HEAP(ARR, N, ARR[ i ])
[END OF LOOP]

Step 2: Repeatedly Delete the root element
        Repeat while N > 0
        CALL Delete_Heap(ARR,N,VAL)
        SET N = N+1
[END OF LOOP]

Step 3: END
