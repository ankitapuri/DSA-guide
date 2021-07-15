#include<bits/stdc++.h>
int Solution::singleNumber(const vector<int> &a) {
    int n=a.size();
    int ans=0;
    for(int i=0;i<31;i++)
    {
        int val=(1<<i);
        int cnt=0;
        for(int j=0;j<n;j++)
        {
            if(a[j]&val)
                cnt++;
        }
        if(cnt%3)
            ans+=(1<<i);
    }
    return ans;
}
