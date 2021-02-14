#include<stdio.h>

int main()
{ //Declaring variables
  int i,j,k=0 ,order;
  printf("Enter the order of the matrix: ");
  scanf("%d",&order);   //taking order input
  int num;
  num=3*order-2;
  int matrix[num];
  printf("Enter %d  non-zero elements: ",num);
  for(i=0;i<num;i++)
  scanf("%d",&matrix[i]);    //Non zero values of the matrix


  printf("Tridiagonal matrix formed is: \n");
  for(i=1;i<=order;i++)
  {
      for(j=1;j<=order;j++)
     { if((i-j)==0)
       printf("%d ",matrix[k++]);
       else if((i-j)==-1)
       printf("%d ",matrix[k++]);
       else if((i-j)==1)
       printf("%d ",matrix[k++]);
       else
       printf("%d ",0);
     }
     printf("\n");
  }
}
