a = []					
number = int(input("Enter the total number of elements: "))	#Enter the number of inputs.
print("Enter the inputs:")
for i in range(number):
    value = int(input())				#Input the elements 
    a.append(value)					#appending elements to the array

for i in range(number):		#traverses throughout the array
    for j in range(number - 1):	#this loop swaps if the element is greater than the next element 
        if(a[j] > a[j + 1]):
             temp = a[j]
             a[j] = a[j + 1]
             a[j + 1] = temp

print("The Sorted List in Ascending Order : ", a) #Prints the sorted list
