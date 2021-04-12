""" Contributed by Rishabh Singhal, github: @rish-singhal """
""" Program to merge sorted arrays without extra space"""


def merge(list_1, list_2):
    """ Function to merge sorted arrays without extra space """

    # iterating over list
    for it1, _ in enumerate(list_1):
    	# comparing smallest element of list_2 with current element in list_1
        if list_1[it1] <= list_2[0]:
            # if it is less than continue, as no changes will be required
            continue

        # else swapping list_1[it1] and list_2[0]
        temp = list_1[it1]
        list_1[it1] = list_2[0]
        list_2[0] = temp

        # sorting list_2, so that smallest element comes at 0th position
        list_2.sort()

if __name__ == "__main__":
    # taking array 1 as input
    arr_1 = [*map(int, input("Enter First Array:\n").strip().split())]
    # taking array 2 as input
    arr_2 = [*map(int, input("Enter Second Array:\n").strip().split())]

    # calling merge function
    merge(arr_1, arr_2)
    
    # print merged sorted array
    print("Merged Sorted Array\n -----------")
    print(arr_1, arr_2)
