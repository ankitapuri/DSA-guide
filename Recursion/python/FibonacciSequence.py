# Python program to display the Fibonacci sequence

def recur_fibo(n):
   if n <= 1:
       return n   # if n is less than equal to 1 then return that number itself
   else:
       return(recur_fibo(n-1) + recur_fibo(n-2)) #calling function for n-1 and n-2 to add the last two terms

nterms = 10 #declaring a variable named nterms having value 10

# check if the number of terms is valid
if nterms <= 0:
   print("Plese enter a positive integer")
else: # as value of nterms is greater than n , else part will be executed
   print("Fibonacci sequence:") 
   for i in range(nterms): # this will print fibonnaci numbers upto 10 as i varies from 1 to nterms
       print(recur_fibo(i))
