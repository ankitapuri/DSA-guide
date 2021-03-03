def exponential_search(search_list, left, right, target):
    """
    Exponential Search by checking for 0th index individually.

    Checking the Index until the index is greater than or equal to the target element.
    Or End of List is reached. This is achieved using Binary Search.
    """
    if search_list[0] == target:
        return "Found at Index Zero"
    i = 1
    while i < len(search_list) and search_list[i] <= target:
        # Increasing at exponential level (power of 2)
        i *= 2
    index = binary_search(search_list, i // 2, min(i, len(search_list) - 1), target)
    return index


def binary_search(search_list, left, right, target):
    """
    Binary Search for a Particular possible range.
    """
    if left > right:
        return "Element Not Available"
    middle = (left + right) // 2
    if search_list[middle] == target:
        return "Found at Index " + str(middle)
    elif search_list[middle] > target:
        return binary_search(search_list, left, middle - 1, target)
    else:
        return binary_search(search_list, middle + 1, right, target)


def main():
    """
    Main driver
    """
    search_list = list(map(int,
                           input("Enter List [Whitespace separated]:\n").split()))
    search_value = int(input("Enter Target:\n"))

    print("Sorted list:", sorted(search_list))
    print(exponential_search(sorted(search_list), 0, len(search_list) - 1, search_value))


main()

"""
Complexity of Algorithm - O(log n)

n - the position where the element lies or is supposed to lie

Test Case

```
Enter List [Whitespace separated]
5 8 13 2 98 1 6
Enter Target
13
Sorted list: [1, 2, 5, 6, 8, 13, 98]
Found at Index 5
```
"""
