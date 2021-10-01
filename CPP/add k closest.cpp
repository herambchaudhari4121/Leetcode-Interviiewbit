class Solution {
public:
    vector<int> findClosestElements(vector<int>& n, int k, int t) {
         int l=0,r=n.size()-1,l1=0,r1=n.size()-1;
        if(n.size()<=k)
            return n;
        while(l<=r)
        {
            int m=l+(r-l)/2;
            // cout<<m<<" ";
            if(n[m]==t)
            {
                l=m;
                break;
            }
            if(m==l1)
            {
                if(t<n[l1])
                {
                    l=m;
                    break;
                }
            }
            if(m==r1)
            {
                if(t>n[m])
                {
                    l=m+1;
                    break;
                }
            }
            if(t<n[m+1] && t>n[m])
            {

             l=m+1;
                break;
            }
            if(t<n[m])
            {
                r=m;
            }
            else
                l=m+1;
        }

        int f=max(0,l-k);
        int g=min(r1,l+k-1);

        int q=g-f+1-k;
// cout<<f<<" "<<t;
        vector<int>z;
        while(q--)
        {
            l=abs(n[f]-t);
            r=abs(n[g]-t);
            if(l>r)
            {

                f++;
            }
            else
                g--;
        }
        for(int i=f;i<=g;i++)
        {
            z.push_back(n[i]);
        }
        
        return z;
    }
};
