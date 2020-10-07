#include <stdio.h>
void shell_sort(int array[], int size)
{
    int i, j, k, temp;
    for (i = size / 2; i > 0; i = i / 2)
    {
        for (j = i; j < size; j++)
        {
            for(k = j - i; k >= 0; k = k - i)
            {
                if (array[k+i] >= array[k])
                    break;
                else
                {
                    temp = array[k];
                    array[k] = array[k+i];
                    array[k+i] = temp;
                }
            }
        }
    }
}

int main()
{
    int array[30];
    int i,  size;
    
    //input array size
    printf("Enter total no. of array elements : ");
    scanf("%d", &size);
   
    //input of the array
    printf("\nEnter the elements of the array: ");    
    for (i =  0 ; i < size; i++)
    {
        scanf("%d", &array[i]);
    }
    
    shell_sort(array, size);
    
    //sorted array
    printf("\n Sorted array: ");
    for (i = 0; i < size; i++)
        printf("%d ", array[i]);
        
    return 0;
}
