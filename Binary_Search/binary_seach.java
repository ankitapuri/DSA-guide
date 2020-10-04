// Java implementation of iterative Binary Search 
class BinarySearch { 

     // Driver method to test above 
     public static void main(String args[]) 
     { 
         BinarySearch ob = new BinarySearch(); 
         int ar[] = { 2, 3, 4, 10, 40 }; 
         int n = ar.length; 
         int x = 10; 
         int result = ob.binarySearch(ar, x); 
         if (result == -1) 
             System.out.println("Element not present"); 
         else
             System.out.println("Element found at "
                                + "index " + result); 
     } 


    // Returns index of x if it is present in ar[], 
    // else return -1 
    int binarySearch(int ar[], int x) 
    { 
        int l = 0, r = ar.length - 1; 
        while (l <= r) { 
            int m = l + (r - l) / 2; 
  
            // Check if x is present at mid 
            if (ar[m] == x) 
                return m; 
  
            // If x greater, ignore left half 
            if (ar[m] < x) 
                l = m + 1; 
  
            // If x is smaller, ignore right half 
            else
                r = m - 1; 
        } 
  
        // if we reach here, then element was 
        // not present 
        return -1; 
    } 
  
} 