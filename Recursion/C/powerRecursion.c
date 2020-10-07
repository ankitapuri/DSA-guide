#include<stdio.h>



int power(int a,int b)
{
    static int ans=1;
    if(b==0)
        return 1;
    if(b!=0)
    {
        ans*=a;
        b--;
        power(a,b);
    }
    return ans;
}

void main()
{
    int ans=power(2,4);
    printf("%d",ans);
}
