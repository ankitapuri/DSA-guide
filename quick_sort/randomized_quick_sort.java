// Java program for implementation of randomized QuickSort 
import java.util.*;
public class randomized_quick_sort 
{ 
	/* in the normal quicksort we take last element as a pivot but it can easily have a worst case time complexity of O(n^2) for
	completely sorted array 
	so to avoid it we use randomized version of the quicksort in which we randomly select pivot and exchange it with the last element
	so the whole algorithm remains almost the same but the pivot is random */
	public static Random random = new Random();
	int partition(int arr[], int low, int high) 
	{ 
		//first generate random number in the given range
	    int x = random.nextInt(high - low) + low;

	    //now exchange it with the last element to consider as a pivot
	    int reg = arr[high];
	    arr[high] = arr[x];
	    arr[x] = reg;

	    //now run the normal quick sort as usual.
		int pivot = arr[high]; 
		int i = (low-1); // index of smaller element 
		for (int j=low; j<high; j++) 
		{ 
			// If current element is smaller than the pivot 
			if (arr[j] < pivot) 
			{ 
				i++; 

				// swap arr[i] and arr[j] 
				int temp = arr[i]; 
				arr[i] = arr[j]; 
				arr[j] = temp; 
			} 
		} 

		// swap arr[i+1] and arr[high] (or pivot) 
		int temp = arr[i+1]; 
		arr[i+1] = arr[high]; 
		arr[high] = temp; 

		return i+1; 
	} 


	/* The main function that implements QuickSort() 
	arr[] --> Array to be sorted, 
	low --> Starting index, 
	high --> Ending index */
	void sort(int arr[], int low, int high) 
	{ 
		if (low < high) 
		{ 
			/* pi is partitioning index, arr[pi] is 
			now at right place */
			int pi = partition(arr, low, high); 

			// Recursively sort elements before 
			// partition and after partition 
			sort(arr, low, pi-1); 
			sort(arr, pi+1, high); 
		} 
	} 

	/* A utility function to print array of size n */
	static void printArray(int arr[]) 
	{ 
		int n = arr.length; 
		for (int i=0; i<n; ++i) 
			System.out.print(arr[i]+" "); 
		System.out.println(); 
	} 

	// Driver program 
	public static void main(String args[]) 
	{ 
		int arr[] = {12, 321, 45, 8, 2, 0}; 
		int n = arr.length; 

		randomized_quick_sort ob = new randomized_quick_sort(); 
		ob.sort(arr, 0, n-1); 

		System.out.println("sorted array"); 
		printArray(arr); 
	} 
} 
