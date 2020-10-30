int Solution::maxSubArray(const vector<int> &A) {
    vector<int> v(A.size(),0), y(A.size(),0);
    v[0]=A[0];
    for(int i=1;i<A.size();i++)
    {
        v[i]=max((v[i-1]+A[i]),A[i]);   
    }
  int m=*max_element(v.begin(), v.end());
    return m;
}
