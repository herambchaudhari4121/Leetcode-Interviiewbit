// ///InterviewBit
// void Solution::rotate(vector<vector<int> > &A) {
//     // Do not write main() function.
//     // Do not read input, instead use the arguments to the function.
//     // Do not print the output, instead return values as specified
//     // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
//     int n=A.size();
//     for(int i=0;i<A.size();i++)
//     {
//         for(int j=0;j<n-i;j++)
//         {
//             swap(A[i][j], A[n-j-1][n-i-1]);
//         }
//     }
//     int m=n;
//    n=n/2;
    
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<m;j++)
//         {
//             swap(A[i][j], A[m-i-1][j]);
//         }
//     }
// }

string Solution::multiply(string A, string B) {
    reverse(A.begin(), A.end());
    reverse(B.begin(), B.end());
    int m=A.size()+B.size();
    string s="";
    while(m--)
    {
        s+="0";
    }
    int t=0;
    for(int i=0;i<B.size();i++)
    {
        int c=0, x=0;
        int k=t;
        for(int j=0;j<A.size();j++)
        {
            int p=(B[i]-'0')*(A[j]-'0')+c;
            c=p/10;
            p=p%10;
            // cout<<p<<" ";
            int y=(s[k]-'0')+p+x;
            x=y/10;
            y=y%10;
            
            s[k]=y+'0';
            
            k++;
        }
        // cout<<k<<" ";
        s[k]=(c+x)+'0';
        // cout<<s<<" ";
        
        t++;
    }
    reverse(s.begin(), s.end());
    int q=0;
    while(s[q]=='0')
    {
        q++;
    }
    if(q==s.size())
    return "0";
    return s.substr(q,s.size()-q);
}
