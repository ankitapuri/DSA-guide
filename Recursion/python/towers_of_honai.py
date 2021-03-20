## Tower of Hanoi
# Given the number of disks and the three towers labels, the program will displays the moves required to solve.

def TowerOfHanoi(numDisks, source, intermediate, destination):  
    if(numDisks == 1):  
        print("Move Disk 1 From Pole {} to Pole {}".format(source, destination))  # if there is only one disk then it directly moved from source to destination pole 
        return   
    #function call with n-1 disks and pole order from source to intermediate
    TowerOfHanoi(numDisks - 1, source, destination, intermediate)  
    print("Move Disk {} From Pole {} to Pole {}".format(numDisks, source, destination))  #function call itself again and again until it satisify the base condition function call itself again and again until it satisify the base condition 
    #After disk is changed from source to intermediate now again we call function with n-1 disk and now the disk is moved from intermediate to destination
    TowerOfHanoi(numDisks - 1, intermediate, source, destination)  

numDisks = int(input("Enter Number of Disks: "))

# Source : A, Intermediate : B, Destination : C  
# A, C, B are the name of Poles 
TowerOfHanoi(numDisks, 'A', 'B', 'C')

# Input : 3
# Output :
# Enter Number of Disks: 3                                                                                              
# Move Disk 1 From Pole A to Pole C                                                                                     
# Move Disk 2 From Pole A to Pole B                                                                                     
# Move Disk 1 From Pole C to Pole B                                                                                     
# Move Disk 3 From Pole A to Pole C                                                                                     
# Move Disk 1 From Pole B to Pole A                                                                                     
# Move Disk 2 From Pole B to Pole C                                                                                     
# Move Disk 1 From Pole A to Pole C

# Input : 2
# Output :
# Enter Number of Disks: 2                                                                                              
# Move Disk 1 From Pole A to Pole B                                                                                     
# Move Disk 2 From Pole A to Pole C                                                                                     
# Move Disk 1 From Pole B to Pole C









