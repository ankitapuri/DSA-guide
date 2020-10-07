// C++ program to implement Quick Sort

#include <iostream>
using namespace std;

       //function to swap two elements

		void swap(int *a, int *b)
		{
			int t = *a;
			*a = *b;
			*b = t;
		}
		
		/*A  function  that takes last element as pivot, places 
           the pivot element at its correct position in sorted 
             array, and places all smaller (smaller than pivot) 
              to left of pivot and all greater elements to right of pivot */
		
		int partition(int ar[], int p, int r)
		{
			int x,i,j;
			
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
		
		void QuickSort(int ar[], int p, int r)
		{
			if(p<r)
			{
				int q = partition(ar, p, r);
				
				//sorting elements before and after partition
				
				QuickSort(ar, p, q-1);
				QuickSort(ar, q+1, r);
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
			     
			  QuickSort(arr, 0, size-1); 
			  
            cout<<"Sorted array: n"<<endl; 
             
             displayArray(arr, size); 
             
       return 0;    
		}