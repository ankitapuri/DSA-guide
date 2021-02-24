#include <stdio.h>

int main()
{
  int array[100], search, c, n;

  printf("Enter the number of elements in array\n");
  scanf("%d", &n); // enter number of elements

  printf("Enter %d integer(s)\n", n);

  for (c = 0; c < n; c++)// loop will run till n
    scanf("%d", &array[c]);

  printf("Enter a number to search\n");
  scanf("%d", &search); // enter the value of search

  for (c = 0; c < n; c++)
  {
    if (array[c] == search)    // if the element is fount return than index
    {
      printf("%d is present at index %d.\n", search, c+1);// if the element is found print than index
      break;
    }
  }
  if (c == n)
    printf("%d is not present in the array.\n", search);// if the element is not found then print that element is not present

  return 0;
}
