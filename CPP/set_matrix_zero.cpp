void Solution::setZeroes(vector<vector<int> > &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int n=A.size(), m=A[0].size();
    for(int i=0;i<n;i++)
    {
        int f=0;
        for(int j=0;j<m;j++)
        {
            if(A[i][j]==0)
            {
                f=1;
                A[i][j]=-1;
            }
        }
        if(f==1)
        {
            for(int j=0; j<m;j++)
            {
                if(A[i][j]!=-1)
                A[i][j]=0;
            }
        }
    }
    for(int j=0;j<m;j++)
    {
        int f=0;
        for(int i=0; i<n; i++)
        {
            if(A[i][j]==-1)
            {
                f=1;
            }
        }
      
            for(int i=0;i<n;i++)
            {
                if(f==1)
                {
                    A[i][j]=0;
                }
               
            
            }
        
    }
    // for(int i=0; i<n;i++)
    // {
    //     for(int j=0;j<m;j++)
    //     {
    //         if(A[i][j]==-1)
    //         {
    //             A[i][j]=0;
    //         }
    //     }
    // }
    // return A;
}
