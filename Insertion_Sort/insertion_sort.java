// Java program for implementation of Insertion Sort 
class InsertionSort { 

    public static void main(String args[]) 
    { 
        int ar[] = { 12, 11, 13, 5, 6 }; 
  
        InsertionSort ob = new InsertionSort(); 
        ob.insertion_sort(ar); 
  
        printaray(ar); 
    } 

    //Function to sort aray using insertion sort
    void insertion_sort(int ar[]) 
    { 
        int n = ar.length; 
        for (int i = 1; i < n; ++i) { 
            int key = ar[i]; 
            int j = i - 1; 
  
            // Move elements of ar[0..i-1], that are greater than key, to one position ahead of their current position 

            while (j >= 0 && ar[j] > key) { 
                ar[j + 1] = ar[j]; 
                j = j - 1; 
            } 
            ar[j + 1] = key; 
        } 
    } 
  
    // A utility function to print aray of size n
    static void printaray(int ar[]) 
    { 
        int n = ar.length; 
        for (int i = 0; i < n; ++i) 
            System.out.print(ar[i] + " "); 
  
        System.out.println(); 
    } 
  
}