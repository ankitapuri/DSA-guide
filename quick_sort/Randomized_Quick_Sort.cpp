// C++ program to implement Quick Sort
#include <cstdlib>
#include <iostream>
using namespace std;

       //function to swap two elements

		void swap(int *a, int *b)
		{
			int t = *a;
			*a = *b;
			*b = t;
		}
		/* in the normal quicksort we take last element as a pivot but it can easily have a worst
		 case time complexity of O(n^2) for completely sorted array so to avoid it we use randomized
		 version of the quicksort in which we randomly select pivot and exchange it with the last element
		 so the whole algorithm remains almost the same but the pivot is random */
		
		int partition(int ar[], int p, int r)
		{

			int x,i,j;
			
			//generate a random number in a given range
			int random = (rand() % (r-p+1)) + p;
	    	
	    	//now exchange it with the last element to consider as a pivot
			swap(&ar[random], &ar[r]);
			x = ar[r]; //pivot element
			i = p-1;
			
			for(j = p; j <= r-1; j++)
			{
				if(ar[j] <= x)
				{
					i++;
					
					 swap(&ar[i], &ar[j]);
				}
			}
			
			swap(&ar[i+1], &ar[r]);
			
			return (i+1);
		}
		
		//function to implement QuickSort
		
		void RandomizedQuickSort(int ar[], int p, int r)
		{
			if(p<r)
			{
				int q = partition(ar, p, r);
				
				//sorting elements before and after partition
				
				RandomizedQuickSort(ar, p, q-1);
				RandomizedQuickSort(ar, q+1, r);
			}
		}
		
		//function to display elements of the array
		
		void displayArray(int ar[], int len)
		{
			for(int i = 0; i < len; i++)
			 
			   cout<<ar[i]<<"\t";
   
		}
		
		 //main function to control program execution by calling other functions
		
		int main()
		{
			int arr[10], size;
			
			cout<<"Enter the length of the array"<<endl;
			 
			cin>>size;
			
			cout<<"Enter the elements in an array "<<endl;
			
			 for(int i = 0; i < size; i++ )
			     cin>>arr[i];
			     
			  RandomizedQuickSort(arr, 0, size-1); 
			  
            cout<<"Sorted array: n"<<endl; 
             
             displayArray(arr, size); 
             
       return 0;    
		}