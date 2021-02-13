//C program to implement Selection Sort
 
  #include <stdio.h>
  #include <conio.h>
  
       //function to swap elements
  
		void swap(int *ele1, int *ele2)
		{
			int temp = *ele1;
			*ele1 = *ele2;
			*ele2 = temp;
		}
		
		//function to perform selection sort
		
		void SelectionSort(int arr[], int len)
		{
			int i, j, min;
			
			//finding minimum element in unsorted array
			
			  for(i = 0; i < len-1; i++)
			  {
			  	min = i;
			  	
			  	 for(j = i+1; j < len; j++)
			  	 {
			  	 	if(arr[j] < arr[min])
			  	 	   min = j;
			  	 	   
				   }
				 
				 //swapping minimum element with first element
				 
				 swap(&arr[min], &arr[i]);
				   
			  }
		}
		
		//function to display elements of an array
		
		void displayArray(int arr[], int size) 
         { 
         
            for (int i=0; i < size; i++) 
              printf("%d ", arr[i]); 
              
        printf("\n"); 
        } 
        
        //main function to control program execution by calling other functions
        
        int main()
        {
        	int length;
        	
        	printf("Enter the length of the array ");
        	  scanf("%d",&length);
		
        	int ar[length];
		
        	printf("Enter the elements in the array ");
			   
			   for(int i = 0; i < length; i++)
			       scanf("%d",&ar[i]);
				   
				
			SelectionSort(ar, length); 
			
             printf("Sorted array: \n"); 
             
                displayArray(ar, length); 
                
           return 0; 	     
		}
