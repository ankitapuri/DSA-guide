 //PROGRAM IN C TO IMPLEMENT THE HEAP SORT
 
  #include <stdio.h>
  // Function to swap the the position of two elements
  void swap(int *a, int *b) 
  {
    int temp = *a;
    *a = *b;
    *b = temp;
  }
  
  void heapify(int arr[], int n, int i) {
    // Find largest among root, left child and right child
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;
  
    if (left < n && arr[left] > arr[largest])
      largest = left;
  
    if (right < n && arr[right] > arr[largest])
      largest = right;
  
    // Swap and continue heapifying
    if (largest != i) 
    {
      swap(&arr[i], &arr[largest]);
      heapify(arr, n, largest);
    }
  }
  
  // Main function for heap sort
  void heapSort(int arr[], int n) 
  {
    // Build max heap
    for (int i = n / 2 - 1; i >= 0; i--)
      heapify(arr, n, i);
  
    // Heap sort
    for (int i = n - 1; i >= 0; i--) 
    {
      swap(&arr[0], &arr[i]);
  
      // Heapify root
      heapify(arr, i, 0);
    }
  }
  
  // Print the array sorted
  void printArray(int arr[], int n) 
  {
    for (int i = 0; i < n; ++i)
      printf("%d ", arr[i]);
    printf("\n");
  }
  
  // Driver code
  int main() 
  {
    int n;
    printf("Enter the number of elements to be sorted.\n");
    scanf("%n",&n);
    int arr[n];
    printf("Enter the elements of the array.")
    for(int i=0;i<n;i++)
      scanf("%d",&arr[i]);
    heapSort(arr, n);
    printf("Sorted array is \n");
    printArray(arr, n);
    return 0;
  }
