def linearsearch(arr, x):
   for i in range(len(arr)):# loop will run till n
      if arr[i] == x:# if the element is fount return than index
         return i
   return -1 #if the loop has been ended then return value as -1
arr = ['t','u','t','o','r','i','a','l']
x = 'a' # to find a int arr
print("element found at index "+str(linearsearch(arr,x))) #// calling linearsearch funtion
