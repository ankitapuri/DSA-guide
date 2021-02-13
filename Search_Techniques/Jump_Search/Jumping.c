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
        
        //Instead of checking consecutive elements one by one, we jump elements by a distance of sqrt(n).
        int jmp=sqrt(n);
        int i=0,pos=jmp;
        while(a[pos]<=ele && pos<n)      //We keep on jumping elements by a distance 'jmp' until the current array position becomes greater than the element to be searched.
        {
                i=pos;
                pos+=jmp;
                if(pos>n-1)
                        flag=-1;
        } 
        for(int j=i;j<pos;j++)       //Now we iterate from the last position 'i' where the a[i] <= ele, and iterate jmp(=sqrt(n) times in worst case. 
        {
                if(a[j]==ele)           // If element is found we store in the variable flag, the final answer of the position where its found.
                        flag=j;
        }
        
        if(flag>=0)
                printf("\nFound at %dth position",flag);
        else
                printf("\nNOT FOUND");
        
}
