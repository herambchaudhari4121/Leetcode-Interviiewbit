void Solution::rotate(vector<vector<int> > &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int n=A.size();
    for(int i=0;i<A.size();i++)
    {
        for(int j=0;j<n-i;j++)
        {
            swap(A[i][j], A[n-j-1][n-i-1]);
        }
    }
    int m=n;
   n=n/2;
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            swap(A[i][j], A[m-i-1][j]);
        }
    }
}
