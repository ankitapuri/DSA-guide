# Wave sort

This sorting method is used to sort the array in the form of wave.
Which means every alternate element will be smaller than neighbouring element
for example :

```
arr[0]>=arr[i]<=arr[2]>=arr[3]<=arr[4]>=arr[5]<=...
```
The above example is of wave sort.
We can see that arr[1] is smaller than arr[0] and arr[2].
Similary, arr[3] is smaller than arr[2] and arr[4] and so on.

## Time Complexity 
Time complexity of above solution is 0(n)