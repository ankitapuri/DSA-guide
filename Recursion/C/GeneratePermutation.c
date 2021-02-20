  
// Code in C programming language to generate the permutations for the set of numbers entered .

#include <stdio.h>
//function to print the array
void printarray(int arr[], int size)
{
    int i,j;
    for(i=0; i<size; i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
}

//function to swap the variables
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
//permutation function
void permutation(int *arr, int s, int end)
{
    if(s==end)
    {
        printarray(arr, end+1);
        return;
    }
    int i;
    for(i=s;i<=end;i++)
    {
        //swapping numbers
        swap((arr+i), (arr+s));
        //fixing one first digit
        //and calling permutation on
        //the rest of the digits
        permutation(arr, s+1, end);
        swap((arr+i), (arr+s));
    }
}

int main()
{
    //taking input to the array
    int size;
    printf("Enter the size of array\n");
    scanf("%d",&size);
    int i;
    int arr[size];
    printf("Enter numbers : \n");
    for(i=0;i<size;i++)
        scanf("%d",&arr[i]);
    printf("Generated Permutation :\n");
      //calling permutation function
    permutation(arr, 0, size-1);
    return 0;
}
