/*
Matrix Sorting in C

  Time Complexity: O(n2log2n)
  Space Complexity : Auxiliary Space: O(n2)

*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
     ROW: Number of Rows
     COLUMN: Number of Columns
     i, j = Iterators
     temp = temporary Variable to swap the values
     k = iteration for row iterator i
     w = for storing the previous value of column iterator j
     z = used as a temporary variable for storing k
     q = used as temporary variable for storing column iterator j
     */
    int ROW, COLUMN;
    printf("Row: ");
    scanf("%d", &ROW);
    printf("Column: ");
    scanf("%d", &COLUMN);
    printf("Enter the elements:\n");
    int arr[ROW][COLUMN], minimum, i, j, temp, k, w, z = 0, q = 0 ;

    // Input values in a ROW*COLUMN form
    for(i = 0;i < ROW;i++)
        for(j = 0;j < COLUMN;j++)
        {
            scanf("%d",&arr[i][j]);
        }

    // Traverse over the Matrix
    for(i = 0;i < ROW;i++)
        for(j = 0;j < COLUMN;j++)
        {
            temp = i;
            q = j;

            // Current minimum element
            minimum = arr[i][j];

            // Check if any smaller element is present in the matrix
            w = j;

            for(k = i;k < ROW;k++)
            {

                for(;w < COLUMN;w++) {

                    // Update the minimum element
                    if(arr[k][w] < minimum)
                    {
                        // Update the index of the minimum element
                        minimum = arr[k][w];
                        z = k;
                        q = w;
                    }
                }
                w = 0;
            }

            // Swap the current element and the minimum element
            if(arr[z][q] < arr[i][j])
            {
                temp = arr[i][j];
                arr[i][j] = minimum;
                arr[z][q] = temp;
            }
        }

    // Print the Sorted Matrix
    printf("\nMatrix After Sorting: \n");
    for(i = 0; i < ROW; i++)
    {
        for(j = 0;j < COLUMN;j++)
            printf("%d ",arr[i][j]);
        printf("\n");
    }

    return 0;
}
/*
TEST CASE:
Input:
  Row: 3
  Column: 3
  Enter the elements:
  4 2 9
  3 5 7
  1 6 8

Output :
  Matrix After Sorting:
  1 2 3
  4 5 6
  7 8 9

*/
