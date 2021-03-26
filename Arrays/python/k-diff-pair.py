from typing import List
import collections

def findPairs(nums: List[int], k: int):
        numsToAmount = collections.defaultdict(int) #maps each num to number of occurrence of that num
        numsToComplement = {} #numsToComplement[num] = num - k
        for num in nums:
            numsToAmount[num] += 1
            numsToComplement[num] = num - k

        
        ans = 0
        pairs = set() #to avoid duplicates
        vals = list(numsToAmount) #create list to avoid dictionary change error in Leetcode (I didn't need to when running locally)
        for val in vals:
            complement = numsToComplement[val]
            #print("val:{}, complement:{}".format(val,complement))
            #if pair is not used and a complement exists, then include that pair
            if complement not in pairs:
                if k == 0:
                    # complement is val, so we need at least 2 of that value in arr to form the pair
                    if numsToAmount[complement] >= 2:
                        pairs.add((val,complement))
                        ans += 1
                else:
                    #complement isn't val, so we just need at least one complement to exist
                    if numsToAmount[complement] >= 1:
                        pairs.add((val,complement))
                        ans += 1
                
        #print("numsToAmount={}, numsToComplement={}".format(numsToAmount,numsToComplement))
        #print("pairs: {}".format(pairs))
        return ans

# number of elements 
n = int(input("Enter number of elements in the list : ")) 
  
# Below line read inputs from user using map() function  
arr = list(map(int,input("\nEnter the elements separated by spaces : ").strip().split()))[:n]

# number of pairs 
k = int(input("Enter number of diferent pairs : ")) 

print(findPairs(arr,k))
    