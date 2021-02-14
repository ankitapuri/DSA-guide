# Linear Search
Linear search or sequential search is a method for finding an element within a list. It sequentially checks each element of the list until a match is found or the whole list has been searched.

## Algorithm
```
 
  Consider the following list of elements and the element to be searched.
    list = [21, 4, 32, 54, 9, 88, 94]
    Element or key to search = 32
    
  Step 1: Search element or key(32) is compared with the first list's element(21).
          [21, 4, 32, 54, 9, 88, 94]
 
          Both are not matching, so move to next element.
          
  Step 2: Search element or key(32) is compared with the second list's element(4).
          [21, 4, 32, 54, 9, 88, 94]
               
          Both are not matching, so move to next element.
      
  Step 3:Search element or key(32) is compared with the third list's element(32).
         [21, 4, 32, 54, 9, 88, 94]
            
         Both are same, so we stop comparing and display the element found at the list's element index.
```
### Time complexity 
* Worst case = O(n)
* Average case = O(n)
* Best case = O(1) - when the element to find is at the starting index at 0.

### Space Complexity = O(1)
