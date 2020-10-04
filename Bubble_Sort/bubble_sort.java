// Java program for implementation of Bubble Sort 
class BubbleSort 
{ 
    void bubbleSort(int ar[]) 
    { 
        int n = ar.length; 
        for (int i = 0; i < n-1; i++) 
            for (int j = 0; j < n-i-1; j++) 
                if (ar[j] > ar[j+1]) 
                { 
                    // swap ar[j+1] and ar[j] 
                    int temp = ar[j]; 
                    ar[j] = ar[j+1]; 
                    ar[j+1] = temp; 
                } 
    } 
  
    /* Prints the aray */
    void printaray(int ar[]) 
    { 
        int n = ar.length; 
        for (int i=0; i<n; ++i) 
            System.out.print(ar[i] + " "); 
        System.out.println(); 
    } 
  
    // Driver method to test above 
    public static void main(String args[]) 
    { 
        BubbleSort ob = new BubbleSort(); 
        int ar[] = {64, 34, 25, 12, 22, 11, 90}; 
        ob.bubbleSort(ar); 
        System.out.println("Sorted aray"); 
        ob.printaray(ar); 
    } 
} 