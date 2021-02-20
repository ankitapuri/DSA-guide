
//C++ program for Tridiagonal matrix
#include <iostream>
using namespace std;

int main()
{
  //Declaring variables
  int i,k=0,j,size;
  int *mat;

  //taking input of the order of matrix
  cout<<"\nEnter order of matrix: " <<endl;
  cin>>size;

  //calculation no of non zero elements to be entered
  int num;
  num=3*size-2;

  //creating matrix
  mat = (int *)malloc(size * sizeof(int));

  //enter non zero element
  cout<<"Enter "<<num<<"  non-zero elements: "<<endl;
    
  for(i=0;i<num;i++)
   {
     cout<<"Enter element "<<i+1<<" : "<<endl;
     cin>>matrix[i];
   }

  //printing matrix
  cout<<"Tridiagonal matrix formed is: "<<endl;
  for(i=1;i<=size;i++)
  {
      for(j=1;j<=size;j++)
     {
       if((i-j)==0)
       {
         cout<<mat[k++]<<" ";
       }
       else if((i-j)==-1)
       {
         cout<<mat[k++]<<" ";
       }
       else if((i-j)==1)
       {
         cout<<mat[k++]<<" ";
       }
       else
       {
         cout<<0<<" ";
       }
     }
     cout<<endl;
  }
  return 0;
}
