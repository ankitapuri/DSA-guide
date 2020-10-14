//Code contributed by Aditya Prakash(@PrakashAditya17)

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
        int n,ele;
        printf("Enter the size of array");
        scanf("%d",&n);
        int a[n];
        printf("\nEnter the sorted array elements");
        for(int i=0;i<n;i++)
                scanf("%d",&a[i]);
        
        printf("\nEnter the element to be searched");
        scanf("%d",&ele);
        
        int flag=-99;
        int jmp=sqrt(n);
        int i=0,pos=jmp;
        while(a[pos]<=ele && pos<n)
        {
                i=pos;
                pos+=jmp;
                if(pos>n-1)
                        flag=-1;
        } 
        for(int j=i;j<pos;j++)
        {
                if(a[j]==ele)
                        flag=j;
        }
        
        if(flag>=0)
                printf("\nFound at %dth position",flag);
        else
                printf("\nNOT FOUND");
        
}
