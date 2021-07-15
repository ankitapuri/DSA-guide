int Solution::solve(int a) {
    int N=1e9+7,n;
    
    if(a==0 || a==1 || a==2)
        return a;
    long long ans=0;
    long long val=pow(2,(int)log2(a));
    long long cnt=0;
    for(int j=0;j<31;j++)
    {
        if((val-1)&(1<<j))
            cnt++;
    }
    ans=(ans%N+((val/2)%N*cnt%N)%N)%N;
    ans=(ans+(a-(val-1))%N+solve(a-(val))%N)%N;
    return ans%N;
    
}
