vector<string> Solution::fizzBuzz(int A) {
    vector<string> v(A,"");
    //Drafting it
    long long x=1;
    for(long long i=0;i<A;i++)
    {
        string p="";
        long long k=x;
        while(k!=0)
        {
            char t=k%10+'0';
            p=t+p;
            k=k/10;
        }
        v[i]=p;
        x++;
    }
    
    for(long long i=2;i<A;i+=3)
    {
        v[i]="Fizz";
    }
    for(long long i=4;i<A;i+=5)
    {
        if(v[i][0]=='F')
        {
            v[i]+="Buzz";
        }
        else
        v[i]="Buzz";
    }
    return v;
}
