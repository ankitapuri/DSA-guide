#  Reverse a string    
# using  slice syntax   
# reverse(str) Function to reverse a string   
def reverse(str):   
    str = str[::-1]   
    return str   
    
s = input() 
print ("The original string  is : ",s)   
print ("The reversed string is : ",reverse(s))
