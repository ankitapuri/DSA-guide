/*
Matrix Sorting in C

  Time Complexity: O(n2log2n)
  Space Complexity : Auxiliary Space: O(n2)

*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ROW, COLUMN;
    printf("Row: ");
    scanf("%d", &ROW);
    printf("Column: ");
    scanf("%d", &COLUMN);
    printf("Enter the elements:\n");
    int arr[ROW][COLUMN], minimum, i, j, temp, k, w, z = 0, q = 0 ;


    for(i = 0;i < ROW;i++)
        for(j = 0;j < COLUMN;j++)
        {
            scanf("%d",&arr[i][j]);
        }


    for(i = 0;i < ROW;i++)
        for(j = 0;j < COLUMN;j++)
        {
            temp = i;
            q = j;
            minimum = arr[i][j];
            w = j;
            for(k = i;k < ROW;k++)
            {

                for(;w < COLUMN;w++)
                if(arr[k][w] < minimum)
                {
                    minimum = arr[k][w];
                    z = k;
                    q = w;
                }
                w = 0;
            }
            if(arr[z][q] < arr[i][j])
            {
                temp = arr[i][j];
                arr[i][j] = minimum;
                arr[z][q] = temp;
            }
        }

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