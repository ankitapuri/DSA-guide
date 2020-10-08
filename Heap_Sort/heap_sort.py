def heapify(items, n, parent_index):

    largest = parent_index
    left_child_index = parent_index*2 + 1
    right_child_index = parent_index*2 + 2

    if left_child_index < n:
        if items[left_child_index] > items[parent_index]:
            largest = left_child_index
    else:
        return

    if right_child_index < n and items[right_child_index] > items[largest]:
        largest = right_child_index

    if largest != parent_index:
        items[parent_index], items[largest] = items[largest], items[parent_index]
        heapify(items, n, largest)

def heapsort(items):
    n = len(items)

    for i in range(n//2 - 1, -1, -1):
        heapify(items, n, i)

    for i in range(n - 1, 0, -1):
        items[i], items[0] = items[0], items[i]
        heapify(items, i, 0)
