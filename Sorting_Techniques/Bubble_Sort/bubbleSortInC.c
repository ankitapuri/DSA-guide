/*

Bubble Sort Algorithm :-

bubbleSort(array)
  for i <- 1 to indexOfLastUnsortedElement-1
    if leftElement > rightElement
      swap leftElement and rightElement
end bubbleSort

*/



#include <stdio.h>

void bubbleSort(int arrayay[], int size) {
  int step,i;	
  for (step = 0; step < size - 1; ++step) {

   
    int swapped = 0;                            //TODO: Keep track of swapping

    
    
    for (i = 0; i < size - step - 1; ++i) {     //TODO: Run loops two times: one for walking throught the array and the other for comparison

      
      if (arrayay[i] > arrayay[i + 1]) {        //TODO: Sort in descending order, change > to < in this line.
        
        
        int temp = arrayay[i];                  //TODO: Swap if greater is at the rear position
        arrayay[i] = arrayay[i + 1];
        arrayay[i + 1] = temp;
        swapped = 1;
      }
    }

   
    if (swapped == 0)                            //TODO: If there is not swapping in the last swap, then the array is already sorted.
      break;
  }
}


void printarrayay(int arrayay[], int size) {     //TODO: Function to print an array
	int i;
  for (i = 0; i < size; ++i) {
    printf("%d  ", arrayay[i]);
  }
  printf("\n");
}

// Driver code
int main() {
  
  int i,m;
  printf("Enter number of elements in the array \n");
    scanf("%d", &m);
        
    int data[m];                                 //TODO: Initialize array
	
    for (i = 0; i < m; i++)
    {
        printf("Enter integer no. %d  :", (i+1));
		scanf("%d", &data[i]);
    }   
    
                                                 //TODO: Calculate length of array arr    

  int size = sizeof(data) / sizeof(data[0]);
  bubbleSort(data, size);
  printf("Sorted Array in Ascending Order:\n");
  printarrayay(data, size);
}
