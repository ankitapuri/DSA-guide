int Solution::singleNumber(const vector<int> &a) {
    int n=a.size();
    int val=0;
    for(int i=0;i<n;i++)
        val^=a[i];
    return val;
}
