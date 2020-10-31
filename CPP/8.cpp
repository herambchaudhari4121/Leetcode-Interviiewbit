vector<string> Solution::prettyJSON(string A) {
    vector<string> v;
    int q=0;
    for(int i=0; i<A.size(); i++)
    {
        string p="";
        if( A[i]=='}' || A[i]==']')
        {
            q--;
        }
        for(int k=0;k<q;k++)
        {
            p='\t'+p;
        }
        if(A[i]=='{' || A[i]=='[')
        {
            p+=A[i];
            q++;
        }
        else if( A[i]=='}' || A[i]==']')
        {
            p+=A[i];
           if(i!=A.size()-1 && A[i+1]==',')
           {
               p+=A[i+1];
                i++;
           }
        }
        else
        {
            int j;
            for(j=i;j<A.size();j++)
            {
                if(A[j]=='{' || A[j]=='[' || A[j]=='}' || A[j]==']')
                {
                    j--;
                    break;
                }
                else if(A[j]==',')
                {
                    p+=A[j];
                    i=j;
                    break;
                }
                else if(A[j]==':' && (A[j+1]=='{' || A[j+1]=='['))
                {
                    p+=A[j];
                    i=j;
                    break;
                }
                else
                p+=A[j];
            }
            i=j;
        }
        v.push_back(p);
    }
    return v;
}
