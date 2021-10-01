int Solution::coverPoints(vector<int> &A, vector<int> &B) {
    long long x=A[0], y=B[0], sum=0;
    for(long long i=1;i<A.size();i++)
    {
        if(abs(B[i]-y)>abs(A[i]-x))
        {
            sum+=(abs(B[i]-y));
                
        }
        else
        {
            sum+=(abs(A[i] - x));
        }
        y=B[i];
            x=A[i];
            // cout<<sum<<" ";
    }
    return sum;
}
