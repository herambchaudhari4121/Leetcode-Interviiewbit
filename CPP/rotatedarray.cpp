void bs(int l, int r, vector<int> A, int &f, int B)
{
    while(l<=r)
        
    {
        int m=(l+r)/2;
        if(A[m]==B)
        {
            f=m;
            break;
        }
        if(A[m]<B)
        l=m+1;
        else
        r=m-1;
    }
}
int Solution::search(const vector<int> &A, int B) {
    int l=0, r=A.size()-1;
    int k=-1;
    while(l<=r)
    {
        int m=(l+r)/2;
        if(m!=A.size()-1 && A[m]>A[m+1] )
        {
            k=m;
            // cout<<k<<" ";/
            break;
        }
        if(A[m]>A[r])
        {
            l=m+1;
        }
        else
        r=m-1;
    }
    int f=-1;
    bs(0, k, A, f, B);
    if(f!=-1)
    return f;
    bs(k+1,A.size()-1, A, f, B);
    return f;

}
