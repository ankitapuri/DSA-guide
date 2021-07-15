void reverse(int &ans)
{
    int j,i=0;
    for(j=30;j>=0;j--)
        if(ans&(1<<j))
            break;
    
    while(j>i)
    {
        if(ans&(1<<j))
            ans|=(1<<i);
        i++;
        j--;
    }

}
int Solution::solve(int a) {
    int len=0;
    int cnt=0,p;
    int ttl_combination=0;
    while(ttl_combination<a)
    {
        len++;
        if(len&1)
            p=len/2;
        else
            p=len/2-1;
        ttl_combination+=pow(2,p);
    }
    if(len&1)
        p=len/2;
    else
        p=len/2-1;
    cnt=pow(2,p);
    int ans=0;
    int diff=cnt-(ttl_combination-a)-1;
    ans|=(1<<(len-1));
    ans|=(diff)<<(len/2);
    reverse(ans);
    return ans;
}
