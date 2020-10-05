print("What is the maximum number in your list?")
max_num = int(input())
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
