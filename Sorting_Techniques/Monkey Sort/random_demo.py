#A demonstration on how the random module is generally used and will be used in Monkey Sort.

import random
a=[1,2,3,4,5]

#a is any list

random.shuffle(a)
print(a)

#Output-
"""
>>> random_demo.py
[3, 1, 2, 4, 5]

>>> random_demo.py
[4, 3, 2, 5, 1]

>>> random_demo.py
[1, 2, 5, 4, 3]

"""

#Everytime, it gives rise to a new list containing shuffled items from the given list.
