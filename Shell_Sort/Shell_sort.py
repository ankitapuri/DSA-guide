def shellSort(arr):
    n = len(arr)
    space = n // 2
    while space > 0:
        for i in range(space, n):
            tmp = arr[i]
            j = i
            while j >= space and arr[j-space] > tmp:
                arr[j] = arr[j-space]
                j = j - space
            arr[j] = tmp
        space = space //2
if __name__ == "__main__":
    print("Enter your list:")
    arr = list(map(int, input().split()))
    shellSort(arr)
    print("Sorted list:")
    print(arr)
