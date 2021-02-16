
//C++ program for Tridiagonal matrix
#include <iostream>
using namespace std;

void main()
{
int i,j,k;
int mat[5][5]={{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25}};
//entered matrix
cout<<"Entered matrix is:\n\n";
for(i=0;i<5;i++)
    {
    for(j=0;j<5;j++)
        {
        cout<<mat[i][j]<<endl;
        }
    printf("\n");
    }
//Display the Tridiagnal matrix
cout<<"\nTridiagnal matrix:\n\n";
cout<<mat[0][0]<<"\t"<<mat[0][1]<<endl;
for(i=1;i<5;i++)
    {
    for(j=1;j<i;j++)
        {
        cout<<"\t";
        }
    if(i==4)
        cout<<mat[4][3]<<"\t"<<mat[4][4]<<endl;
    else
        {
        for(k=i;k<5;k++)
            {
            if(i==k)
            //tridiagonal element found
            cout<<mat[i][k-1]<<"\t"<<mat[i][k]<<"\t"<<mat[i][k+1]<<endl;
            }
        cout<<endl;
        }
    }
}