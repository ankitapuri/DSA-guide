# SHELL SORT

Shell sort is an algorithm that first sorts the elements far apart from each other and successively reduces the interval between the elements to be sorted.
It is a generalized version of insertion sort.

In shell sort, elements at a specific interval are sorted. The interval between the elements is gradually decreased based on the sequence used. 
The performance of the shell sort depends on the type of sequence used for a given input array.

The array is divided into sub-arrays and then insertion sort is applied. The algorithm is:
<ol>
  <li> Calculate the value of the ​gap .</li>
  <li> Divide the array into these sub-arrays.</li>
  <li> Apply the insertion sort.</li>
  <li> Repeat this process until the complete list is sorted.</li>
</ol>

Note: This algorithm will sort in ascending order.

## <b>Time Complexity:</b> 
### Worst Case Complexity: less than or equal to O(n2)
    Worst case complexity for shell sort is always less than or equal to O(n2).
    According to Poonen Theorem, worst case complexity for shell sort is Θ(Nlog N)2/(log log N)2) or Θ(Nlog N)2/log log N) or Θ(N(log N)2) or something in between.
### Best Case Complexity: O(n*log n)
    When the array is already sorted, the total number of comparisons for each interval (or increment) is equal to the size of the array.
### Average Case Complexity: O(n*log n)
    It is around O(n1.25).
    


## Visualisation
![Shell Sort GIF](https://upload.wikimedia.org/wikipedia/commons/d/d8/Sorting_shellsort_anim.gif)
