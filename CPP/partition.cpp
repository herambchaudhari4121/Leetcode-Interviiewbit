long Solution::solve(int A, vector<int> &B) {
    
    vector<int> v(B.size(),0);
    int s=0;
    for(int i=0;i<B.size();i++)
    {
        s+=B[i];
    }
    int q=s/3;
    if(3*q!=s)  return 0;
    int n=B.size(), p=0;
    for(int i=n-1; i>=0; i--)
    {
        p+=B[i];
        if(p==q)
        {
            v[i]=1;
        }
    }
    for(int i=n-2;i>=0;i--)
    {
        v[i]+=v[i+1];
    }
    p=0;
    int ans=0;
    for(int i=0;i<n-2;i++)
    {
        p+=B[i];
        if(p==q)
        {
            ans+=v[i+2];
        }
    }
    return ans;
}
