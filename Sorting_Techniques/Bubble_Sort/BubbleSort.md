# Bubble Sort
Bubble Sort is the simplest sorting algorithm that works by repeatedly swapping the adjacent elements if they are in wrong order. After repeatedly passing through an array every time, let, we found **N1** is greater than **N2** and it is placed before **N2**, then we swap those numbers (N1,N2) -> (N2,N1)  [if N1>N2]
<br>Example:
```
take array[]={5,1,4,2,8}

First Pass:
( 5 1 4 2 8 ) –>  ( 1 5 4 2 8 ),  Sswaps since 5 > 1.
( 1 5 4 2 8 ) –>  ( 1 4 5 2 8 ),  Swap since 5 > 4
( 1 4 5 2 8 ) –>  ( 1 4 2 5 8 ),  Swap since 5 > 2
( 1 4 2 5 8 ) –>  ( 1 4 2 5 8 ),  Now, since these elements are already in order (8 > 5), algorithm does not swap them.

Second Pass:
( 1 4 2 5 8 ) –> ( 1 4 2 5 8 )
( 1 4 2 5 8 ) –> ( 1 2 4 5 8 ), Swap since 4 > 2
( 1 2 4 5 8 ) –> ( 1 2 4 5 8 )
( 1 2 4 5 8 ) –> ( 1 2 4 5 8 )
Now, the array is already sorted, but our algorithm does not know if it is completed. The algorithm needs one whole pass without any swap to know it is sorted.

Third Pass:
( 1 2 4 5 8 ) –> ( 1 2 4 5 8 )
( 1 2 4 5 8 ) –> ( 1 2 4 5 8 )
( 1 2 4 5 8 ) –> ( 1 2 4 5 8 )
( 1 2 4 5 8 ) –> ( 1 2 4 5 8 )
```
Now we got our Sorted array. 
aka [1, 2, 4, 5, 8]
