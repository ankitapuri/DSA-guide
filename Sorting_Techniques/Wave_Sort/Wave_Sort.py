# Python function to sort the array arr[0..n-1] in wave form, 
# i.e., arr[0] >= arr[1] <= arr[2] >= arr[3] <= arr[4] >= arr[5] 
arr=[]
#Enter the number of inputs.
n = int(input("Enter the total number of elements: "))	
print("Enter the inputs:")
for i in range(n):

    #Input the elements 
    value = int(input())

    #appending elements to the array				
    arr.append(value)					

for i in range(n):
    def sortInWave(arr, n): 
        
        #sort the array 
        arr.sort() 
        
        # Swap adjacent elements 
        for i in range(0,n-1,2): 
            arr[i], arr[i+1] = arr[i+1], arr[i] 
    
# Driver program 
 
sortInWave(arr, len(arr)) 
print("The array after sorting is:")
for i in range(0,len(arr)): 
    print(arr[i])
    