///InterviewBt
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
