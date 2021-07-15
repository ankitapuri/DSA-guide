int Solution::solve(vector<int> &a) {
    int n=a.size();
    int val=0;
    if(n&1)
    {
        for(int i=0;i<n;i+=2)
            val^=a[i];
    }
    return val;

}
