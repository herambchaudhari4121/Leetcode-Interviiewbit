vector<int> Solution::repeatedNumber(const vector<int> &A) {
    // long long int x =0 , y=0;
    // for(int i=0;i<A.size(); i++)
    // {
    //     x+=A[i] - (i+1);
    // }
    // // int y=0;
    // for(long long int i=0;i<A.size();i++)
    // {
    //     y+=((A[i]*A[i])-((long long)(i+1)*(long long)(i+1)));
    // }
    // y=y/x;
    // // a-b=x
    // // a+b=y
    // // a=y-b
    // int a = (int) ((x + y) / 2);
    //   int b = y - a;
    // vector<int> p;
    // p.push_back(a);
    // p.push_back(b);
    // return p;
      long long sum = 0;
       long long squareSum = 0;
       long long temp;
       for (int i = 0; i < A.size(); i++) {
           temp = A[i];
           sum += temp;
           sum -= (i + 1);
           squareSum += (temp * temp);
           squareSum -= ((long long)(i + 1) * (long long)(i + 1));
       }
       // sum = A - B
       // squareSum = A^2 - B^2 = (A - B)(A + B)
       // squareSum / sum = A + B
       squareSum /= sum;

       // Now we have A + B and A - B. Lets figure out A and B now. 
       int x = (int) ((sum + squareSum) / 2);
       int B = squareSum - x;

       vector<int> ret;
       ret.push_back(x);
       ret.push_back(B);
       return ret;
}
