Linear search algorithm finds a given element or key in a list of elements.
This search process starts comparing search element or key with the first element in the list.
If both are matched then result is element found otherwise search element is compared with the next element in the list.
Repeat the same until search element or key is compared with the last element in the list, if that last element also doesn't match, then the result is "Element not found in the list".
That means, the search element is compared with element by element in the list.

Time complexity :-
 i.)Worst case = O(n)
 ii.)Average case = O(n)
 iii.)Best case = O(1) - when the element to find is at the starting index at 0.
 
 Space Complexity = O(1)
 
 Step by step process of a Linear Search:-
 
  Consider the following list of elements and the element to be searched.
    list = [21, 4, 32, 54, 9, 88, 94]
    Element or key to search = 32
    
  Step 1: Search element or key(32) is compared with the first list's element(21).
          [21, 4, 32, 54, 9, 88, 94]
           *
          Both are not matching, so move to next element.
          
  Step 2: Search element or key(32) is compared with the second list's element(4).
          [21, 4, 32, 54, 9, 88, 94]
               *
          Both are not matching, so move to next element.
      
  Step 3:Search element or key(32) is compared with the third list's element(32).
         [21, 4, 32, 54, 9, 88, 94]
                  *
         Both are same, so we stop comparing and display the element found at the list's element index.
