# This code is contributed by Harsh Udai

def binary(arr,low,high,key):
    while(low<=high):#it will run the loop while startIndex is less than or equal to endIndex
        mid=(low+high)//2
        
        if(arr[mid]==key):
            print(arr[mid],"<- Found!!", "at index",mid)
            break # if value of element is equal to the array at middleIndex then return that index 
            
        elif(key not in arr):
            print("Not found")
            break
            
        elif(arr[mid]>key): # if the value of key is less than value of the array at middleIndex then decrease high by mid-1
            high=mid-1
            
        else:
            low=mid+1#else store the value of low as mid+1
            
        
            
arr=[2,3,4,10,40]
x=10
binary(arr,0,len(arr)-1,x) #calling binary search funtion
