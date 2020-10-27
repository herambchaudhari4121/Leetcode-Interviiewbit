void func(vector<int>&v, int A)
{
    vector<bool> p(A+1, true);
    for(int i=2;i*i <= A;i++)
    {
        if(p[i]==true)
        {
        for(int j=i*i;j<=A;j+=i)
        {
            p[j]=false;
        }
    }}
    for(int i=2;i<=A;i++)
    {
        if(p[i]==true)
        v.push_back(i);
    }
}

vector<int> Solution::primesum(int A) {
    vector<int>v;
    vector<int>z;
    func(v, A);
    for(int i=0;i<v.size();i++)
    {
        // cout<<v[i]<<" ";
        int p=A-v[i];
        auto t=lower_bound(v.begin(),v.end(),p);
        //  cout<<*t<<" ";
       
       
        if(v[t-v.begin()]==p)
        {
            z.push_back(v[i]);
            z.push_back(p);
            break;
        }
    }
    return z;
}
