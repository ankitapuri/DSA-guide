# Shell Sort

#### Shell short also known as Shell's method is an  in-place comparison sort. It is actually an optimized version of Insertion Sort, that allows the exchange of items that are far apart. 
This algorithm uses insertion sort on a widely spread elements, first to sort them and then sorts the less widely spaced elements. This spacing is termed as interval.The interval between the elements is gradually decreased based on the sequence used. 

### Here's a visual representation for some better understandig. 

![tenor](https://user-images.githubusercontent.com/48592289/95422829-a3399300-095d-11eb-9e67-0a9e75ae7bc2.gif)


### Working of ShellSort
#### 1. Given- This unsorted array.
<img width="572" alt="shell-sort-0 0" src="https://user-images.githubusercontent.com/48592289/95426551-b4859e00-0963-11eb-9223-acceb646edc0.png">

#### 2. We find the interval as N/2 (using Shell's optimal sequence).
   So, for Loop 1, interval gap is 8/2= 4. We compare elements and swap if required(ascending or descending,here we are doing ascending). Here, elements at the are compared like this-> 0th with 4th, 1st with 5th, 2nd with 6th and so on..
<img width="646" alt="shell-sort-0 1" src="https://user-images.githubusercontent.com/48592289/95427757-af295300-0965-11eb-9c25-9e9a1a3f58b1.png">

 #### 3. For Loop 2, interval is now decreased to N/2= 4/2= 2. 
 Again we follow the same procedure, compare elements(starting form 0 index) with gap 2 and swap elements if required.
 **Now comes the twist.**
  Suppose we have swapped elements at position 2 and 4. Now we will not go ahead at 3rd position element. Instead we will start comparing elements before that with the same gap. So here we compare 2nd position element with 0th position and go backwards until it is sorted or start position is reached and then go ahead.

<img width="572" alt="shell-sort-0 4" src="https://user-images.githubusercontent.com/48592289/95429487-18aa6100-0968-11eb-9942-8089d1367240.png">


This process is repeated as shown below:

  <img width="572" alt="shell-sort-0 5" src="https://user-images.githubusercontent.com/48592289/95430066-dafa0800-0968-11eb-8b50-89b2cad5d734.png">

   
#### 4. For Loop 3 and gap=1 becomes 1 and its completely sorted.

<img width="572" alt="shell-sort-0 6" src="https://user-images.githubusercontent.com/48592289/95430364-5065d880-0969-11eb-9b62-84d7adb70010.png">

#### Likewise we can sort for N number of array elements.


### Complexity

#### Shellsort is not stable: it may change the relative order of elements with equal values. It is an adaptive sorting algorithm in that it executes faster when the input is partially sorted.

Worst case complexity = O(n*n),
Best case             = O(n*logn),
Average case          = Depends on Gap sequence.

Some of the optimal sequences used are:

#### Shell's original sequence: N/2 , N/4 , …, 1

#### Knuth's increments: 1, 4, 13, …, (3k – 1) / 2

#### Sedgewick's increments: 1, 8, 23, 77, 281, 1073, 4193, 16577...4j+1+ 3·2j+ 1

 #### Hibbard's increments: 1, 3, 7, 15, 31, 63, 127, 255, 511…
 
 #### Papernov & Stasevich increment: 1, 3, 5, 9, 17, 33, 65,...
 
 #### Pratt: 1, 2, 3, 4, 6, 9, 8, 12, 18, 27, 16, 24, 36, 54, 81....
 
 



