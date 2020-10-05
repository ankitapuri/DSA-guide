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

    // Swapped keeps track of swapping
    int swapped = 0;

    // Run loops two times: one for walking throught the array
    // and the other for comparison
    for (i = 0; i < size - step - 1; ++i) {

      // To sort in descending order, change > to < in this line.
      if (arrayay[i] > arrayay[i + 1]) {
        
        // Swap if greater is at the rear position
        int temp = arrayay[i];
        arrayay[i] = arrayay[i + 1];
        arrayay[i + 1] = temp;
        swapped = 1;
      }
    }

    // If there is not swapping in the last swap, then the array is already sorted.
    if (swapped == 0)
      break;
  }
}

// Function to print an array
void printarrayay(int arrayay[], int size) {
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
    //Initialize array     
    int data[m];
	
    for (i = 0; i < m; i++)
    {
        printf("Enter integer no. %d  :", (i+1));
		scanf("%d", &data[i]);
    }   
    
        //Calculate length of array arr    

  int size = sizeof(data) / sizeof(data[0]);
  bubbleSort(data, size);
  printf("Sorted Array in Ascending Order:\n");
  printarrayay(data, size);
}
