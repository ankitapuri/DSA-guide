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

<b>Time Complexity:</b> Time complexity of above implementation of shellsort is O(n2). 
 In the above implementation gap is reduce by half in every iteration. 
 There are many other ways to reduce gap which lead to better time complexity 
 
<b>References:</b>
https://en.wikipedia.org/wiki/Shellsort
