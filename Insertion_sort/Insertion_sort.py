def insertion_sort (L):
    n = len (L)
    for i in range (1, n):
        item = L [i]
        j = i - 1
        while j >= 0 and L[j] > item:
            L [j+1] = L [j]
            j = j-1
        L [j+1] = item
