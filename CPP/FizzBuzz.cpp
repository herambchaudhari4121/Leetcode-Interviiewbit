vector<string> Solution::fizzBuzz(int A) {
    vector<string> v(A,"");
    
    int x=1;
    for(int i=0;i<A;i++)
    {
        string p="";
        int k=x;
        while(k!=0)
        {
            char t=k%10+'0';
            p=t+p;
            k=k/10;
        }
        v[i]=p;
        x++;
    }
    
    for(int i=2;i<A;i+=3)
    {
        v[i]="Fizz";
    }
    for(int i=4;i<A;i+=5)
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
