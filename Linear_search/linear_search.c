//Extended program as Menu based.

#include <stdio.h>
#include <stdlib.h>

int main()
{
  system("cls");
  int array[100], search, c, n,x;

  frame:
  printf("Enter the number of elements in array: ");
  scanf("%d", &n);

  printf("\nEnter %d integer(s): ", n);

  for (c = 0; c < n; c++)
    scanf("%d", &array[c]);
  
  label:
  	printf("\nEnter a number to search: ");
  	scanf("%d", &search);

  	for (c = 0; c < n; c++)
  	{
    	if (array[c] == search)    
    	{
      	printf("\n%d is present at index %d.\n", search, c+1);
      	break;
    	}
  	}
  	if (c == n)
    printf("\n%d is not present in the array.\n", search);
	
	printf("\nIf you want to search again press(1).");
	printf("\nIf you want to enter new array press(2).");
	printf("\nIf you want to enter exit press anything else.\n");
	printf("\nEnter your choice: ");
	scanf("%d", &x);

	switch(x)
	{
		case 1:
		goto label;
		break;
		case 2:
		goto frame;
		break;
		default:
		exit(1);
	}  	
  return 0;
}
