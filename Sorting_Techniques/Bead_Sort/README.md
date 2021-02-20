# BEAD SORT

Bead sort (also called gravity sort) is a natural sorting algorithm. Both digital and analog hardware implementations of bead sort can achieve a sorting time of O(n) however, the implementation of this algorithm tends to be significantly slower in software and can only be used to sort lists of positive integers.

This is a perfect example of an algorithm where the hardware implementation is significantly faster than the software implementation is to contrary to the common belief that software has to be faster than corresponding hardware (think of mechanical calculators)

Gravity sort has been developed by Joshua J. Arulanandham, Cristian S. Calude and Michael J. Dinneen in 2002.

## Algorithm
The bead sort operation can be compared to the manner in which beads slide on parallel poles, such as on an abacus. However, each pole may have a distinct number of beads. Initially, it may be helpful to imagine the beads suspended on vertical poles.

 - Step 1: put n rows of beads on m vertical poles from left to right, n is the length of the array to be sorted, m is the max num in the array.

 - Step 2: If we then allow the beads to fall, the rows now represent the same integers in sorted order. Row 1 contains the largest number in the set, while row n contains the smallest.
 
##  Time Complexity:
The algorithm’s run–time complexity ranges from O(1) to O(S) (S is the sum of the input integers) depending on the user’s perspective. Finally, three possible implementations are suggested.

**O(1)**       : Dropping all beads together as a single (simultaneous) operation. This complexity cannot be implemented in practice.

**O(n^1/2)**   : In a realistic physical model that uses gravity, the time it takes to let the beads fall is proportional to the square root of the maximum height, which is proportional to n.

**O(n)**       : Dropping the row of beads in the frame (representing a number) as a distinct operation since the number of rows is equal to n.

**O(S)**       : Dropping each and every bead’ as a separate operation since S is the sum of all the beads.
