/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
 bool comp(Interval a, Interval b)
 {
     if(a.start!=b.start)
     {
         return a.start<b.start;
     }
     return a.end<b.end;
 }
vector<Interval> Solution::merge(vector<Interval> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    vector<Interval> v;
    if(A.size()==0 || A.size() == 1)
    {
        return A;
    }
    Interval p;
    sort(A.begin(), A.end(),comp);
    // for(int i=0;i<A.size(); i++)
    // {
    //     cout<<A[i].start<<" "<<A[i].end<<" m ";
    // }
    int f=0;
    int x=A[0].start, y=A[0].end;
    for(int i=1; i< A.size(); i++)
    {
        if(y<A[i].start)
        {
            f=1;
            p.start=x;
            p.end=y;
            v.push_back(p);
            x=A[i].start;
            y=A[i].end;
            i--;
        }
        else
        {
            f=0;
            y=max(y, A[i].end);
        }
    }
    
        p.start=x;
        p.end=y;
        v.push_back(p);
    
    return v;
    
}
