# This code is contributed by Harsh Udai

def binary(arr,low,high,key):
    while(low<=high):
        mid=(low+high)//2
        
        if(arr[mid]==key):
            print(arr[mid],"<- Found!!", "at index",mid)
            break
            
        elif(key not in arr):
            print("Not found")
            break
            
        elif(arr[mid]>key):
            high=mid-1
            
        else:
            low=mid+1
            
        
            
arr=[2,3,4,10,40]
x=10
binary(arr,0,len(arr)-1,x)