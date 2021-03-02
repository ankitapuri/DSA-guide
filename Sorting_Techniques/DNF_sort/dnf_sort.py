#function for sorting 0's,1's and 2's
def dnf_sort( a): 
    start = 0
    end = len(a) - 1
    mid = 0
    while mid <= end: 
        if a[mid] == 0: 
            a[start], a[mid] = a[mid], a[start] 
            start = start + 1
            mid = mid + 1
        elif a[mid] == 1: 
            mid = mid + 1
        else: 
            a[mid], a[end] = a[end], a[mid]  
            end = end - 1
    return a 
#output of the given array    
arr = [0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1]
arr = dnf_sort( arr) 
print ("output:")
for p in arr: 
        print (p) 
