#include <stdio.h>

void insertionSort(int array[], int size) {
  for (int step = 1; step < size; step++) {
    int key = array[step];
    int j = step - 1;

    // Compare key with each element on the left of it until an element smaller than
    // it is found.
    // For descending order, change key<array[j] to key>array[j].
    while (key < array[j] && j >= 0) {
      array[j + 1] = array[j];
      --j;
    }
    array[j + 1] = key;
  }
}

// Function to print an array
void printArray(int array[], int size) {
  for (int i = 0; i < size; i++) {
    printf("\n%d ", array[i]);
  }
}

// Driver code
int main() {
  int data[100], size;
  printf("\nEnter size of array\t");
  scanf("%d", &size);
  for (int i = 0; i < size; i++) {
    scanf("%d", &data[i]);
  }
  insertionSort(data, size);
  printf("\nSorted array in ascending order after Insertion Sort:\n");
  printArray(data, size);
}