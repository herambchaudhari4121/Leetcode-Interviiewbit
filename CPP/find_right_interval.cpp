
class Solution {
public:
    vector<int> findRightInterval(vector<vector<int>>& in) {
       vector<int> z;
        map<int,int> m;
        int i, n=in.size();
        for(i=0;i<n;i++)
        {
            m[in[i][0]]=i;
        }
        for(i=0;i<n;i++)
        {
            auto itr=m.lower_bound(in[i][1]);
            if(itr==m.end())
                z.push_back(-1);
            else
                z.push_back(itr->second);
        }
        
        return z;
    }
};
