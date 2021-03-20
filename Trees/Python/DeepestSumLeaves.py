"""
Problem Statement:
Calculate the Sum of nodes at maximum depth of a Binary createNode. Given a root node to a createNode, find the sum of all the leaf nodes which are at maximum depth from root node.


Approach:

# While traversing the nodes compare the level of the node with max_level (Maximum level till the current node). If the current level
 exceeds the maximum level,update the max_level as current level.If the max level and current level are same,add the root data to current sum. 

"""

sum = [0] 
max_level = [-(2**32)] 

# Binary createNode node 
class createNode:
    def __init__(self, data):
        self.l = None
        self.r = None
        self.d = data
    def insert(self, data):
        if self.d:
            if data < self.d:
                if self.l is None:
                    self.l = createNode(data)
                else:
                    self.l.insert(data)
            elif data > self.d:
                if self.r is None:
                    self.r = createNode(data)
                else:
                    self.r.insert(data)
        else:
            self.d = data
    def getTree(self):
        if self.l:
            self.l.getTree()
        print( self.d)
        if self.r:
            self.r.getTree()
	

def sumOfNodesAtMaxDepth(ro, level): 
	
	if(ro == None): 
		return
	
	if(level > max_level[0]): 
		sum[0] = ro.d 
		max_level[0] = level 
	
	elif(level == max_level[0]): 
		sum[0] = sum[0] + ro . d 
	
	sumOfNodesAtMaxDepth(ro . l, level + 1) 
	sumOfNodesAtMaxDepth(ro . r, level + 1) 

# number of elements in the binary tree
n = int(input("Enter number of elements in the binary tree : ")) 
  
# Below line read inputs from user using map() function  
arr = list(map(int,input("\nEnter the node data values separated by spaces : ").strip().split()))[:n]

root = createNode(arr[0])
for i in range(1,n):
    temp = root
    temp.insert(arr[i])


sumOfNodesAtMaxDepth(root, 0) 
# root.getTree()
print(sum[0])