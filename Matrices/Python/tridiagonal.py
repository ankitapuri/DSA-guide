
# Take the matrix order as input from the user
order = int(input("Enter the order of matrix : "))
print()

# Calculating the no. of non-zero elements in the matrix
nonZeroElements = 3 * order - 2

# Declearing matrix
matrix = [[]]

# To store the non-zero elements
elements = [0] * nonZeroElements

# Take the non-zero elements as input from the user
print("Enter " , nonZeroElements , " non-zero elements")
print()

for i in range(nonZeroElements):
	print("Enter element " , i + 1 , " : " , end = "")
	elements[i] = int(input())

k = 0

# Forming the tridiagonal matrix
for i in range(order):
	# To store the current row of the matrix
	row = []
	for j in range(order):
		if(i - j == 0):
			row.append(elements[k])
			k += 1
		elif(i - j == -1):
			row.append(elements[k])
			k += 1
		elif(i - j == 1):
			row.append(elements[k])
			k += 1
		else:
			row.append(0)
	matrix.append(row)

# Printing the tridiagonal matrix
for row in matrix:
	for column in row:
		print(column , end = " ")
	print()

