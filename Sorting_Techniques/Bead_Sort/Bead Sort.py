def beadsort(input_list):
    return_list = []
    transposed_list = [0] * max(input_list)                            #TODO: column of input beads and laying it out flat

    for num in input_list:
        transposed_list[:num] = [n + 1 for n in transposed_list[:num]] #TODO: Drop the beads. To de-transpose

    for _ in input_list:
        return_list.append(sum(n > 0 for n in transposed_list))        #TODO: Counting values > 0; True == 1 and False == 0.
        transposed_list = [n - 1 for n in transposed_list]             #TODO: Remove the 'bottommost row' by subtracting 1 from each element.

    return return_list                                                 #TODO: The resulting list is sorted in descending order

n = int(input("Enter length of the array: "))                          #TODO: Get length of array
arr = []
print("Enter each element of array and press Enter - \n")              #TODO: Get the elements of array
for i in range(n):
    num = int(input())
    arr.append(num)
farr = beadsort(arr)                                                   #TODO: Calling beadsort function
print(farr)                                                            #TODO: Printing sorted array
