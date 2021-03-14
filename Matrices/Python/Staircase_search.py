#Staicase Problem

#Staicase Problem implemented on 2D matrix to find a key(element) in the matrix in which rows and columns are in increasing sorted order. 

# Algorithm : 
# 	In this function, the property of both the row and column sorted can be exploited.
#  We can start from top-right postion of the matrix, because it is the largest element of the row and smallest element of the column.
#  Now, if the key is smaller than that element, it surely means that we should move towards left,thereby excluding the current column.
#  Else, if the key is greater than that element, it surely means that we should move towards bottom,thereby excluding the current row.
#  Time Complexity - O(n) -> since, a row or column is skipped with comparison of just a single element

def staircase(mat, n, key):
    i, j = 0, n-1
    while i <=n-1 and j >=0:
        #When element matches print the element with its position
        if key == mat[i][j]:    
            print ('Key %s found at (%s,%s)' % (key, i+1, j+1)) 
            return
        #When key is smaller than current matrix element,decrease the column number by 1
        if key < mat[i][j]:
            j -= 1
        #When key is greater than current matrix element,go to next row
        else:
            i += 1
    print ('Key %s not found' % (key))

def main():
    r = int(input("Enter the number of rows:")) 
    c = int(input("Enter the number of columns:")) 
    mat = [] 
    print("Enter matrix elements:")
    #Input matrix
    for i in range(r):  
        x=[] 
        for j in range(c):      
             x.append(int(input())) 
        mat.append(x) 
        
    key = int(input("Enter element to be searched:")) 
    #Display matrix
    for i in range(r): 
        for j in range(c): 
            print(mat[i][j], end = " ") 
        print() 
    staircase(mat, len(mat), key)

if __name__ == '__main__':
    main()

#Example

# Enter the number of rows:3
# Enter the number of columns:3
# Enter matrix elements:
# 1
# 2
# 3
# 4
# 5
# 6
# 7
# 8
# 9
# Enter element to be searched:8
# 1 2 3 
# 4 5 6 
# 7 8 9 
# Key 8 found at (3,2)
