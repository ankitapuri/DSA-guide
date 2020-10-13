#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
void bubble(int *x,int n)
{
    int i,j,temp;
    for(i=0;i<n-1;i++)
    {
        int flag=0;
            for(j=0;j<n-1-i;j++)
            {
               if(x[j]>x[j+1])
               {
                   temp=x[j+1];
                   x[j+1]=x[j];
                   x[j]=temp;
                   flag=1;
               } 

            }
            if(flag==0)break;//better for sorted array (addative)


    }
}
void insert(int *x,int n)
{
    int i ,j,c;
        for(i=1;i<n;i++)
        {
            j=i-1;
        c=x[i];
        while(j>=0&&c<x[j])
        {
            x[j+1]=x[j];
            j--;
        }
        x[j+1]=c;
        }

}
void selectx(int *x,int n)
{
    int i,o,j,k;
    for(i=0;i<n-1;i++)
    {
         k=0;
        for(j=k=i;j<n;j++)
        {
            if(x[j]<x[k])
            k=j;

        }
        o=x[i];
        x[i]=x[k];
        x[k]=o;
    }
}
void printx(int *x,int n)
 { int i;

     for(int i=0;i<n;i++)
    {
        printf("%d  ",x[i]);
    }
 } 
int quickpat(int *x,int f,int l)
{
    int i,j,pivort,temp;
    j=f-1;
    pivort=x[l];
    for(i=f;i<l;i++)
    {
        if(x[i]<=pivort)
        {
            j++;
            temp=x[j];
            x[j]=x[i];
            x[i]=temp;
        }
    }
        x[l]=x[j+1];
        x[j+1]=pivort;

    
return j+1;
}
void quick(int *x,int f,int l)//divide nd conqure , 0(nLog(n))
{
    int m;
if(f<l)
{
    m=quickpat(x,f,l);
    quick(x,f,m-1);
    quick(x,m+1,l);

}
}
void mergesort(int *x,int l,int mid,int h)
{
 int i=l,j=mid+1,k=l;
 int B[100];
 
 while(i<=mid && j<=h)
 {
 if(x[i]<x[j])
 B[k++]=x[i++];
 else
 B[k++]=x[j++];
 }
 for(;i<=mid;i++)
 B[k++]=x[i];
 for(;j<=h;j++)
 B[k++]=x[j];
 
 for(i=l;i<=h;i++)
 x[i]=B[i];
}
void merge(int *e,int p,int r)//divide and conqure , O(nLog(n))
{
    int q;
    if(p<r)
    {
    q=((p+r)/2);
merge(e,p,q);
merge(e,q+1,r);
mergesort(e,p,q,r);
    }
    
}    
void count(int *x , int n)// O(N+M), but space complex is more
{
int i, j=0,max=-32768;
for(i=0;i<n;i++)
{
if(x[i]>=max)
max=x[i];
}
int b[max+1];
for(i=0;i<=max;i++)
b[i]=0;
for(i=0;i<n;i++)
{
b[x[i]]++;
}
j=0;i=0;
while(i<=max)
{
if(b[i]!=0)
{
x[j]=i;
j++;
b[i]--;
}
else
i++;
}
}
int main() 
{
    int s;
    s=1;
while(s)
{
     printf("\nenter the size of the array\n");
    int n,i;
    scanf("%d",&n);
    int a[n];
     printf("enter the elements of array\n");
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
int ch;
printf("enter 1 for bubble sort\n");
printf("enter 2 for insetion sort\n");
printf("enter 3 for slection sort\n");
printf("enter 4 for quicksort\n");
printf("enter 5 for mergesort\n");
printf("enter 6 for countsort\n");



scanf("%d",&ch);
switch(ch)
{
    case 0: s=0; break;
    case 1: bubble(a,n);printx(a,n); break;
    case 2: insert(a,n); printx(a,n);break;
    case 3: selectx(a,n);printx(a,n);break;
    case 4: quick(a,0,n-1);printx(a,n); break;
    case 5: merge(a,0,n-1);printx(a,n);break;
    case 6: count(a,n);printx(a,n);break;

    default: printf("invalid");
    
}
}
}

