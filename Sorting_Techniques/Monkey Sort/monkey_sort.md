# The Monkey Sort (also known as 'Bogosort')

->In computer science, bogosort is a **highly inefficient sorting algorithm** based on the generate and test paradigm. (hit and trial method) 


->The function successively generates permutations of its input until it finds one that is sorted.


->The monkey sort works somewhat like what an actual monkey would do if it is asked to sort a given set of (let's say) cards.

->>It will just throw all the cards in the air and let them fall.
Upon falling, it may check whether the cards have fallen in a sorted manner or not.
If they are sorted, it will just return it, otherwise it will continue repeating the same process.

->The monkey-sorying technique make use of the in-built module called *random*.
Hence, for implementing the Monkey Sort Algorithm, we need to import a built-in module named as 'random' in Python.

->>A demonstration on how the random module will be used in Monkey Sort. [random_demo.py](https://github.com/noviicee/Search_and_Sort/blob/main/Sorting%20Algos/Monkey%20Sort/random_demo.py)


->Needless to say, this is a highly inefficient sorting technique, whose statistics can be given as follows-

**Worst complexity: Infinite**

Average complexity: n x n!

Best complexity: n

Space complexity: 1

But it indeed exists, and so I think it can be demonstrated along with the other sorting algorithms just for some fun!
