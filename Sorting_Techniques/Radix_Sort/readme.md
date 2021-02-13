Radix sort is a sorting technique that sorts the elements by first grouping the individual digits of the same place value. Then, sort the elements according to their increasing/decreasing order.
Suppose, we have an array of 8 elements. First, we will sort elements based on the value of the unit place. Then, we will sort elements based on the value of the tenth place. This process goes on until the last significant place.
How Radix Sort Works?
Find the largest element in the array, i.e. max. Let X be the number of digits in max. X is calculated because we have to go through all the significant places of all elements.
Use any stable sorting technique to sort the digits at each significant place. We have used counting sort for this.

Sort the elements based on the unit place digits (X=0).

                                      Radix Sort Algorithm
        radixSort(array)
          d <- maximum number of digits in the largest element
          create d buckets of size 0-9
          for i <- 0 to d
            sort the elements according to ith place digits using countingSort

        countingSort(array, d)
          max <- find largest element among dth place elements
          initialize count array with all zeros
          for j <- 0 to size
            find the total count of each unique digit in dth place of elements and
            store the count at jth index in count array
          for i <- 1 to max
            find the cumulative sum and store it in count array itself
          for j <- size down to 1
            restore the elements to array
            decrease count of each element restored by 1
