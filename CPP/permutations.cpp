void func(vector<int> n, vector<vector<int>> &s, int l, int r)
{
   
    if(l==r)
    {
        s.push_back(n);
        return;
    }
    
    for(int i=l;i<=r;i++)
    {
        swap(n[i],n[l]);
        func(n,s,l+1,r);
        swap(n[l],n[i]);
    }
}


class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
     
        vector<vector<int>> s;
        func(nums,s, 0, nums.size()-1);
        return s;
    }
};
