#include <stdio.h>
void shell_sort(int array[], int size)
{
    int i, j, k, temp;

    for (i = size / 2; i > 0; i = i / 2)
    {
        // Do a gapped insertion sort for this gap size(i). 
        // The first gap elements a[0..i-1] are already in gapped order 
        // keep adding one more element until the entire array is gap sorted  
        for (j = i; j < size; j++)
        {
            // add a[j] to the elements that have been gap sorted 
            // save a[j] in temp and make space at position j
            
            temp = arrary[j]; 
            
            // shift earlier gap-sorted elements up until the correct location 
            // for a[j] is found 
            for(k = j; k >=i && array[k-i]>temp ; k = k - i)
            {
                    //  put temp (the original a[j]) in its correct location 
                    array[k]=temp;

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
    printf("\nSorted array: ");
    for (i = 0; i < size; i++)
        printf("%d ", array[i]);
        
    return 0;
}
