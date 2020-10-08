# Python implementation of Jump search algorithm

from math import floor,sqrt

def jumpSearch(lst, num):
    n = len (lst)
    
    # calculate block size to jump
    step = floor(sqrt(n))
    prev = 0
    
    while lst[min(step, n)-1] < num:
        prev = step
        step += floor(sqrt(n))
        if prev >= n: return -1 # num not present in list
    # linear search through block for num
    while lst[prev] < num:
        prev += 1;
        if prev == min(step, n): return -1 # num not present in list
    if lst[prev] == num: return prev #num is present at position prev
    
    return -1

if __name__ == "__main__":
    print("Enter your number list: ")
    lst = list(map(int, input().split()))
    print("Enter number to search: ")
    num = int(input())
    res = jumpSearch(lst, num);
    if (res < 0): print ("{} is not present in your list".format(num))
    else: print ("{} is present at position {}".format(num, res))
    
