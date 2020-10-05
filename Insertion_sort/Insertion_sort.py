def insertion_sort (L):
    n = len (L)
    for index in range (1, n):
        item = L [index]
        j = index - 1
        while j >= 0 and L[j] > item:
            L [j+1] = L [j]
            j = j-1
        L [j+1] = item
if __name__ == "__main__":
    L = input().split()
    insertion_sort (L)
    print (L)
