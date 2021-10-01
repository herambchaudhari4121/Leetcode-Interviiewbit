class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& mat) {
        
        
        // cout<<n;
        vector<int> v;
        if(mat.size()==0 || mat[0].size()==0)
            return v;
        int i,j,x,y,n=mat.size(),m=mat[0].size();
        x=0;y=0;
        while(1)
        {
            for(i=x;i<m;i++)
            {
                v.push_back(mat[y][i]);
            }
            y++;
            if(y==n)
                break;
            for(j=y;j<n;j++)
            {
                v.push_back(mat[j][m-1]);
            }
            m--;
            if(m==x)
                break;
            for(i=m-1;i>=x;i--)
            {
                v.push_back(mat[n-1][i]);
            }
            n--;
            if(n==y)
                break;
            
            for(j=n-1;j>=y;j--)
            {
                v.push_back(mat[j][x]);
            }
            x++;
            if(x==m)
                break;
        }
        if(v.size()==0)
            v.push_back(0);
        return v;
    }
};
