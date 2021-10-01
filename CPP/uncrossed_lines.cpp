
class Solution {
public:
    int maxUncrossedLines(vector<int>& A, vector<int>& B) {
        int i,j,n=A.size(),m=B.size();
        vector<vector<int>> v1;
        vector<int>v;
        
        for(i=0;i<m+1;i++)
        {
            v.push_back(0);
        }
        v1.push_back(v);
        for(i=1;i<n+1;i++)
        {
            v.clear();
            v.push_back(0);
            for(j=1;j<m+1;j++)
            {
                if(B[j-1]==A[i-1])
                {
                    v.push_back(v1[i-1][j-1]+1);
                }
                else
                {
                    v.push_back(max(v[j-1],v1[i-1][j]));
                }
            }
            v1.push_back(v);
        }
        return v1[n][m];
    }
};
