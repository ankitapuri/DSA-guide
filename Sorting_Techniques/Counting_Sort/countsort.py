#Counting sort algorithm in Python
'''
Counting sort works when you know the largest/biggest/maximum number of your list. First input the largest number. Then input the list.
print("What is the maximum number in your list?")
max_num = int(input()) #takes input the largest number in the list
print("Input your list:")
L = list(map(int, input().split())) 
count = [0]*max_num
for x in L:
    count[x] += 1
sorted_list = []
for index, value in enumerate(count):
    if value > 0: sorted_list.extend([index]*value)
print("Sorted List:")
print(sorted_list)
'''Sample code run
What is the maximum number in your list?
10
Input your list:
5 1 7 3 4 5 4 9 8
Sorted List:
[1, 3, 4, 4, 5, 5, 7, 8, 9]
