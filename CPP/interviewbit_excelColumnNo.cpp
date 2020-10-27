int Solution::titleToNumber(string A) {
    // cout<<A[0]-64;
    int ans=0;
    int j=0;
    for(int i=A.size()-1;i>=0;i--)
    {
        // if(i==A.size()-1)ans+=A[i]-64;
        // else
        ans+=pow(26,j)*(A[i]-64);
        1
        26* 26
        26*26* 1
        // cout<<ans<<" ";
        j++;
    }
    return ans;
}
