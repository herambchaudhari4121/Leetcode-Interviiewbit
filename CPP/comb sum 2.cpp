void func(vector<int>a, vector<vector<int>> &v, int t, int i, vector<int> p){
    if(t==0)
    {    
        v.push_back(p);
        return;
    }
    else if(t<0 || i==a.size()){
        return;
    }
    

    for(int j=i; j<a.size(); j++){
        if(j!=i && a[j]==a[j-1]){
            continue;
        }
        t-=a[j];
        p.push_back(a[j]);
        func(a, v, t, j+1, p);
        p.pop_back();
        t+=a[j];
    }
}

class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& a, int t) {
        sort(a.begin(), a.end());
        vector<vector<int>> v;
        vector<int> p;
        func(a, v, t, 0, p);
        return v;
    }
};
