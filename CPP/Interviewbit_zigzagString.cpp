string Solution::convert(string A, int B) {
    if(B==1)return A;
    vector<string>s(B,"");
    int j=0 ,f=0;
    for(int i=0;i<A.size();i++)
    {
        if(f==0)
        {
            s[j]+=A[i];
            j++;
            if(j==B)
            {
                j-=2;
            f=1;
            }
        }
        else 
        {
            s[j]+=A[i];
            j--;
            if(j==-1)
            {
                j+=2;
            f=0;
            }
        }
    }
    string t="";
    for(int i=0;i<B;i++)
    {
    //  cout<<s[i]<<" ";  
            t+=s[i];
        
    }
    return t;
}
