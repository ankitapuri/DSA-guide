#include<stdio.h>
#include<stdlib.h>


int main()
{
  //Declaring variables
  int i,k=0,j,size;
  int *matrix;

  //taking input of the order of matrix
  printf("\nEnter order of matrix: " );
  scanf("%d", &size);

  //calculation no of non zero elements to be entered
  int num;
  num=3*size-2;

  //creating matrix
  matrix = (int *)malloc(size * sizeof(int));

  //enter non zero element
  printf("\nEnter %d  non-zero elements: ",num);
    printf("\n" );
  for(i=0;i<num;i++)
   {
     printf("\nEnter element %d : ", i+1 );
     scanf("%d", &matrix[i]);
   }

  //printing matrix
  printf("\nTridiagonal matrix formed is: \n");
  for(i=1;i<=size;i++)
  {
      for(j=1;j<=size;j++)
     {
       if((i-j)==0)
       {
         printf("%d ",matrix[k++]);
       }
       else if((i-j)==-1)
       {
         printf("%d ",matrix[k++]);
       }
       else if((i-j)==1)
       {
         printf("%d ",matrix[k++]);
       }
       else
       {
         printf("%d ",0);
       }
     }
     printf("\n");
  }
}
